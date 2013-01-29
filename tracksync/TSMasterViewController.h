//
//  TSMasterViewController.h
//  tracksync
//
//  Created by Raunak Roy on 1/28/13.
//  Copyright (c) 2013 kickass. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TSDetailViewController;

@interface TSMasterViewController : UITableViewController

@property (strong, nonatomic) TSDetailViewController *detailViewController;

@end
