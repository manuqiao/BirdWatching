//
//  BirdsMasterViewController.h
//  BirdWatching
//
//  Created by ManuQiao on 13-4-14.
//  Copyright (c) 2013年 Eisoo Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BirdsDetailViewController;
@class BirdSightingDataController;

@interface BirdsMasterViewController : UITableViewController

@property (strong, nonatomic) BirdsDetailViewController *detailViewController;
@property (strong, nonatomic) BirdSightingDataController *dataController;
@end
