//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class NSString;
@protocol GEOTransitLine;

@protocol MKInactiveTransitLine <NSObject>
@property(readonly, nonatomic) NSString *serviceResumesDescription;
@property(readonly, nonatomic) id <GEOTransitLine> line;
@end
