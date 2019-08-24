//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsToday/NSObject-Protocol.h>

@class NSArray, NSDate;
@protocol NTHeadlineAnalyticsElementProviding;

@protocol NTTodayEventTracker <NSObject>
- (void)userDidReadHeadlineWithAnalyticsElement:(id <NTHeadlineAnalyticsElementProviding>)arg1 atDate:(NSDate *)arg2;
- (void)userDidSeeHeadlinesWithAnalyticsElements:(NSArray *)arg1 atDate:(NSDate *)arg2;
@end
