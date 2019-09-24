//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/NSCopying-Protocol.h>
#import <Photos/PHRecyclableObject-Protocol.h>

@class NSString;
@protocol PLAssetID, PLResourceDataStore, PLResourceDataStoreKey;

@interface PHLocallyAvailableResourceBag : NSObject <PHRecyclableObject, NSCopying>
{
    _Bool _keyIsHintBased;
    _Bool _isDegraded;
    _Bool _isPrimaryFormat;
    _Bool _isDefaultOrientation;
    id <PLAssetID> _assetID;
    id <PLResourceDataStore> _dataStore;
    id <PLResourceDataStoreKey> _dataStoreKey;
}

@property(nonatomic) _Bool isDefaultOrientation; // @synthesize isDefaultOrientation=_isDefaultOrientation;
@property(nonatomic) _Bool isPrimaryFormat; // @synthesize isPrimaryFormat=_isPrimaryFormat;
@property(nonatomic) _Bool isDegraded; // @synthesize isDegraded=_isDegraded;
@property(nonatomic) _Bool keyIsHintBased; // @synthesize keyIsHintBased=_keyIsHintBased;
@property(retain, nonatomic) id <PLResourceDataStoreKey> dataStoreKey; // @synthesize dataStoreKey=_dataStoreKey;
@property(retain, nonatomic) id <PLResourceDataStore> dataStore; // @synthesize dataStore=_dataStore;
@property(retain, nonatomic) id <PLAssetID> assetID; // @synthesize assetID=_assetID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)prepareForReuse;
- (id)resourceData;
- (id)resourceURL;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
