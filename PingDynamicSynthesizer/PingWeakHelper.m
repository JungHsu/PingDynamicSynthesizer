//
//  PingWeakHelper.m
//  动态构造器DEMO
//
//  Created by JungHsu on 2017/12/9.
//  Copyright © 2017年 JungHsu. All rights reserved.
//

#import "PingWeakHelper.h"

@interface PingWeakHelper()
@property (nonatomic, weak) id target;
@end

@implementation PingWeakHelper

+ (instancetype)weakTarget:(id)target{
    PingWeakHelper *helper = [[PingWeakHelper alloc]init];
    [helper setTarget:target];
    return helper;
}

#pragma mark - getters and setters

- (instancetype)getTarget{
    return _target;
}
@end
