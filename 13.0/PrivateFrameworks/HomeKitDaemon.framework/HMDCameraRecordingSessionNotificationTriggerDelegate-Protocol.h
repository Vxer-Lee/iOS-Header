//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDCameraRecordingSessionNotificationTrigger;

@protocol HMDCameraRecordingSessionNotificationTriggerDelegate <NSObject>
- (void)notificationTrigger:(HMDCameraRecordingSessionNotificationTrigger *)arg1 didObserveTriggerType:(unsigned long long)arg2 changeToActive:(_Bool)arg3;
@end
