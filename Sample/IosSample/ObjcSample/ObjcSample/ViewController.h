//
//  ViewController.h
//  objc-sample
//
//  Created by Alan on 2025/5/14.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (nonatomic, strong) UITextView *logTextView;

- (void)loginButtonTapped:(UIButton *)sender;
- (void)queryProductButtonTapped:(UIButton *)sender;
- (void)payButtonTapped:(UIButton *)sender;
- (void)reportEventButtonTapped:(UIButton *)sender;
- (void)logoutButtonTapped:(UIButton *)sender;
- (void)logMessage:(NSString *)message;

@end

