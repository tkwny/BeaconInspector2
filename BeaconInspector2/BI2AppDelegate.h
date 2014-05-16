//
//  BI2AppDelegate.h
//  BeaconInspector2
//
//  Created by Randy Bradshaw on 5/16/14.
//  Copyright (c) 2014 Click Here Labs. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BI2AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
