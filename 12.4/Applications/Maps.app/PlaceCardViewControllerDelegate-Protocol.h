//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AddressBookAddress, DirectionItem, GEOMapServiceTraits, GEOSearchCategory, MKMapItem, NSArray, NSDictionary, NSNumber, PlaceCardItem, PlaceCardViewController, SearchFieldItem, SearchResult;
@protocol GEOTransitLineItem;

@protocol PlaceCardViewControllerDelegate <NSObject>
- (void)placeCardViewController:(PlaceCardViewController *)arg1 doSearchItem:(SearchFieldItem *)arg2 withUserInfo:(NSDictionary *)arg3;
- (void)placeCardViewController:(PlaceCardViewController *)arg1 didUpdateLinkedPlacesFromPlaceCardItem:(PlaceCardItem *)arg2;
- (void)placeCardViewController:(PlaceCardViewController *)arg1 openServicesHours:(MKMapItem *)arg2;
- (void)placeCardViewController:(PlaceCardViewController *)arg1 didSelectParent:(MKMapItem *)arg2;
- (void)placeCardViewController:(PlaceCardViewController *)arg1 presentVenueForMapItem:(MKMapItem *)arg2 searchCategory:(GEOSearchCategory *)arg3;
- (void)placeCardViewController:(PlaceCardViewController *)arg1 displayStoreViewControllerForAppWithiTunesIdentifier:(NSNumber *)arg2;
- (void)placeCardViewController:(PlaceCardViewController *)arg1 enterFlyoverForMapItem:(MKMapItem *)arg2;
- (void)placeCardViewController:(PlaceCardViewController *)arg1 editLocationOfMarkedLocation:(SearchResult *)arg2;
- (void)placeCardViewController:(PlaceCardViewController *)arg1 createDroppedPin:(SearchResult *)arg2;
- (void)placeCardViewController:(PlaceCardViewController *)arg1 removeDroppedPin:(SearchResult *)arg2;
- (void)placeCardViewController:(PlaceCardViewController *)arg1 selectDisplayedAddressFromPlaceCardItem:(PlaceCardItem *)arg2;
- (void)placeCardViewController:(PlaceCardViewController *)arg1 selectPlaceCardItem:(PlaceCardItem *)arg2;
- (void)placeCardViewController:(PlaceCardViewController *)arg1 showTransitIncidents:(NSArray *)arg2;
- (void)placeCardViewController:(PlaceCardViewController *)arg1 selectTransitLineItem:(id <GEOTransitLineItem>)arg2;
- (void)placeCardViewController:(PlaceCardViewController *)arg1 selectMapItem:(MKMapItem *)arg2 address:(AddressBookAddress *)arg3;
- (void)placeCardViewController:(PlaceCardViewController *)arg1 doDirectionItem:(DirectionItem *)arg2 userInfo:(NSDictionary *)arg3;
- (long long)displayedViewMode;
- (GEOMapServiceTraits *)newTraits;
@end
