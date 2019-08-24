//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSUserDefaults, SGContentAdmissionKVOObserver;

@interface SGContentAdmission : NSObject
{
    NSSet *_disabledBundleIdentifiers;
    NSUserDefaults *_defaults;
    SGContentAdmissionKVOObserver *_kvoObserver;
}

+ (void)clearTestSettings;
+ (_Bool)shouldAdmitContentFromBundleIdentifier:(id)arg1;
+ (void)disableBundleIdentifier:(id)arg1;
+ (id)sharedInstance;
+ (void)initialize;
- (void).cxx_destruct;
- (void)_clearTestSettings;
- (_Bool)_shouldAdmitContentFromBundleIdentifier:(id)arg1;
- (void)_disableBundleIdentifier:(id)arg1;
- (void)_refreshDisabledBundleIds;
- (id)init;

@end
