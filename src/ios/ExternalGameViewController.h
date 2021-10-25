//
//  ExternalGameViewController.h
//  sm64ios
//
//  Created by Christian Kosman on 10/19/21.
//

#ifndef ExternalGameViewController_h
#define ExternalGameViewController_h

#import <UIKit/UIKit.h>

@interface ExternalGameViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel* m_debug_label;

- (void)setDebugText:(NSString *)msg;

@end

#endif /* ExternalGameViewController_h */
