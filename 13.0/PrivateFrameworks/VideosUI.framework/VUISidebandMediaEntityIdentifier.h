//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/VUIMediaEntityIdentifierInternal-Protocol.h>

@class NSManagedObjectID, NSString, VUIMediaEntityType;

__attribute__((visibility("hidden")))
@interface VUISidebandMediaEntityIdentifier : NSObject <VUIMediaEntityIdentifierInternal>
{
    NSManagedObjectID *_managedObjectID;
    VUIMediaEntityType *_mediaEntityType;
}

@property(copy, nonatomic) VUIMediaEntityType *mediaEntityType; // @synthesize mediaEntityType=_mediaEntityType;
@property(retain, nonatomic) NSManagedObjectID *managedObjectID; // @synthesize managedObjectID=_managedObjectID;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithManagedObjectID:(id)arg1 mediaEntityType:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

