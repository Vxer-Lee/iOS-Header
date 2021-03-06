//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface BMBasketExtractor : NSObject
{
    double _samplingInterval;
}

@property double samplingInterval; // @synthesize samplingInterval=_samplingInterval;
- (id)extractBasketsFromEvents:(id)arg1 withTemporalFeatures:(_Bool)arg2;
- (id)extractTemporalItemsFromDate:(id)arg1;
- (id)slotForHourOfDay:(id)arg1 slotDuration:(id)arg2;
- (id)slotForHourOfDay:(id)arg1;
- (id)initWithSamplingInterval:(double)arg1;

@end

