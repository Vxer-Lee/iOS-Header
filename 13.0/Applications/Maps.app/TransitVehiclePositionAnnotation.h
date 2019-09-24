//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TransitVehicleAnnotation-Protocol.h"

@class NSString, UIColor;
@protocol GEOTransitVehiclePosition;

__attribute__((visibility("hidden")))
@interface TransitVehiclePositionAnnotation : NSObject <TransitVehicleAnnotation>
{
    id <GEOTransitVehiclePosition> _vehiclePosition;
}

@property(readonly, nonatomic) id <GEOTransitVehiclePosition> vehiclePosition; // @synthesize vehiclePosition=_vehiclePosition;
- (void).cxx_destruct;
- (_Bool)allowsTimestampLabel;
- (_Bool)allowsAccuracyRing;
- (id)imageWithScale:(double)arg1 nightMode:(_Bool)arg2;
@property(readonly, nonatomic) UIColor *color;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (void)updateVehiclePosition:(id)arg1;
- (id)initWithVehiclePosition:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end
