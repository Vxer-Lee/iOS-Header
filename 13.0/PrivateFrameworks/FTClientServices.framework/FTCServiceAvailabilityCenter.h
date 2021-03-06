//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface FTCServiceAvailabilityCenter : NSObject
{
    NSMutableDictionary *_availabilityHandlers;
}

+ (id)sharedInstance;
- (long long)availabilityForListenerID:(id)arg1 forService:(long long)arg2;
- (_Bool)removeListenerID:(id)arg1 forService:(long long)arg2;
- (_Bool)addListenerID:(id)arg1 forService:(long long)arg2;
- (_Bool)hasListenerID:(id)arg1 forService:(long long)arg2;
- (id)containerForService:(long long)arg1 create:(_Bool)arg2;
- (void)_stopListeningToMonitor:(id)arg1;
- (void)_startListeningToMonitor:(id)arg1;
- (void)_handleServiceMonitorNotification:(id)arg1;
- (void)_postNotificationForService:(long long)arg1 availability:(long long)arg2;
- (_Bool)_isValidServiceType:(long long)arg1;
- (void)dealloc;
- (id)init;

@end

