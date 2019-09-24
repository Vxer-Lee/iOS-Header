//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBTransaction.h>

#import <SpringBoard/SBLayoutStateTransitionObserver-Protocol.h>

@class NSString, SBLayoutStateTransitionCoordinator;

@interface SBWaitForSceneLayoutTransitionTransaction : SBTransaction <SBLayoutStateTransitionObserver>
{
    SBLayoutStateTransitionCoordinator *_transitionCoordinator;
}

- (void).cxx_destruct;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)_begin;
- (void)dealloc;
- (id)initWithSceneLayoutTransitionCoordinator:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
