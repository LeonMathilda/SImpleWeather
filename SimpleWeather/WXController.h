//
//  WXController.h
//  SimpleWeather
//
//  Created by 李昂 on 14-3-13.
//  Copyright (c) 2014年 李昂. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WXController : UIViewController<UITableViewDelegate,UITableViewDataSource,UIScrollViewDelegate>
@property(nonatomic,strong)UIImageView* backgroundImageView;
@property(nonatomic,strong)UIImageView* blurredImageView;
@property(nonatomic,strong)UITableView *tableView;
@property(nonatomic,assign)CGFloat screenHeight;
@end
