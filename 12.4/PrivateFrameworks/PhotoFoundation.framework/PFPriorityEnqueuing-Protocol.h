//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol PFPriorityEnqueuing
- (void)resumeScheduling;
- (void)suspendScheduling;
- (unsigned long long)schedulingLimitForPriorityLevel:(unsigned long long)arg1;
- (void)enqueueEmptyNotification:(void (^)(void))arg1;
- (void)enqueueWithPriority:(unsigned long long)arg1 block:(void (^)(void))arg2;
- (void)enqueueWithPriority:(unsigned long long)arg1 qos:(unsigned int)arg2 block:(void (^)(void))arg3;
@end
