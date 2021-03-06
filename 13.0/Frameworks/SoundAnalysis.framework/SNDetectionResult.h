//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/SNConfidenceProviding-Protocol.h>
#import <SoundAnalysis/SNConfidenceProvidingWritable-Protocol.h>
#import <SoundAnalysis/SNTimeRangeProviding-Protocol.h>
#import <SoundAnalysis/SNTimeRangeProvidingWritable-Protocol.h>

@class NSString;

@interface SNDetectionResult : NSObject <SNTimeRangeProvidingWritable, SNConfidenceProvidingWritable, SNTimeRangeProviding, SNConfidenceProviding>
{
    double confidence;
    NSString *_identifier;
    CDStruct_e83c9415 timeRange;
}

@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)setConfidence:(double)arg1;
@property(readonly, nonatomic) double confidence;
- (void)setTimeRange:(CDStruct_e83c9415)arg1;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRange;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

