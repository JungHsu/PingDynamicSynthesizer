//
//  Fizz+Ex1.h
//  PingDynamicSynthesizerDemoTests
//
//  Created by 徐仲平 on 2019/3/25.
//  Copyright © 2019 徐仲平. All rights reserved.
//

#import "Fizz.h"
#import "PingDynamicSynthesizer.h"
#import "PingCopyFizz.h"

NS_ASSUME_NONNULL_BEGIN

@interface Fizz (Ex1)<DynamicPropertyProtocol>


@property (nonatomic, strong) NSObject      *strongObj;
@property (nonatomic,   weak) NSObject      *weakObj;
@property (nonatomic, assign) NSObject      *assignObj;
@property (nonatomic,   copy) NSString      *copyObj;


@property (atomic, strong) NSObject  *atomicStrongObj;
@property (atomic,   weak) NSObject  *atomicWeakObj;
@property (atomic, assign) NSObject  *atomicAssignObj;
@property (atomic,   copy) NSString *atomicCopyObj;

@property (nonatomic, assign) NSUInteger    uIntegerValue;
@property (nonatomic, assign) NSInteger     integerValue;


@property (nonatomic, assign) BOOL  boolValue;
@property (nonatomic, assign) char  charValue;
@property (nonatomic, assign) short shortValue;
@property (nonatomic, assign) int       intValue;
@property (nonatomic, assign) long  longValue;
@property (nonatomic, assign) long long      dlongValue;
@property (nonatomic, assign) float     floatValue;
@property (nonatomic, assign) double    doubleValue;

@property (nonatomic, assign) unsigned char ucharValue;
@property (nonatomic, assign) unsigned short ushortValue;
@property (nonatomic, assign) unsigned int  uintValue;
@property (nonatomic, assign) unsigned long ulongValue;
@property (nonatomic, assign) unsigned long long udlongValue;
@property (nonatomic, assign) char   *cStrValue;
@property (nonatomic, assign) void  *voidPValue;
@property (nonatomic, strong) Class  classObj;
@end

NS_ASSUME_NONNULL_END
