//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEORouteSet;

@interface GEOLazyRouteSetIterator : NSObject
{
    GEORouteSet *_routeSet;
    unsigned long long _contingencyRouteIndex;
}

- (void).cxx_destruct;
- (void)setContingencyRouteIndex:(unsigned long long)arg1;
- (id)nextLazyRoute;
- (void)dealloc;
- (id)initWithRouteSet:(id)arg1;

@end
