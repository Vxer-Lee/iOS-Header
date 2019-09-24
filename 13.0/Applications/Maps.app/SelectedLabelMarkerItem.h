//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PersonalizedItem-Protocol.h"

@class AddressBookAddress, MKMapItem, MapsLocationOfInterest, NSArray, NSDate, NSSet, NSString, ParkedCar, PersonalizedItemPrioritizedStringAdornment, PersonalizedItemSource, PersonalizedItemStyleAttributesAdornment, SearchResult, VKLabelMarker;

__attribute__((visibility("hidden")))
@interface SelectedLabelMarkerItem : NSObject <PersonalizedItem>
{
    NSSet *_keys;
    VKLabelMarker *_labelMarker;
    NSString *_title;
    struct CLLocationCoordinate2D _coordinate;
    PersonalizedItemSource *source;
    MKMapItem *_mapItem;
    PersonalizedItemStyleAttributesAdornment *_styleAttributes;
}

@property(readonly, nonatomic) VKLabelMarker *labelMarker; // @synthesize labelMarker=_labelMarker;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(readonly, nonatomic) NSSet *keys; // @synthesize keys=_keys;
@property(readonly, nonatomic) PersonalizedItemStyleAttributesAdornment *styleAttributes; // @synthesize styleAttributes=_styleAttributes;
@property(readonly, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(nonatomic) __weak PersonalizedItemSource *source; // @synthesize source;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool showsBalloonCallout;
@property(readonly, nonatomic) unsigned long long priority;
@property(readonly, nonatomic) _Bool mustRefineMapItem;
@property(readonly, nonatomic) NSArray *searchableStrings;
@property(readonly, nonatomic) _Bool shouldBeHiddenFromMap;
@property(readonly, nonatomic) _Bool shouldBeClustered;
@property(readonly, nonatomic) unsigned long long sortOrder;
@property(readonly, nonatomic) AddressBookAddress *address;
@property(readonly, nonatomic) VKLabelMarker *sourceLabelMarker;
@property(readonly, nonatomic) SearchResult *searchResult;
@property(readonly, nonatomic) PersonalizedItemPrioritizedStringAdornment *subtitle;
@property(readonly, nonatomic) PersonalizedItemPrioritizedStringAdornment *prefix;
@property(readonly, nonatomic) PersonalizedItemPrioritizedStringAdornment *title;
- (id)initWithLabelMarker:(id)arg1;
- (id)initWithMapItem:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDate *eventDate;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isRouteStartOrEnd;
@property(readonly, nonatomic) MapsLocationOfInterest *locationOfInterest;
@property(readonly, nonatomic) _Bool needsToPreserveSelection;
@property(readonly, nonatomic) ParkedCar *parkedCar;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsDisplayedSearchResultsTypePoints;

@end
