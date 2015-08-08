//
//  CoreDataTableViewController.h
//  Photomania
//
//  Created by easonchen on 15/8/8.
//  Copyright (c) 2015年 easonchen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface CoreDataTableViewController : UITableViewController

@property (strong,nonatomic) NSFetchedResultsController *fetchedResultsController;

- (void)performFetch;

@property BOOL debug;

@end
