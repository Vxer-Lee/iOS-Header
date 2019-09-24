//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@protocol SBIdleTimer;

@protocol SBIdleTimerObserving <NSObject>

@optional
- (void)idleTimerDidWarn:(id <SBIdleTimer>)arg1;
- (void)idleTimerDidResetForUserAttention:(id <SBIdleTimer>)arg1;
- (void)idleTimerDidExpire:(id <SBIdleTimer>)arg1;
- (void)idleTimerDidRefresh:(id <SBIdleTimer>)arg1;
@end
