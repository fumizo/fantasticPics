//
//  StampViewController.m
//  fantasticPics
//
//  Created by 山本文子 on 2014/12/20.
//  Copyright (c) 2014年 山本文子. All rights reserved.
//

#import "StampViewController.h"

@interface StampViewController ()

@end

@implementation StampViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    self.photoView.image = self.photoImage;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
