//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CMWakeGestureManager;

@protocol CMWakeGestureDelegate <NSObject>

@optional
- (void)wakeGestureManager:(CMWakeGestureManager *)arg1 didUpdateWakeGesture:(long long)arg2 orientation:(int)arg3;
- (void)wakeGestureManager:(CMWakeGestureManager *)arg1 didUpdateWakeGesture:(long long)arg2 detectedAt:(unsigned long long)arg3;
- (void)wakeGestureManager:(CMWakeGestureManager *)arg1 didUpdateWakeGesture:(long long)arg2;
@end
