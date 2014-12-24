//
//  StampViewController.h
//  fantasticPics
//
//  Created by 山本文子 on 2014/12/20.
//  Copyright (c) 2014年 山本文子. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface StampViewController : UIViewController{
    
}

@property IBOutlet UIImageView * photoView;
@property (nonatomic) UIImage *photoImage;

-(IBAction)saveImage;
-(IBAction)goNext;

@end