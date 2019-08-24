//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVCaptureInput.h>

@class AVCaptureCoreMotionMetadataInputInternal, NSString;

@interface AVCaptureCoreMotionMetadataInput : AVCaptureInput
{
    AVCaptureCoreMotionMetadataInputInternal *_internal;
}

+ (id)coreMotionMetadataInput;
+ (void)initialize;
@property(readonly, nonatomic) NSString *sourceID;
- (struct OpaqueCMClock *)clock;
- (id)ports;
- (void)dealloc;
- (id)init;

@end
