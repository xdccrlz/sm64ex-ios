//
//  SettingsViewController.m
//  sm64ios
//
//  Created by Christian Kosman on 9/26/21.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#include "AboutViewController.h"

@implementation AboutViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    NSString *versionNumber = [NSString stringWithFormat:@"Version %@", [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"]];
    [self.versionLabel setText:versionNumber];
}

- (IBAction)dismissAboutViewController:(id)sender {
    [self dismissViewControllerAnimated:YES completion:nil];
}

#if TARGET_OS_IOS
- (IBAction)SourcePressed:(id)sender {
    NSURL *url = [NSURL URLWithString:@"https://github.com/ckosmic/sm64ex-ios"];
    [[UIApplication sharedApplication] openURL:url options:@{} completionHandler:nil];
}
#endif

@end
