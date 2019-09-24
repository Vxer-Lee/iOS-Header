//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDuet/_DKMonitoring-Protocol.h>

@class NSDate;

@protocol _DKHistoricalMonitor <_DKMonitoring>
@property(readonly, nonatomic) NSDate *lastUpdate;
@property(copy, nonatomic) CDUnknownBlockType shutdownHandler;
@property(copy, nonatomic) CDUnknownBlockType historicalHandler;
- (void)update;
@end
