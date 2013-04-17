//
//  BirdsDetailViewController.h
//  BirdWatching
//
//  Created by ManuQiao on 13-4-14.
//  Copyright (c) 2013年 Eisoo Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BirdsDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
