//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GuidanceSearchResultsRouteInfoProviding-Protocol.h"

@class DirectionsController, DirectionsManager, NSString;

__attribute__((visibility("hidden")))
@interface GuidanceSearchResultsRouteInfoProvider : NSObject <GuidanceSearchResultsRouteInfoProviding>
{
    DirectionsManager *_directionsManager;
    DirectionsController *_directionsController;
}

@property(readonly, nonatomic) DirectionsController *directionsController; // @synthesize directionsController=_directionsController;
@property(readonly, nonatomic) DirectionsManager *directionsManager; // @synthesize directionsManager=_directionsManager;
- (void).cxx_destruct;
- (id)historyEntryRoute;
- (id)sessionState;
- (id)routeZilchPoints;
- (id)routeId;
- (id)_composedRoute;
- (id)initWithDirectionsManager:(id)arg1 directionsController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

