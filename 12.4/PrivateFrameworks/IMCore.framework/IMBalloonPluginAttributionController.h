//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IMBalloonPluginAttributionController : NSObject
{
    _Bool _hasPerformedFirstAppExtensionLoad;
    NSMutableDictionary *_expiredBundleIDToTimestampMap;
    NSMutableDictionary *_bundleIDsDisplayingAttribution;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool hasPerformedFirstAppExtensionLoad; // @synthesize hasPerformedFirstAppExtensionLoad=_hasPerformedFirstAppExtensionLoad;
@property(retain, nonatomic) NSMutableDictionary *bundleIDsDisplayingAttribution; // @synthesize bundleIDsDisplayingAttribution=_bundleIDsDisplayingAttribution;
@property(retain, nonatomic) NSMutableDictionary *expiredBundleIDToTimestampMap; // @synthesize expiredBundleIDToTimestampMap=_expiredBundleIDToTimestampMap;
- (void).cxx_destruct;
- (void)_handleInstalledPluginsChanged;
- (void)_purgeLeastRecentlySeenAppBundleIDsIfNecessary;
- (void)_saveToFile;
- (double)_expiryTimeout;
- (id)_currentTimestamp;
- (_Bool)shouldShowAttributionForBundleID:(id)arg1;
- (void)didShowAttributionForBundleIDs:(id)arg1;
- (void)startExpiryTimer;
- (void)dealloc;
- (id)init;

@end
