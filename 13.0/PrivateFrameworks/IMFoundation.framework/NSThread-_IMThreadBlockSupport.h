//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSThread.h>

@interface NSThread (_IMThreadBlockSupport)
+ (void)_im_runBlock:(CDUnknownBlockType)arg1;
- (void)__im_performBlock:(CDUnknownBlockType)arg1 afterDelay:(double)arg2 modes:(id)arg3;
- (void)__im_performBlock:(CDUnknownBlockType)arg1 afterDelay:(double)arg2;
- (void)__im_performBlock:(CDUnknownBlockType)arg1 waitUntilDone:(_Bool)arg2 modes:(id)arg3;
- (void)__im_performBlock:(CDUnknownBlockType)arg1 waitUntilDone:(_Bool)arg2;
- (void)__im_performBlock:(CDUnknownBlockType)arg1 modes:(id)arg2;
- (void)__im_performBlock:(CDUnknownBlockType)arg1;
@end
