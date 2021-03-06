//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TransitDirectionsListArtworkItem.h"

#import "TransitDirectionsListExpandableItem-Protocol.h"

@class GEOComposedTransitTripRouteStep, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TransitDirectionsListItemTransitTrip : TransitDirectionsListArtworkItem <TransitDirectionsListExpandableItem>
{
    NSString *_locallyGeneratedSubstepsFooter;
    _Bool _expanded;
    GEOComposedTransitTripRouteStep *_boardStep;
    NSArray *_expandedItems;
}

+ (id)listItemWithBoardStep:(id)arg1;
@property(copy, nonatomic) NSArray *expandedItems; // @synthesize expandedItems=_expandedItems;
@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(readonly, nonatomic) GEOComposedTransitTripRouteStep *boardStep; // @synthesize boardStep=_boardStep;
- (void).cxx_destruct;
- (id)initWithBoardStep:(id)arg1;
- (id)secondaryInstructionColor;
- (unsigned long long)numberOfSubItemsWithForceExpand:(_Bool)arg1;
- (id)subItems;
- (_Bool)shouldEnableExpandedButton;
- (id)_countStopsStringClientFallback;
- (id)_countStopsStringFromServer;
- (id)expandingButtonTitleForExpandedState:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

