//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PSUIAppCellularUsageBundleIdentifierDirectory : NSObject
{
}

+ (id)sharedInstance;
- (_Bool)bundleIdentifierContainsWebClipIdentifier:(id)arg1;
- (id)webAppProxyForBundleID:(id)arg1;
- (id)appProxyForBundleID:(id)arg1;
- (id)displayNameForAppProxy:(id)arg1;
- (id)_displayNameForBundleIdentifiers:(id)arg1;
- (id)_localizedDisplayNameForAppProxy:(id)arg1;
- (_Bool)isSystemService:(id)arg1;
- (id)systemServiceDisplayName:(id)arg1;
- (id)systemServicesDictionary;
- (id)umbrellaBundleIDs;
- (id)bundleIDsToCoalesce;
- (id)blacklistedBundleIDs;
- (_Bool)shouldForceDisplayOfBundleID:(id)arg1;
- (id)forceDisplayedBundleIDs;
- (id)bundleIDsToRemap;
- (id)init;
- (id)initPrivate;

@end
