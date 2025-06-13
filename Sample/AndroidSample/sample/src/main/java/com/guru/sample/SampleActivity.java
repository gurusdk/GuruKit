package com.guru.sample;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;
import androidx.appcompat.app.AppCompatActivity;

import com.auth0.jwt.JWT;
import com.auth0.jwt.algorithms.Algorithm;
import com.auth0.jwt.interfaces.DecodedJWT;
import com.auth0.jwt.interfaces.JWTVerifier;
import com.guru.android.GuruSdk;
import com.guru.android.account.IUserCenterListener;
import com.guru.android.account.models.LoginResult;
import com.guru.common.auth.AuthProviderType;
import com.guru.common.billing.ProductType;
import com.guru.common.billing.interfaces.IBillingPurchaseCallback;
import com.guru.common.billing.interfaces.SkuDetailsQueryCallback;
import com.guru.common.billing.models.SkuDetails;
import com.guru.common.billing.models.SkuOrderParams;
import com.guru.common.billing.models.SkuQueryParams;
import com.guru.common.interfaces.LoginCallback;
import com.guru.common.network.models.LoginResp;
import com.guru.sample.databinding.SampleMainBinding;

import org.json.JSONObject;

import java.nio.charset.StandardCharsets;
import java.security.KeyFactory;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.security.interfaces.RSAPublicKey;
import java.security.spec.X509EncodedKeySpec;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;
import java.util.Map;

public class SampleActivity extends AppCompatActivity {
    private SampleMainBinding sampleMainBinding;

    protected void onCreate(@Nullable Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        sampleMainBinding = SampleMainBinding.inflate(getLayoutInflater());
        setContentView(sampleMainBinding.getRoot());

        // 初始化按钮监听器
        initButtonListeners();
    }

    @Override
    protected void onResume() {
        super.onResume();
        GuruSdk.onAppForegrounded();
    }

    @Override
    protected void onPause() {
        super.onPause();
        GuruSdk.onAppBackgrounded();
    }

    @Override
    protected void onActivityResult(int requestCode, int resultCode, @Nullable Intent data) {
        super.onActivityResult(requestCode, resultCode, data);
        GuruSdk.onActivityResult(requestCode, resultCode, data);
    }

    /**
     * 初始化所有按钮的点击事件监听器
     */
    private void initButtonListeners() {
        // 1. sdkLoginBtn - 登录
        sampleMainBinding.sdkLoginBtn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                LoginSheet loginSheet = new LoginSheet(SampleActivity.this, new LoginSheet.LoginDialogListener() {
                    @Override
                    public void onFacebookLogin(LoginResp loginResp) {
                        logPrint("login Succeed: \nopenid=" + loginResp.getOpenid() + "\ntoken=" + loginResp.getToken());
                        //将token发送到后端校验
                        jwtDecode(loginResp.getToken());
                    }

                    @Override
                    public void onGoogleLogin(LoginResp loginResp) {
                        logPrint("login Succeed: \nopenid=" + loginResp.getOpenid() + "\ntoken=" + loginResp.getToken());
                        //将token发送到后端校验
                        jwtDecode(loginResp.getToken());
                    }

                    @Override
                    public void onGuestLogin(LoginResp loginResp) {
                        logPrint("login Succeed: \nopenid=" + loginResp.getOpenid() + "\ntoken=" + loginResp.getToken());
                        //将token发送到后端校验
                        jwtDecode(loginResp.getToken());
                    }

                    @Override
                    public void onLoginError(String loginType, String errorMsg) {
                        logPrint(loginType + " 登录失败: " + errorMsg);
                    }
                });
                loginSheet.show();
            }
        });

        // 3. sdkPayBtn - 支付
        sampleMainBinding.sdkPayBtn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                List<SkuQueryParams> list = new ArrayList<SkuQueryParams>();
                list.add(new SkuQueryParams.Builder()
                        .setProductId("com.sample.sku.1") //在Google Play后台配置的商品SKU
                        .setProductType(ProductType.INAPP) //默认且仅支持ProductType.INAPP，传其他无效
                        .build());
                GuruSdk.querySkuDetails(list, new SkuDetailsQueryCallback() {
                    @Override
                    public void onSuccess(@NonNull List<SkuDetails> skuDetails) {
                        SkuDetails sku = skuDetails.get(0);
                        SkuOrderParams.Builder builder = new SkuOrderParams.Builder();
                        builder.setOrderId("your_order_id_genrate_by_your_backend") //接入方后端自己生成管理的订单id
                                .setProductId(sku.getProductId())
                                .setProductType(sku.getProductType())
                                .setAmount(sku.getAmount())
                                .setCurrency(sku.getCurrency());

                        SkuOrderParams params = builder.build();
                        GuruSdk.purchase(SampleActivity.this, params, new IBillingPurchaseCallback() {
                            @Override
                            public void onError(@NonNull Throwable error) {
                                logPrint("purchase failure, " + error.getMessage());
                            }

                            @Override
                            public void onSuccess(@NonNull String receipt) {
                                logPrint("purchase successfully:" + receipt);
                                try {
                                    JSONObject jsonObject = new JSONObject(receipt);
                                    String productId = jsonObject.getString("productId");
                                    String receipt1 = jsonObject.getString("receipt");
                                    //发送到后端去校验数据
                                    jwtDecode(receipt1);
                                } catch (Exception e) {
                                    e.printStackTrace();
                                }

                            }

                            @Override
                            public void onUserCancelled() {
                                logPrint("purchase cancelled");
                            }
                        });
                    }

                    @Override
                    public void onFailed(@NonNull Throwable error) {
                        logPrint("Billing Error: " + error.getMessage());
                    }
                });
            }
        });

        // 4. sdkExitBtn - 退出游戏
        sampleMainBinding.sdkExitBtn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                System.exit(0);
            }
        });

        // 5. sdklogoutBtn - 注销登录
        sampleMainBinding.sdklogoutBtn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                GuruSdk.logout();
                logPrint("Log out");
            }
        });

        // 6. sdksubmitBtn - 创建角色上报
        sampleMainBinding.sdksubmitBtn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                GuruSdk.logEvent("test");
            }
        });

        // 7. getConfigBtn - 获取SDK参数信息
        sampleMainBinding.getConfigBtn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                logPrint(GuruSdk.dumpConfig());
            }
        });
    }

    /**
     * 向日志区域追加信息并自动滚动到底部
     *
     * @param message 要显示的日志信息
     */
    private void logPrint(String message) {
        String currentText = sampleMainBinding.logTxt.getText().toString();
        String newText = currentText + "\n" + message;
        sampleMainBinding.logTxt.setText(newText);

        // 滚动到底部
        sampleMainBinding.logSV.post(() -> sampleMainBinding.logSV.fullScroll(View.FOCUS_DOWN));
    }

    /**
     * 使用SHA-256生成哈希值
     *
     * @param input 要进行hash的字符串
     * @return 生成的SHA-256字符串(十六进制表示)
     */
    private String sha256(String input) {
        try {
            MessageDigest digest = MessageDigest.getInstance("SHA-256");
            byte[] hashBytes = digest.digest(input.getBytes(StandardCharsets.UTF_8));
            return bytesToHex(hashBytes);
        } catch (NoSuchAlgorithmException e) {
            e.printStackTrace();
            return null;
        }
    }

    private String bytesToHex(byte[] bytes) {
        StringBuilder hexString = new StringBuilder();
        for (byte b : bytes) {
            hexString.append(String.format("%02x", b));
        }
        return hexString.toString();
    }

    /**
     * 使用专属秘钥解码数据，此处仅供参考
     * 注：秘钥不可配置在客户端，需在后端配置使用
     *
     * @param jwtData              加密数据
     */
    public void jwtDecode(String jwtData) {
        // 使用示例公钥（实际使用时请替换为您的公钥）
        String appConfigPublicKey = "YOUR_PUBLIC_KEY_HERE";
        String publicKeyPEM = "-----BEGIN PUBLIC KEY-----\n"
                + appConfigPublicKey
                + "\n-----END PUBLIC KEY-----";

        try {
            String publicKeyPEMStripped = publicKeyPEM
                    .replace("-----BEGIN PUBLIC KEY-----", "")
                    .replace("-----END PUBLIC KEY-----", "")
                    .replaceAll("\\s", "");

            byte[] decodedKey = android.util.Base64.decode(publicKeyPEMStripped, android.util.Base64.DEFAULT);
            X509EncodedKeySpec keySpec = new X509EncodedKeySpec(decodedKey);
            KeyFactory keyFactory = KeyFactory.getInstance("RSA");
            RSAPublicKey publicKey = (RSAPublicKey) keyFactory.generatePublic(keySpec);

            // 使用公钥和 RS256 算法创建 JWT 验证器
            Algorithm algorithm = Algorithm.RSA256(publicKey, null);
            JWTVerifier verifier = JWT.require(algorithm).build();

            // 验证并解码 token
            DecodedJWT jwt = verifier.verify(jwtData);

            // 提取 claims，例如 iss、aud、iat、exp
            String issuer = jwt.getIssuer();
            // 注意：audience 可能包含多个值，通常取第一个
            String audience = !jwt.getAudience().isEmpty() ? jwt.getAudience().get(0) : null;
            Date issuedAt = jwt.getIssuedAt();
            Date expiresAt = jwt.getExpiresAt();

            // 获取嵌套的 data 数据（返回 Map 类型）
            Map<String, Object> data = jwt.getClaim("data").asMap();

            logPrint("Issuer (iss): " + issuer);
            logPrint("Audience (aud): " + audience);
            logPrint("Issued At (iat): " + issuedAt);
            logPrint("Expires At (exp): " + expiresAt);
            logPrint("Data: " + data);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
