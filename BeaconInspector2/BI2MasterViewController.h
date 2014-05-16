//
//  BI2MasterViewController.h
//  BeaconInspector2
//
//  Created by Randy Bradshaw on 5/16/14.
//  Copyright (c) 2014 Click Here Labs. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BI2DetailViewController;

#import <CoreData/CoreData.h>

@interface BI2MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) BI2DetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
