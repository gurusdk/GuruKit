//
//  SwiftSampleApp.swift
//  SwiftSample
//
//  Created by Alan on 2025/5/15.
//

import SwiftUI
import GuruShared
import GuruKit

@main
struct SwiftSampleApp: App {
    // 适配 UIApplicationDelegate 生命周期
    @UIApplicationDelegateAdaptor(AppDelegate.self) var appDelegate
    var body: some Scene {
        WindowGroup {
            ContentView()
        }
    }
}

class AppDelegate: NSObject, UIApplicationDelegate {
    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey : Any]? = nil) -> Bool {
        GuruSdk.applicationDidFinishLaunching(application, launchOptions: launchOptions)
        return true
    }
    // 可选：处理 URL Scheme 回调
    func application(_ app: UIApplication, open url: URL, options: [UIApplication.OpenURLOptionsKey : Any] = [:]) -> Bool {
        GuruSdk.applicationOpenURL(
            app,
            open: url,
            sourceApplication: options[.sourceApplication] as? String,
            annotation: options[.annotation]
        )
        return true
    }
    func applicationDidBecomeActive(_ application: UIApplication) {
        GuruSdk.onAppForegrounded()
    }
    func applicationWillResignActive(_ application: UIApplication) {
        GuruSdk.onAppBackgrounded()
    }
}
