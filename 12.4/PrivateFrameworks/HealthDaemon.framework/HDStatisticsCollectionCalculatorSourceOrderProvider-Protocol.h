//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HKSource, NSArray;

@protocol HDStatisticsCollectionCalculatorSourceOrderProvider <NSObject>
- (HKSource *)sourceForSourceID:(long long)arg1;
- (NSArray *)orderedSourceIDsWithUnorderedIDs:(NSArray *)arg1;
@end
