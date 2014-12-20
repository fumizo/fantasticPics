//
//  ViewController.h
//  fantasticPics
//
//  Created by 山本文子 on 2014/12/08.
//  Copyright (c) 2014年 山本文子. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

#import "DBCameraViewController.h"
#import "DBCameraContainerViewController.h"


@interface ViewController : UIViewController <DBCameraViewControllerDelegate>{
    IBOutlet UIImageView *imageView;
}

-(IBAction)openingCamera ;

@end

