//
//  ADJBackoffStrategy.h
//  Adjust
//
//  Created by Pedro Filipe on 20/04/16.
//  Copyright © 2016 adjust GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, ADJBackoffStrategyType) {
    ADJLongWait = 0,
    ADJShortWait = 1,
    ADJTestWait = 2,
    ADJNoWait = 3
};

@interface ADJBackoffStrategy : NSObject

@property (nonatomic, assign) NSUInteger minRetries;
@property (nonatomic, assign) NSTimeInterval secondMultiplier;
@property (nonatomic, assign) NSTimeInterval maxWait;
@property (nonatomic, assign) double minRange;
@property (nonatomic, assign) double maxRange;

- (id) initWithType:(ADJBackoffStrategyType)strategyType;
+ (ADJBackoffStrategy *)backoffStrategyWithType:(ADJBackoffStrategyType)strategyType;

@end
