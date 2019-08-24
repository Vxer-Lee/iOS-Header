//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOMapItemTransitSchedule-Protocol.h>

@class NSArray, NSString;
@protocol GEOTransitSystem;

@protocol GEOMapItemTransitInfo <GEOMapItemTransitSchedule>
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) _Bool hasTransitIncidentComponent;
@property(readonly, nonatomic) _Bool isTransitIncidentsTTLExpired;
@property(readonly, nonatomic) NSArray *incidents;
@property(readonly, nonatomic) unsigned long long linesCount;
@property(readonly, nonatomic) NSArray *lines;
@property(readonly, nonatomic) unsigned long long systemsCount;
@property(readonly, nonatomic) NSArray *systems;
@property(readonly, nonatomic) NSArray *connections;
@property(readonly, nonatomic) NSArray *labelItems;
- (NSArray *)linesForSystem:(id <GEOTransitSystem>)arg1;
@end
