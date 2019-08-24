//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKAbstractMinimumRangeScalingRule.h>

@class HKQuantity, HKUnit, NSDictionary;

@interface HKQuantityMinimumRangeAxisScalingRule : HKAbstractMinimumRangeScalingRule
{
    HKQuantity *_defaultYAxisRangeQuantity;
    NSDictionary *_axisRangeQuantityOverrides;
    HKUnit *_unit;
}

+ (id)ruleWithDefaultYAxisRange:(id)arg1 axisRangeOverrides:(id)arg2;
@property(retain, nonatomic) HKUnit *unit; // @synthesize unit=_unit;
- (void).cxx_destruct;
- (void)_convertQuantities;
- (_Bool)isCompatibleWithQuantityType:(id)arg1;

@end
