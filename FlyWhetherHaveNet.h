//
//  FlyWhetherHaveNet.h
//  Fly知乎
//
//  Created by qianfeng on 15/6/19.
//  Copyright (c) 2015年 Fly. All rights reserved.
//



/*
 
 //判断现在是否是联网状态
 
导入  SystemConfiguration.framework
 
加头  #import<SystemConfiguration/SCNetworkReachability.h>
 
 
 
 */



#import <Foundation/Foundation.h>
#import<SystemConfiguration/SCNetworkReachability.h>
@interface FlyWhetherHaveNet : NSObject
+ (BOOL)connectedToNetwork;

@end
