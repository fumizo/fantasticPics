//
//  ViewController.h
//  fantasticPics
//
//  Created by 山本文子 on 2014/12/08.
//  Copyright (c) 2014年 山本文子. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface ViewController : UIViewController<AVCaptureVideoDataOutputSampleBufferDelegate>

@property (nonatomic, strong) AVCaptureSession* session;
@property (nonatomic, strong) IBOutlet UIImageView* imageView;

@end

