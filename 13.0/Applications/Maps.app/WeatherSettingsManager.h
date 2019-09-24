//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WeatherSettingsManager : NSObject
{
}

+ (id)settingsUpdatedNotification;
+ (id)sharedManager;
- (void)_postWeatherConditionsSettingsUpdatedNotification;
@property(nonatomic) _Bool shouldShowWeatherConditions;
@property(nonatomic) _Bool shouldShowAirQualityConditions;
- (void)countryConfigurationDidChange:(id)arg1;
- (id)initSharedManager;
- (id)init;

@end
