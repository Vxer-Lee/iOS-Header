//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppSupport/InvocationTrampoline.h>

@interface CapturedInvocationTrampoline : InvocationTrampoline
{
    id *_outInvocation;
}

- (void)forwardInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1 outInvocation:(id *)arg2;

@end

