//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/MSPFavoritesContainer.h>

@class MSPQuerySource;

@interface MSPFavoritesContainer (iOSMapsAdditions)
@property(readonly, nonatomic) MSPQuerySource *placeSearchResultAndTransitLineFavoritesQuerySource;
@property(readonly, nonatomic) MSPQuerySource *placeFavoritesSearchResultsQuerySource;
@property(readonly, nonatomic) MSPQuerySource *placeFavoritesQuerySource;
- (id)createBookmarkWithName:(id)arg1 forSearchResult:(id)arg2 zoomLevel:(unsigned long long)arg3;
@end
