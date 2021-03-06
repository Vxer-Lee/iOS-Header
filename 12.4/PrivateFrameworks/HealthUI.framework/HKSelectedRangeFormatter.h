//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKUnitPreferenceController, UIFont;

@interface HKSelectedRangeFormatter : NSObject
{
    HKUnitPreferenceController *_unitPreferenceController;
    UIFont *_majorFont;
    UIFont *_minorFont;
}

@property(retain, nonatomic) UIFont *minorFont; // @synthesize minorFont=_minorFont;
@property(retain, nonatomic) UIFont *majorFont; // @synthesize majorFont=_majorFont;
@property(retain, nonatomic) HKUnitPreferenceController *unitPreferenceController; // @synthesize unitPreferenceController=_unitPreferenceController;
- (void).cxx_destruct;
- (id)_statFormatterItemOptionsForTimePeriodDisplayType:(id)arg1 timeScope:(long long)arg2 context:(long long)arg3;
- (id)_statFormatterItemOptionsForDisplayType:(id)arg1 quantityType:(id)arg2 timeScope:(long long)arg3 context:(long long)arg4;
- (id)_formatterForDisplayType:(id)arg1 timeScope:(long long)arg2 majorFont:(id)arg3 minorFont:(id)arg4;
- (id)selectedRangeDataWithCoordinateInfo:(id)arg1 majorFont:(id)arg2 minorFont:(id)arg3 displayType:(id)arg4 timeScope:(long long)arg5 context:(long long)arg6;
- (id)selectedRangeDataWithGraphView:(id)arg1 majorFont:(id)arg2 minorFont:(id)arg3 displayType:(id)arg4 timeScope:(long long)arg5 context:(long long)arg6;
- (id)selectedRangeDataWithCoordinates:(id)arg1 majorFont:(id)arg2 minorFont:(id)arg3 displayType:(id)arg4 timeScope:(long long)arg5 context:(long long)arg6;
- (id)initWithUnitPreferenceController:(id)arg1;

@end

