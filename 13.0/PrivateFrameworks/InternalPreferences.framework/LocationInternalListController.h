//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@interface LocationInternalListController : PSListController
{
}

- (void)restartLocationDaemon;
- (id)specifiers;
- (id)readPreferenceValue:(id)arg1;
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
- (id)getLocationDefaultsValueForKey:(id)arg1;
- (void)setLocationDefaultsValue:(id)arg1 forKey:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;

@end
