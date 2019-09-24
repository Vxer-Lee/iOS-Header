//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKChartPoint-Protocol.h>

@class HKHealthChartPoint, NSDate, NSString;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKBloodPressureChartPoint : NSObject <HKChartPoint>
{
    id <HKGraphSeriesBlockCoordinateInfo> _userInfo;
    HKHealthChartPoint *_systolicChartPoint;
    HKHealthChartPoint *_diastolicChartPoint;
    NSDate *_date;
}

@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) HKHealthChartPoint *diastolicChartPoint; // @synthesize diastolicChartPoint=_diastolicChartPoint;
@property(retain, nonatomic) HKHealthChartPoint *systolicChartPoint; // @synthesize systolicChartPoint=_systolicChartPoint;
@property(retain, nonatomic) id <HKGraphSeriesBlockCoordinateInfo> userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)maxYValue;
- (id)minYValue;
- (id)allYValues;
- (id)yValueForKey:(id)arg1;
- (id)yValue;
- (id)maxXValueAsGenericType;
- (id)minXValueAsGenericType;
- (id)xValueAsGenericType;
- (void)setChartPoint:(id)arg1 forType:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
