//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/NTSourceAvailabilityEntry-Protocol.h>

@class FCNetworkReachability, NSSNewsAvailabilityMonitor, NSString;
@protocol OS_dispatch_queue;

@interface NTNewsSourceAvailabilityEntry : NSObject <NTSourceAvailabilityEntry>
{
    _Bool _available;
    CDUnknownBlockType _availabilityChangedNotificationBlock;
    FCNetworkReachability *_networkReachability;
    NSSNewsAvailabilityMonitor *_NewsAvailabilityMonitor;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(nonatomic, getter=isAvailable) _Bool available; // @synthesize available=_available;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSSNewsAvailabilityMonitor *NewsAvailabilityMonitor; // @synthesize NewsAvailabilityMonitor=_NewsAvailabilityMonitor;
@property(retain, nonatomic) FCNetworkReachability *networkReachability; // @synthesize networkReachability=_networkReachability;
- (void).cxx_destruct;
- (void)_updateAvailability;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) Class todayResultsFetchDescriptorClass;
- (void)dealloc;
@property(copy, nonatomic) CDUnknownBlockType availabilityChangedNotificationBlock; // @synthesize availabilityChangedNotificationBlock=_availabilityChangedNotificationBlock;
- (id)initWithNetworkReachability:(id)arg1 processVariant:(unsigned long long)arg2 queue:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
