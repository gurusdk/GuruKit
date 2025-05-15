//
//  AppDelegate.m
//  objc-sample
//
//  Created by Alan on 2025/5/14.
//

#import "AppDelegate.h"
#import <GuruShared/GuruShared.h>
#import <GuruKit/GuruKit-Swift.h>

@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // GuruSdk初始化
    [GuruSdk applicationDidFinishLaunching:application launchOptions:launchOptions];
//    [GuruSdk setLogEnabled:true];
//    [GuruSdk setLogLevel: GuruSharedLoggerLogLevel.debug];
    return YES;
}


#pragma mark - UISceneSession lifecycle


- (UISceneConfiguration *)application:(UIApplication *)application configurationForConnectingSceneSession:(UISceneSession *)connectingSceneSession options:(UISceneConnectionOptions *)options {
    // Called when a new scene session is being created.
    // Use this method to select a configuration to create the new scene with.
    return [[UISceneConfiguration alloc] initWithName:@"Default Configuration" sessionRole:connectingSceneSession.role];
}


- (void)application:(UIApplication *)application didDiscardSceneSessions:(NSSet<UISceneSession *> *)sceneSessions {
    // Called when the user discards a scene session.
    // If any sessions were discarded while the application was not running, this will be called shortly after application:didFinishLaunchingWithOptions.
    // Use this method to release any resources that were specific to the discarded scenes, as they will not return.
}

// 处理外部URL回调（如第三方登录）
- (BOOL)application:(UIApplication *)app openURL:(NSURL *)url options:(NSDictionary<UIApplicationOpenURLOptionsKey,id> *)options {
    return [GuruSdk applicationOpenURL:app open:url sourceApplication:options[UIApplicationOpenURLOptionsSourceApplicationKey] annotation:options[UIApplicationOpenURLOptionsAnnotationKey]];
}

- (void)applicationDidBecomeActive:(UIApplication *)application {
    [GuruSdk onAppForegrounded];
}

- (void)applicationWillResignActive:(UIApplication *)application {
    [GuruSdk onAppBackgrounded];
}

@end
