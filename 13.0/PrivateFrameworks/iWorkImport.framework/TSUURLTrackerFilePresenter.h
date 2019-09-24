//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSFilePresenter-Protocol.h>

@class NSData, NSError, NSOperationQueue, NSSet, NSString, NSURL, TSUSandboxedURL, TSUURLTracker;
@protocol OS_dispatch_queue, TSULogContext, TSUURLTrackerDelegate;

__attribute__((visibility("hidden")))
@interface TSUURLTrackerFilePresenter : NSObject <NSFilePresenter>
{
    TSUURLTracker *_urlTracker;
    id <TSULogContext> _logContext;
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Bool _hasStarted;
    _Bool _forceEncodingBookmarkData;
    NSError *_latestBookmarkError;
    id <TSUURLTrackerDelegate> _delegate;
    struct os_unfair_lock_s _propertiesLock;
    TSUSandboxedURL *_sandboxedURLIfAvailable;
    NSData *_bookmarkDataIfAvailable;
    _Bool _deleted;
    _Bool _isValid;
    NSOperationQueue *_presentedItemOperationQueue;
}

@property(readonly, nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue; // @synthesize presentedItemOperationQueue=_presentedItemOperationQueue;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)presentedItemDidChangeUbiquityAttributes:(id)arg1;
- (void)p_notifyURLTrackerPresentedItemDidMoveToURL:(id)arg1;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (void)p_notifyURLTrackerPresentedItemWasDeleted;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)p_notifyURLTrackerPresentedItemContentsDidChange;
- (void)relinquishPresentedItemToWriter:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSURL *presentedItemURL;
- (id)p_bookmarkDataForcingRecalculation:(_Bool)arg1 error:(id *)arg2;
- (id)recalculateBookmarkDataAndReturnError:(id *)arg1;
- (id)bookmarkDataAndReturnError:(id *)arg1;
- (void)p_setBookmarkDataIfAvailable:(id)arg1;
@property(readonly) NSData *bookmarkDataIfAvailable;
- (void)p_setDeleted:(_Bool)arg1;
@property(readonly) _Bool deleted;
- (void)stop;
- (void)pauseForEnteringBackground:(_Bool)arg1;
- (void)startOrResumeForEnteringForeground:(_Bool)arg1;
- (id)p_lastKnownURLFromBookmark:(id)arg1;
- (id)p_sandboxedURLForcingRecalculation:(_Bool)arg1 error:(id *)arg2;
- (id)recalculateSandboxedURLAndReturnError:(id *)arg1;
- (id)sandboxedURLAndReturnError:(id *)arg1;
- (void)p_setSandboxedURLIfAvailable:(id)arg1;
- (id)p_sandboxedURLIfAvailableLoadingLastKnownURLFromBookmark:(_Bool)arg1;
@property(readonly) TSUSandboxedURL *sandboxedURLIfAvailable;
- (id)initWithURL:(id)arg1 bookmarkData:(id)arg2 urlTracker:(id)arg3 logContext:(id)arg4 delegate:(id)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end
