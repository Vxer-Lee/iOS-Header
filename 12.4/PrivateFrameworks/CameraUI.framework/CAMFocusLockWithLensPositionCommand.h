//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMFocusLockWithLensPositionCommand : CAMCaptureCommand
{
    float __lensPosition;
    CDUnknownBlockType __completionBlock;
}

+ (float)currentLensPositionSentinel;
@property(copy, nonatomic, setter=_setCompletionBlock:) CDUnknownBlockType _completionBlock; // @synthesize _completionBlock=__completionBlock;
@property(nonatomic, setter=_setLensPosition:) float _lensPosition; // @synthesize _lensPosition=__lensPosition;
- (void).cxx_destruct;
- (void)executeWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLensPosition:(float)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

