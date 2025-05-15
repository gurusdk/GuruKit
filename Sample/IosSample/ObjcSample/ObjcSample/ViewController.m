//
//  ViewController.m
//  objc-sample
//
//  Created by Alan on 2025/5/14.
//

#import "ViewController.h"
#import <GuruShared/GuruShared.h>
#import <GuruKit/GuruKit-Swift.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    NSArray *titles = @[@"登录", @"查询商品", @"支付", @"上报事件", @"登出"];
    SEL actions[] = {@selector(loginButtonTapped:), @selector(queryProductButtonTapped:), @selector(payButtonTapped:), @selector(reportEventButtonTapped:), @selector(logoutButtonTapped:)};
    CGFloat buttonWidth = 200;
    CGFloat buttonHeight = 44;
    CGFloat spacing = 20;
    CGFloat startY = 150;
    for (int i = 0; i < titles.count; i++) {
        UIButton *button = [UIButton buttonWithType:UIButtonTypeSystem];
        button.frame = CGRectMake((self.view.frame.size.width - buttonWidth) / 2, startY + i * (buttonHeight + spacing), buttonWidth, buttonHeight);
        [button setTitle:titles[i] forState:UIControlStateNormal];
        button.titleLabel.font = [UIFont boldSystemFontOfSize:18];
        button.backgroundColor = [UIColor colorWithRed:0.9 green:0.9 blue:1 alpha:1];
        button.layer.cornerRadius = 8;
        [button addTarget:self action:actions[i] forControlEvents:UIControlEventTouchUpInside];
        [self.view addSubview:button];
    }
    // 添加日志输出视图
    CGFloat logHeight = 180;
    self.logTextView = [[UITextView alloc] initWithFrame:CGRectMake(16, self.view.frame.size.height - logHeight - 34, self.view.frame.size.width - 32, logHeight)];
    self.logTextView.editable = NO;
    self.logTextView.backgroundColor = [UIColor colorWithWhite:0.97 alpha:1];
    self.logTextView.font = [UIFont systemFontOfSize:14];
    self.logTextView.layer.cornerRadius = 8;
    self.logTextView.textColor = [UIColor darkGrayColor];
    self.logTextView.showsVerticalScrollIndicator = YES;
    [self.view addSubview:self.logTextView];
}

- (void)logMessage:(NSString *)message {
    dispatch_async(dispatch_get_main_queue(), ^{
        NSString *old = self.logTextView.text ?: @"";
        NSString *newLog = [old stringByAppendingFormat:@"%@\n", message];
        self.logTextView.text = newLog;
        NSRange bottom = NSMakeRange(self.logTextView.text.length - 1, 1);
        [self.logTextView scrollRangeToVisible:bottom];
    });
}

#pragma mark - 按钮事件

- (void)loginButtonTapped:(UIButton *)sender {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"选择登录方式"
                                                                   message:nil
                                                            preferredStyle:UIAlertControllerStyleActionSheet];
    UIAlertAction *guestAction = [UIAlertAction actionWithTitle:@"游客登录" style:UIAlertActionStyleDefault handler:^(UIAlertAction * _Nonnull action) {
        [GuruSdk login:GuruSharedAuthProviderType.guest
             onSuccess:^(GuruSharedAuthProviderType *provider, GuruSharedLoginResp *resp) {
                 NSLog(@"游客登录成功: openid=%@, token=%@", resp.openid, resp.token);
                 [self logMessage:[NSString stringWithFormat:@"游客登录成功: openid=%@, token=%@", resp.openid, resp.token]];
                 [GuruSdk queryAndHandleUnconsumedPurchases];
             }
               onError:^(GuruSharedKotlinThrowable *error) {
                 NSLog(@"游客登录失败: %@", error.message);
                 [self logMessage:[NSString stringWithFormat:@"游客登录失败: %@", error.message]];
             }];
    }];
    UIAlertAction *appleAction = [UIAlertAction actionWithTitle:@"苹果登录" style:UIAlertActionStyleDefault handler:^(UIAlertAction * _Nonnull action) {
        [GuruSdk login:GuruSharedAuthProviderType.apple
             onSuccess:^(GuruSharedAuthProviderType *provider, GuruSharedLoginResp *resp) {
                 NSLog(@"苹果登录成功: openid=%@, token=%@", resp.openid, resp.token);
                 [self logMessage:[NSString stringWithFormat:@"苹果登录成功: openid=%@, token=%@", resp.openid, resp.token]];
                 [GuruSdk queryAndHandleUnconsumedPurchases];
             }
               onError:^(GuruSharedKotlinThrowable *error) {
                 NSLog(@"苹果登录失败: %@", error.message);
                 [self logMessage:[NSString stringWithFormat:@"苹果登录失败: %@", error.message]];
             }];
    }];
    UIAlertAction *cancelAction = [UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil];
    [alert addAction:guestAction];
    [alert addAction:appleAction];
    [alert addAction:cancelAction];
    [self presentViewController:alert animated:YES completion:nil];
}

- (void)queryProductButtonTapped:(UIButton *)sender {
    // 示例：查询一个商品
    GuruSharedSkuQueryParamsBuilder *builder1 = [[GuruSharedSkuQueryParamsBuilder alloc] init];
    [builder1 setProductIdProductId:@"com.saintess.alliance.299"];
    
    [builder1 setProductTypeProductType:GuruSharedProductType.inapp];
    GuruSharedSkuQueryParams *params1 = [builder1 build];
    [GuruSdk querySkuDetails:@[params1] onSuccess:^(NSArray<GuruSharedSkuDetails *> *details) {
        NSLog(@"商品信息: %@", details);
        [self logMessage:[NSString stringWithFormat:@"商品信息: %@", details]];
    } onError:^(GuruSharedKotlinThrowable *error) {
        NSLog(@"商品查询失败: %@", error.message);
        [self logMessage:[NSString stringWithFormat:@"商品查询失败: %@", error.message]];
    }];
}

- (void)payButtonTapped:(UIButton *)sender {
    // 示例：先查询商品后购买
    GuruSharedSkuQueryParamsBuilder *builder = [[GuruSharedSkuQueryParamsBuilder alloc] init];
    [builder setProductIdProductId:@"com.saintess.alliance.299"];
    [builder setProductTypeProductType:GuruSharedProductType.inapp];
    GuruSharedSkuQueryParams *params = [builder build];
    [GuruSdk querySkuDetails:@[params] onSuccess:^(NSArray<GuruSharedSkuDetails *> *details) {
        if (details.count > 0) {
            GuruSharedSkuDetails *sku = details[0];
            NSString *orderId = [NSString stringWithFormat:@"%ld", (long)[[NSDate date] timeIntervalSince1970]];
            GuruSharedSkuOrderParamsBuilder *orderBuilder = [[GuruSharedSkuOrderParamsBuilder alloc] init];
            [orderBuilder setOrderIdOrderId:orderId];
            [orderBuilder setProductIdProductId:sku.productId];
            [orderBuilder setProductTypeProductType:sku.productType];
            [orderBuilder setAmountAmount:sku.amount];
            [orderBuilder setCallbackUrlCallbackUrl:@"callback_url"];
            [orderBuilder setCurrencyCurrency:sku.currency];
            GuruSharedSkuOrderParams *orderParams = [orderBuilder build];
            [GuruSdk purchase:orderParams onSuccess:^(NSString *receipt) {
                NSLog(@"购买成功，receipt: %@", receipt);
                [self logMessage:[NSString stringWithFormat:@"购买成功，receipt: %@", receipt]];
            } onError:^(GuruSharedKotlinThrowable *error) {
                NSLog(@"购买失败: %@", error.message);
                [self logMessage:[NSString stringWithFormat:@"购买失败: %@", error.message]];
            } onUserCancelled:^{
                NSLog(@"用户取消购买");
                [self logMessage:@"用户取消购买"];
            }];
        }
    } onError:^(GuruSharedKotlinThrowable *error) {
        NSLog(@"商品查询失败: %@", error.message);
        [self logMessage:[NSString stringWithFormat:@"商品查询失败: %@", error.message]];
    }];
}

- (void)reportEventButtonTapped:(UIButton *)sender {
    // 示例：上报自定义事件
    [GuruSdk logEventWithName:@"ButtonClicked" value:nil params:nil];
    NSLog(@"已上报事件: ButtonClicked");
    [self logMessage:@"已上报事件: ButtonClicked"];
}

- (void)logoutButtonTapped:(UIButton *)sender {
    [GuruSdk logout];
    NSLog(@"已登出");
    [self logMessage:@"已登出"];
}

@end
