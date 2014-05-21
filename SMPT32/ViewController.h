//
//  ViewController.h
//  SMPT32
//
//  Created by FHICT on 14-05-14.
//  Copyright (c) 2014 Fontys. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *txtUsername;
@property (weak, nonatomic) IBOutlet UITextField *txtPassword;
- (IBAction)sigininClicked:(id)sender;
- (IBAction)BackgroundTap:(id)sender;


@end
