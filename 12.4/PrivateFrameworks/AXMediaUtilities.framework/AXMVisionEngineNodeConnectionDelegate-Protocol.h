//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXMediaUtilities/NSObject-Protocol.h>

@class AXMAVCaptureSessionNode, AXMSourceNode, AXMVisionPipelineContext;

@protocol AXMVisionEngineNodeConnectionDelegate <NSObject>
- (void)captureSessionNodeDidDropFrame:(AXMAVCaptureSessionNode *)arg1;
- (void)captureSessionNodeWillProcessFrame:(AXMAVCaptureSessionNode *)arg1;
- (void)captureSessionNodeDidEndProcessingFrames:(AXMAVCaptureSessionNode *)arg1;
- (void)captureSessionNodeDidBeginProcessingFrames:(AXMAVCaptureSessionNode *)arg1;
- (_Bool)engineWillAcceptTiggerWithSource:(AXMSourceNode *)arg1;
- (void)triggerWithSource:(AXMSourceNode *)arg1 context:(AXMVisionPipelineContext *)arg2;
@end
