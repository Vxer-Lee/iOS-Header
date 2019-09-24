//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ShareItemSource-Protocol.h"

@class MKMapItem, NSArray, NSString, Route, SearchResult, VKPolylineOverlay, _MKCustomFeatureStore, _ShareCustomFeature;
@protocol POIShape;

__attribute__((visibility("hidden")))
@interface ShareItemRoute : NSObject <ShareItemSource>
{
    _MKCustomFeatureStore *_customFeatureStore;
    _ShareCustomFeature *_startCustomFeature;
    _ShareCustomFeature *_endCustomFeature;
    _Bool _includeRoutingApps;
    NSArray *_activityProviders;
    Route *_route;
    id <POIShape> _startPOIShape;
    id <POIShape> _endPOIShape;
    MKMapItem *_origin;
    MKMapItem *_destination;
    VKPolylineOverlay *_polyline;
}

@property(readonly, nonatomic) VKPolylineOverlay *polyline; // @synthesize polyline=_polyline;
@property(readonly, nonatomic) MKMapItem *destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) MKMapItem *origin; // @synthesize origin=_origin;
@property(readonly, nonatomic) _Bool includeRoutingApps; // @synthesize includeRoutingApps=_includeRoutingApps;
@property(readonly, nonatomic) id <POIShape> endPOIShape; // @synthesize endPOIShape=_endPOIShape;
@property(readonly, nonatomic) id <POIShape> startPOIShape; // @synthesize startPOIShape=_startPOIShape;
@property(readonly, nonatomic) Route *route; // @synthesize route=_route;
- (void).cxx_destruct;
@property(readonly, nonatomic) SearchResult *searchResult;
- (CDStruct_b7cb895d)boundingRegionInMapView:(id)arg1;
- (void)drawInMapView:(id)arg1;
@property(readonly, nonatomic) NSString *navigationBarTitle;
- (void)_setupCustomFeatureForMapItem;
- (void)_setupCustomFeatureStore;
- (void)_selectCustomFeature:(id)arg1;
@property(readonly, nonatomic) MKMapItem *mapItem;
@property(readonly, nonatomic) NSArray *excludedActivityTypes;
- (void)setActivityProviderDelegate:(id)arg1;
@property(readonly, nonatomic) NSArray *includedActivityTypes;
@property(readonly, nonatomic) NSArray *applicationActivities;
@property(readonly, nonatomic) NSArray *activityProviders; // @synthesize activityProviders=_activityProviders;
- (id)initWithRoute:(id)arg1 startPOIShape:(id)arg2 endPOIShape:(id)arg3 includeRoutingApps:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
