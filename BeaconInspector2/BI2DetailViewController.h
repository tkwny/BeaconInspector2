//
//  BI2DetailViewController.h
//  BeaconInspector2
//
//  Created by Randy Bradshaw on 5/16/14.
//  Copyright (c) 2014 Click Here Labs. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BI2DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
