package com.guru.sample;

import android.app.Activity;
import android.content.Context;
import android.view.LayoutInflater;
import android.view.View;
import android.widget.TextView;

import androidx.annotation.NonNull;

import com.google.android.material.bottomsheet.BottomSheetDialog;
import com.guru.android.GuruSdk;
import com.guru.common.auth.AuthProviderType;
import com.guru.common.interfaces.LoginCallback;
import com.guru.common.network.models.LoginResp;

public class LoginSheet extends BottomSheetDialog {

    // 接口回调，用于传递所有登录按钮的点击事件
    public interface LoginDialogListener {
        void onFacebookLogin(LoginResp loginResp);
        void onGoogleLogin(LoginResp loginResp);
        void onGuestLogin(LoginResp loginResp);
        void onLoginError(String loginType, String errorMsg);
    }

    private LoginDialogListener listener;

    // 构造方法
    public LoginSheet(@NonNull Context context, LoginDialogListener listener) {
        super(context);
        this.listener = listener;

        // 设置自定义布局
        View view = LayoutInflater.from(context).inflate(R.layout.login_sheet, null);
        setContentView(view);

        // 设置 Facebook 登录按钮点击事件
        TextView facebookLogin = view.findViewById(R.id.facebookLogin);
        facebookLogin.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                GuruSdk.login((Activity) context, new LoginCallback() {
                    @Override
                    public void onSuccess(@NonNull AuthProviderType authProviderType, @NonNull LoginResp loginResp) {
                        listener.onFacebookLogin(loginResp);
                        dismiss();
                    }

                    @Override
                    public void onError(@NonNull Throwable throwable) {
                        throwable.printStackTrace();
                        listener.onLoginError("Facebook", throwable.getMessage());
                        dismiss();
                    }
                }, AuthProviderType.FACEBOOK);
            }
        });

        // 设置 Google 登录按钮点击事件
        TextView googleLogin = view.findViewById(R.id.googleLogin);
        googleLogin.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                GuruSdk.login((Activity) context, new LoginCallback() {
                    @Override
                    public void onSuccess(@NonNull AuthProviderType authProviderType, @NonNull LoginResp loginResp) {
                        listener.onGoogleLogin(loginResp);
                        dismiss();
                    }

                    @Override
                    public void onError(@NonNull Throwable throwable) {
                        throwable.printStackTrace();
                        listener.onLoginError("Google", throwable.getMessage());
                        dismiss();
                    }
                }, AuthProviderType.GOOGLE);
            }
        });

        // 设置 游客登录按钮点击事件
        TextView guestLogin = view.findViewById(R.id.guestLogin);
        guestLogin.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                GuruSdk.login((Activity) context, new LoginCallback() {
                    @Override
                    public void onSuccess(@NonNull AuthProviderType authProviderType, @NonNull LoginResp loginResp) {
                        listener.onGuestLogin(loginResp);
                        dismiss();
                    }

                    @Override
                    public void onError(@NonNull Throwable throwable) {
                        throwable.printStackTrace();
                        listener.onLoginError("Guest", throwable.getMessage());
                        dismiss();
                    }
                }, AuthProviderType.GUEST);
            }
        });
    }
}