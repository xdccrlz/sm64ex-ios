//
//  SettingsViewController.h
//  sm64ios
//
//  Created by Christian Kosman on 9/30/21.
//

#ifndef SettingsViewController_h
#define SettingsViewController_h

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface SettingsViewController : UITableViewController

@property (weak, nonatomic) IBOutlet UISwitch* hapticsSwitch;
@property (weak, nonatomic) IBOutlet UISwitch* hudSwitch;

@end

#endif /* SettingsViewController_h */
