//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_semaphore;

@interface VSSemaphore : NSObject
{
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

- (void).cxx_destruct;
- (void)wait;
- (void)signal;
- (id)init;

@end
