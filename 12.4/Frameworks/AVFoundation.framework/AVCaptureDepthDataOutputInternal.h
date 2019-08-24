//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVWeakReference, AVWeakReferencingDelegateStorage;
@protocol OS_dispatch_queue;

@interface AVCaptureDepthDataOutputInternal : NSObject
{
    AVWeakReference *weakReference;
    AVWeakReferencingDelegateStorage *delegateStorage;
    AVWeakReferencingDelegateStorage *delegateOverrideStorage;
    _Bool alwaysDiscardsLateDepthData;
    _Bool filteringEnabled;
    NSObject<OS_dispatch_queue> *depthDataQueue;
    struct OpaqueFigSimpleMutex *queueMutex;
    void *remoteQueueReceiver;
    void *localQueue;
}

- (void)dealloc;
- (id)init;

@end
