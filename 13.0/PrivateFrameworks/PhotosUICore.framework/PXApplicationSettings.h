//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXApplicationSettings : PXSettings
{
    double _defaultUserInterfaceTimeoutDuration;
}

+ (id)timeoutTitles;
+ (id)timeoutPossibleValues;
+ (id)sharedInstance;
+ (id)settingsControllerModule;
@property(nonatomic) double defaultUserInterfaceTimeoutDuration; // @synthesize defaultUserInterfaceTimeoutDuration=_defaultUserInterfaceTimeoutDuration;
- (void)setDefaultValues;
- (id)parentSettings;

@end
