//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIViewDeferredAnimation.h>

@class _UIViewAnimationFrame;

__attribute__((visibility("hidden")))
@interface _UIViewDeferredBasicAnimation : _UIViewDeferredAnimation
{
    _UIViewAnimationFrame *_finalValue;
}

- (void).cxx_destruct;
- (void)_enumerateAnimationFramesForKeyframes:(CDUnknownBlockType)arg1;
- (void)animateFrameAtIndex:(long long)arg1 animations:(CDUnknownBlockType)arg2;
- (void)addAnimationFrameForValue:(id)arg1;
- (id)_animationFrames;
- (_Bool)isEmpty;

@end
