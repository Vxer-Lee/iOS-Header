//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSTimer;

__attribute__((visibility("hidden")))
@interface DelayedActionsQueue : NSObject
{
    NSMutableArray *_queue;
    long long _delayCount;
    NSTimer *_performDelayedActionsTimer;
    double _intervalBeforeExecutingPendingActions;
}

@property(nonatomic) double intervalBeforeExecutingPendingActions; // @synthesize intervalBeforeExecutingPendingActions=_intervalBeforeExecutingPendingActions;
- (void).cxx_destruct;
- (void)executePendingActions;
- (void)cancelPostDelayEndInterval;
- (void)startPostDelayEndInterval;
- (void)cancelAllDelayedActions;
- (void)performActionWithNonretainedObject:(id)arg1 action:(CDUnknownBlockType)arg2;
- (void)performAction:(CDUnknownBlockType)arg1;
- (void)endDelayingActions;
- (void)beginDelayingActions;
- (void)dealloc;

@end
