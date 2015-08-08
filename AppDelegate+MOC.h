//
//  AppDelegate+MOC.h
//  Photomania
//
//  Created by easonchen on 15/8/8.
//  Copyright (c) 2015年 easonchen. All rights reserved.
//

#import "AppDelegate.h"

@interface AppDelegate (MOC)

- (NSManagedObjectContext *)createMainQueueManagedObjectContext;

- (void)saveContext:(NSManagedObjectContext *)managedObjectContext;

@end
