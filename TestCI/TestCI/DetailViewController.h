//
//  DetailViewController.h
//  TestCI
//
//  Created by  on 12/4/15.
//  Copyright © 2015 Framgia. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

