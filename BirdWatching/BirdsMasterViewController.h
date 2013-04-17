//
//  BirdsMasterViewController.h
//  BirdWatching
//
//  Created by ManuQiao on 13-4-14.
//  Copyright (c) 2013年 Eisoo Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BirdsDetailViewController;

@interface BirdsMasterViewController : UITableViewController

@property (strong, nonatomic) BirdsDetailViewController *detailViewController;

@end
