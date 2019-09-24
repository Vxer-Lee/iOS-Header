//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNTracePlayerTimelineStreamObjectType-Protocol.h>

@class NSString;

@interface MNTraceHeadingDataRow : NSObject <MNTracePlayerTimelineStreamObjectType>
{
    double _timestamp;
    double _trueHeading;
    double _magneticHeading;
    double _headingAccuracy;
}

@property(nonatomic) double headingAccuracy; // @synthesize headingAccuracy=_headingAccuracy;
@property(nonatomic) double magneticHeading; // @synthesize magneticHeading=_magneticHeading;
@property(nonatomic) double trueHeading; // @synthesize trueHeading=_trueHeading;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) double position;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
