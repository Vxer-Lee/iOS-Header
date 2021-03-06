//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ARRenderStats : NSObject
{
    _Bool _composited;
    unsigned long long _vsyncCount;
    double _vsyncStart;
    double _vsyncEnd;
    double _vsyncTime;
    double _vsyncTimeActual;
    double _renderStart;
    double _renderEndCPU;
    double _renderTimeCPU;
    double _renderEnd;
    double _renderTime;
    double _renderEndEstimate;
}

@property(nonatomic) double renderEndEstimate; // @synthesize renderEndEstimate=_renderEndEstimate;
@property(readonly, nonatomic, getter=isComposited) _Bool composited; // @synthesize composited=_composited;
@property(readonly, nonatomic) double renderTime; // @synthesize renderTime=_renderTime;
@property(readonly, nonatomic) double renderEnd; // @synthesize renderEnd=_renderEnd;
@property(readonly, nonatomic) double renderTimeCPU; // @synthesize renderTimeCPU=_renderTimeCPU;
@property(readonly, nonatomic) double renderEndCPU; // @synthesize renderEndCPU=_renderEndCPU;
@property(readonly, nonatomic) double renderStart; // @synthesize renderStart=_renderStart;
@property(readonly, nonatomic) double vsyncTimeActual; // @synthesize vsyncTimeActual=_vsyncTimeActual;
@property(readonly, nonatomic) double vsyncTime; // @synthesize vsyncTime=_vsyncTime;
@property(readonly, nonatomic) double vsyncEnd; // @synthesize vsyncEnd=_vsyncEnd;
@property(readonly, nonatomic) double vsyncStart; // @synthesize vsyncStart=_vsyncStart;
@property(readonly, nonatomic) unsigned long long vsyncCount; // @synthesize vsyncCount=_vsyncCount;
- (id)description;
- (void)renderComposited;
- (void)endRender;
- (void)endRenderCPU;
- (void)startRender;
- (void)tickRender:(id)arg1;

@end

