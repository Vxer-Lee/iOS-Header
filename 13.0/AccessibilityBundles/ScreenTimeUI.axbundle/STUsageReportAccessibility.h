//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "__STUsageReportAccessibility_super.h"

@interface STUsageReportAccessibility : __STUsageReportAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (id)_countedDataSetForItemType:(unsigned long long)arg1 budgetItemIdentifier:(id)arg2 includeIndicatorImageName:(_Bool)arg3;
- (id)_timedDataSetForItemType:(unsigned long long)arg1 useDarkColors:(_Bool)arg2;
- (id)_timedDataSetForItemType:(unsigned long long)arg1 budgetItemIdentifier:(id)arg2;
- (id)screenTimeDataSet;
- (unsigned long long)_axTimePeriodForDescription;
- (id)_accessibilityStringForDate:(id)arg1 timePeriod:(unsigned long long)arg2;

@end
