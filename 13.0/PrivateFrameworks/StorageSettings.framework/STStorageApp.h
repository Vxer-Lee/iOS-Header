//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FPProviderDomain, LSApplicationProxy, NSArray, NSDate, NSString, PSUsageBundleApp;

@interface STStorageApp : NSObject
{
    long long _purgeableSize;
    _Bool _isDeleting;
    _Bool _isDemoting;
    _Bool _isUserApp;
    _Bool _isSystemApp;
    _Bool _isInternalApp;
    _Bool _isDocumentApp;
    _Bool _specialSizePending;
    _Bool _isPseudoApp;
    LSApplicationProxy *_appProxy;
    FPProviderDomain *_fpDomain;
    PSUsageBundleApp *_usageBundleApp;
    NSArray *_mediaTypes;
    long long _externalDataSize;
    long long _sharedDataSize;
    long long _specialSize;
    long long _coreMLDataSize;
}

+ (void)notifyAppsUpdated;
+ (void)_notifyAppsUpdated:(id)arg1;
+ (void)setLaunchDatesNeedUpdating;
@property _Bool isPseudoApp; // @synthesize isPseudoApp=_isPseudoApp;
@property long long coreMLDataSize; // @synthesize coreMLDataSize=_coreMLDataSize;
@property long long specialSize; // @synthesize specialSize=_specialSize;
@property long long sharedDataSize; // @synthesize sharedDataSize=_sharedDataSize;
@property long long externalDataSize; // @synthesize externalDataSize=_externalDataSize;
@property(retain, nonatomic) NSArray *mediaTypes; // @synthesize mediaTypes=_mediaTypes;
@property(retain) PSUsageBundleApp *usageBundleApp; // @synthesize usageBundleApp=_usageBundleApp;
@property _Bool specialSizePending; // @synthesize specialSizePending=_specialSizePending;
@property _Bool isDocumentApp; // @synthesize isDocumentApp=_isDocumentApp;
@property _Bool isInternalApp; // @synthesize isInternalApp=_isInternalApp;
@property _Bool isSystemApp; // @synthesize isSystemApp=_isSystemApp;
@property _Bool isUserApp; // @synthesize isUserApp=_isUserApp;
@property(retain) FPProviderDomain *fpDomain; // @synthesize fpDomain=_fpDomain;
@property(retain, nonatomic) LSApplicationProxy *appProxy; // @synthesize appProxy=_appProxy;
- (void).cxx_destruct;
- (void)updateSpecialSize;
@property(readonly) NSDate *installDate;
@property(readonly) NSDate *lastUsedDate;
@property(readonly) long long totalSize;
@property(readonly) long long dataSize;
@property(readonly) long long purgeableSize;
@property(readonly) long long dynamicSize;
@property(readonly) long long staticSize;
@property(readonly) NSArray *documents;
@property(readonly) _Bool isDeleted;
@property(readonly) _Bool isDemoted;
@property(readonly) _Bool isDemotable;
@property(readonly) _Bool isDeletable;
@property(readonly) _Bool isUsageApp;
@property(readonly) NSString *bundleVersion;
@property(readonly) NSString *versionString;
@property(readonly) NSString *vendorName;
@property(readonly) NSString *appIdentifier;
@property(readonly) NSString *bundleIdentifier;
@property(readonly) NSString *name;
- (_Bool)valueForBooleanInfoKey:(id)arg1;
- (void)reloadProxy;
- (id)initWithApplicationProxy:(id)arg1;

@end
