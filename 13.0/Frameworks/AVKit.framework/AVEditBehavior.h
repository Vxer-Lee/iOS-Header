//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVKit/AVBehavior-Protocol.h>
#import <AVKit/AVBehaviorInternal-Protocol.h>

@class AVEditBehaviorContext, NSString;
@protocol AVEditBehaviorDelegate;

@interface AVEditBehavior : NSObject <AVBehaviorInternal, AVBehavior>
{
    AVEditBehaviorContext *_behaviorContext;
    id <AVEditBehaviorDelegate> _delegate;
}

+ (Class)behaviorContextClass;
@property(nonatomic) __weak id <AVEditBehaviorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak AVEditBehaviorContext *behaviorContext; // @synthesize behaviorContext=_behaviorContext;
- (void).cxx_destruct;
- (void)didRemoveFromContext:(id)arg1;
- (void)willRemoveFromContext:(id)arg1;
- (void)didMoveToContext:(id)arg1;
- (void)willMoveToContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
