//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RemoteConfiguration/RCLocking-Protocol.h>

@interface RCMutexLock : NSObject <RCLocking>
{
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _lock;
}

- (void)unlock;
- (void)lock;
- (void)performWithLockSync:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithOptions:(unsigned long long)arg1;
- (id)init;

@end
