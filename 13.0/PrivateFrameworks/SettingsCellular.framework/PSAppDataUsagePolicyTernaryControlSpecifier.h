//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SettingsCellular/PSAppCellularUsageSpecifier.h>

@class NSString;

@interface PSAppDataUsagePolicyTernaryControlSpecifier : PSAppCellularUsageSpecifier
{
    _Bool _fullyInitialized;
    NSString *_displayName;
}

@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (void)setCellularUsagePolicy:(id)arg1;
- (id)cellularUsagePolicy;
- (void)finishInitializing:(unsigned long long)arg1;
- (id)initWithBundleID:(id)arg1 displayName:(id)arg2 statisticsCache:(id)arg3;

@end
