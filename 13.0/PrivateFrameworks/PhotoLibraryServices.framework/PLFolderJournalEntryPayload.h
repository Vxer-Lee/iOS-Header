//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLGenericAlbumJournalEntryPayload.h>

@class NSOrderedSet;

@interface PLFolderJournalEntryPayload : PLGenericAlbumJournalEntryPayload
{
}

+ (_Bool)isValidForPersistenceWithObjectDictionary:(id)arg1;
+ (void)updateChildrenOrderingInFolder:(id)arg1 usingChildCollectionUUIDs:(id)arg2 includePendingChanges:(_Bool)arg3;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (unsigned int)payloadVersion;
+ (id)payloadClassID;
+ (id)modelProperties;
+ (id)modelPropertiesDescription;
- (_Bool)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3;
- (void)updateAlbum:(id)arg1 includePendingChanges:(_Bool)arg2;
- (id)insertAlbumFromDataInManagedObjectContext:(id)arg1;
@property(readonly, nonatomic) _Bool isProjectAlbumRootFolder;
@property(readonly, nonatomic) _Bool isRootFolder;
@property(readonly, nonatomic) NSOrderedSet *childCollectionUUIDs;
- (void)updatePayloadAttributes:(id)arg1 withDecodedAttributes:(id)arg2 forPayloadProperty:(id)arg3;
- (void)updateEncodableAttributes:(id)arg1 fromPayloadAttributes:(id)arg2 forPayloadProperty:(id)arg3;
- (_Bool)updatePayloadAttributes:(id)arg1 withManagedObject:(id)arg2 forPayloadProperty:(id)arg3;

@end
