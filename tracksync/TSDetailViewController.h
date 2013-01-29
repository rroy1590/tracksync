//
//  TSDetailViewController.h
//  tracksync
//
//  Created by Raunak Roy on 1/28/13.
//  Copyright (c) 2013 kickass. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TSDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
