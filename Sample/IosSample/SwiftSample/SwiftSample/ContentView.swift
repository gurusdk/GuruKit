//
//  ContentView.swift
//  SwiftSample
//
//  Created by Alan on 2025/5/15.
//

import SwiftUI
import GuruKit
import GuruShared

@available(iOS 13.0, *)
struct ContentView: View {
    @State private var logText: String = ""
    @State private var isLoginSheetPresented = false
    
    var body: some View {
        VStack(spacing: 20) {
            Button("登录") {
                isLoginSheetPresented = true
            }
            .buttonStyle(ActionButtonStyle())
            .sheet(isPresented: $isLoginSheetPresented) {
                LoginSheetView(logText: $logText)
            }
            Button("查询商品") {
                queryProduct()
            }
            .buttonStyle(ActionButtonStyle())
            Button("支付") {
                pay()
            }
            .buttonStyle(ActionButtonStyle())
            Button("上报事件") {
                GuruSdk.logEvent(name: "ButtonClicked")
                appendLog("已上报事件: ButtonClicked")
            }
            .buttonStyle(ActionButtonStyle())
            Button("登出") {
                GuruSdk.logout()
                appendLog("已登出")
            }
            .buttonStyle(ActionButtonStyle())
            Spacer()
            ScrollView {
                Text(logText)
                    .frame(maxWidth: .infinity, alignment: .leading)
                    .padding()
                    .background(Color(.systemGray6))
                    .cornerRadius(8)
            }
            .frame(height: 280)
            .padding(.horizontal)
        }
        .background(Color.white)
    }
    
    func appendLog(_ msg: String) {
        logText += msg + "\n"
    }
    
    func queryProduct() {
        let builder = SkuQueryParams.Builder()
            .setProductId(productId: "com.sample.sku.1") // productId: 在苹果后台配置的商品SKU
            .setProductType(productType: ProductType.inapp) // productType: 暂时只支持inapp
        GuruSdk.querySkuDetails([builder.build()]) { details in
            appendLog("商品信息: \(details)")
        } onError: { error in
            appendLog("商品查询失败: \(error.message ?? "未知错误")")
        }
    }
    
    func pay() {
        let builder = SkuQueryParams.Builder()
            .setProductId(productId: "com.sample.sku.1") // productId: 在苹果后台配置的商品SKU
            .setProductType(productType: ProductType.inapp) // productType: 暂时只支持inapp
        GuruSdk.querySkuDetails([builder.build()]) { details in
            if let sku = details.first {
                let orderBuilder = SkuOrderParams.Builder()
                    .setOrderId(orderId: "your_order_id_genrate_by_your_backend") // orderId: 接入方后端自己生成管理的订单id
                    .setProductId(productId: sku.productId)
                    .setProductType(productType: sku.productType)
                    .setAmount(amount: sku.amount)
                    .setCurrency(currency: sku.currency)
                GuruSdk.purchase(orderBuilder.build()) { receipt in
                    appendLog("购买成功，receipt: \(receipt)")
                } onError: { error in
                    appendLog("购买失败: \(error.message ?? "未知错误")")
                } onUserCancelled: {
                    appendLog("用户取消购买")
                }
            }
        } onError: { error in
            appendLog("商品查询失败: \(error.message ?? "未知错误")")
        }
    }
}

@available(iOS 13.0, *)
struct ActionButtonStyle: ButtonStyle {
    func makeBody(configuration: Configuration) -> some View {
        configuration.label
            .frame(maxWidth: .infinity)
            .frame(height: 44)
            .background(Color.blue.opacity(configuration.isPressed ? 0.7 : 0.9))
            .foregroundColor(.white)
            .cornerRadius(8)
            .font(.system(size: 18, weight: .bold))
            .padding(.horizontal)
    }
}
@available(iOS 13.0, *)
struct LoginSheetView: View {
    @Environment(\.presentationMode) var presentationMode
    @Binding var logText: String
    var body: some View {
        VStack(spacing: 20) {
            Text("选择登录方式").font(.headline)
            Button("游客登录") {
                GuruSdk.login(.guest) { provider, resp in
                    appendLog("游客登录成功: openid=\(resp.openid), token=\(resp.token)")
                    GuruSdk.queryAndHandleUnconsumedPurchases()
                    presentationMode.wrappedValue.dismiss()
                } onError: { error in
                    appendLog("游客登录失败: \(error.message ?? "未知错误")")
                    presentationMode.wrappedValue.dismiss()
                }
            }.buttonStyle(ActionButtonStyle())
            Button("苹果登录") {
                GuruSdk.login(.apple) { provider, resp in
                    appendLog("苹果登录成功: openid=\(resp.openid), token=\(resp.token)")
                    GuruSdk.queryAndHandleUnconsumedPurchases()
                    presentationMode.wrappedValue.dismiss()
                } onError: { error in
                    appendLog("苹果登录失败: \(error.message ?? "未知错误")")
                    presentationMode.wrappedValue.dismiss()
                }
            }.buttonStyle(ActionButtonStyle())
            Button("FB登录") {
                GuruSdk.login(.facebook) { provider, resp in
                    appendLog("FB登录成功: openid=\(resp.openid), token=\(resp.token)")
                    GuruSdk.queryAndHandleUnconsumedPurchases()
                    presentationMode.wrappedValue.dismiss()
                } onError: { error in
                    appendLog("FB登录失败: \(error.message ?? "未知错误")")
                    presentationMode.wrappedValue.dismiss()
                }
            }.buttonStyle(ActionButtonStyle())
            Button("取消") {
                presentationMode.wrappedValue.dismiss()
            }.buttonStyle(ActionButtonStyle())
        }
        .padding()
    }
    func appendLog(_ msg: String) {
        logText += msg + "\n"
    }
}

@available(iOS 13.0, *)
#Preview {
    ContentView()
}
