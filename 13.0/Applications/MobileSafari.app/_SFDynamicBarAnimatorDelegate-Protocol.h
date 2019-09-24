//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class _SFDynamicBarAnimator;

@protocol _SFDynamicBarAnimatorDelegate <NSObject>
- (void)dynamicBarAnimatorOutputsDidChange:(_SFDynamicBarAnimator *)arg1;
- (void)dynamicBarAnimatorWillLeaveSteadyState:(_SFDynamicBarAnimator *)arg1;
- (void)dynamicBarAnimatorWillEnterSteadyState:(_SFDynamicBarAnimator *)arg1;
- (double)dynamicBarAnimator:(_SFDynamicBarAnimator *)arg1 minimumTopBarHeightForOffset:(double)arg2;
- (_Bool)dynamicBarAnimator:(_SFDynamicBarAnimator *)arg1 canTransitionToState:(long long)arg2 byDraggingWithOffset:(double)arg3;
@end
