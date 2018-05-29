//
//  PingWeakHelper.h
//  PingDynamicSynthesizerDEMO
//
//  Created by JungHsu on 2017/12/9.
//  Copyright © 2017年 JungHsu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PingWeakHelper : NSObject

+ (instancetype _Nonnull) weakTarget:(nonnull id)target;

- (instancetype _Nullable )getTarget;
@end
