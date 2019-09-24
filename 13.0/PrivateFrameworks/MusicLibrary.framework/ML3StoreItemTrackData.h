//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDateFormatter;

@interface ML3StoreItemTrackData : NSObject
{
    NSArray *_lookupItems;
    NSData *_trackData;
    NSArray *_parsedStoreItemsImportProperties;
    NSDateFormatter *_storePlatformDateFormatter;
}

- (void).cxx_destruct;
- (id)_bestArtworkImageURLFromStoreArtworkVariants:(id)arg1 cropStyle:(id)arg2;
- (id)_bestPlaylistArtworkImageURLFromStoreArtworkVariants:(id)arg1;
- (id)_bestAlbumArtworkImageURLFromStoreArtworkVariants:(id)arg1;
- (_Bool)_platformMetadataItemIsMovieKind:(id)arg1;
- (_Bool)_platformMetadataItemIsTVShowKind:(id)arg1;
- (_Bool)_platformMetadataItemIsVideoKind:(id)arg1;
- (_Bool)_platformMetadataItemIsAUCVideoKind:(id)arg1;
- (_Bool)_platformMetadataItemIsAUCAudioKind:(id)arg1;
- (_Bool)_platformMetadataItemIsAUCKind:(id)arg1;
- (_Bool)_platformMetadataItemIsMusicVideoKind:(id)arg1;
- (_Bool)_platformMetadataItemIsSongKind:(id)arg1;
- (_Bool)_platformMetadataItemIsMusicKind:(id)arg1;
- (_Bool)_platformMetadataItem:(id)arg1 matchesKind:(id)arg2;
- (id)_allSongItemsFromCollectionLookupItem:(id)arg1;
- (id)_allSongItemsFromLookupItems:(id)arg1;
- (double)_songDurationFromOffersArray:(id)arg1;
- (id)_lookupItemArtworksForArtworkDictionaries:(id)arg1;
- (long long)_episodeTypeFromVideoSubTypeString:(id)arg1;
- (id)_artworkTokenForItemWithCollectionID:(long long)arg1 itemID:(long long)arg2;
- (id)_artworkTokenFromLookupItem:(id)arg1;
- (id)_importDictionaryForLookupItem:(id)arg1 parentCollectionCache:(id)arg2;
- (id)_parentDictForItemAlbumId:(id)arg1;
- (id)_storeItemsImportPropertiesFromTrackData:(id)arg1;
- (id)_storeItemsImportPropertiesFromLookupItems:(id)arg1;
- (id)_storePlatformDateFormatter;
@property(readonly, nonatomic) unsigned long long trackCount;
@property(readonly, nonatomic) NSArray *parsedStoreItemsImportProperties;
@property(readonly, nonatomic) NSData *trackData;
- (id)initWithTrackData:(id)arg1;
- (id)initWithLookupItems:(id)arg1;

@end
