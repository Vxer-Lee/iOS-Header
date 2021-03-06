//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/ARSensorData-Protocol.h>

@class NSString;

@interface ARAudioData : NSObject <ARSensorData>
{
    double _timestamp;
    struct opaqueCMSampleBuffer *_sampleBuffer;
}

@property(readonly, nonatomic) struct opaqueCMSampleBuffer *sampleBuffer; // @synthesize sampleBuffer=_sampleBuffer;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void)dealloc;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

