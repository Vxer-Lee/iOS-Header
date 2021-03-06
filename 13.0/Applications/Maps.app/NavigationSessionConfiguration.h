//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOMapServiceTraits, MNStartNavigationDetails, NSArray, RouteCollection;

__attribute__((visibility("hidden")))
@interface NavigationSessionConfiguration : NSObject
{
    RouteCollection *_routeCollection;
    MNStartNavigationDetails *_startNavigationDetails;
    GEOMapServiceTraits *_traits;
    NSArray *_automaticSharingContacts;
}

@property(copy, nonatomic) NSArray *automaticSharingContacts; // @synthesize automaticSharingContacts=_automaticSharingContacts;
@property(readonly, copy, nonatomic) GEOMapServiceTraits *traits; // @synthesize traits=_traits;
@property(readonly, nonatomic) MNStartNavigationDetails *startNavigationDetails; // @synthesize startNavigationDetails=_startNavigationDetails;
@property(readonly, nonatomic) RouteCollection *routeCollection; // @synthesize routeCollection=_routeCollection;
- (void).cxx_destruct;
- (id)initWithStartNavigationDetails:(id)arg1 routeCollection:(id)arg2 traits:(id)arg3;

@end

