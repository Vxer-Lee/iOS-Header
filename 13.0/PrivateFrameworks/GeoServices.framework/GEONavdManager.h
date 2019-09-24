//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEONavdServerProxy, NSMutableArray;

@interface GEONavdManager : NSObject
{
    GEONavdServerProxy *_proxy;
    NSMutableArray *_openers;
    struct os_unfair_lock_s _openersLock;
}

+ (id)navdManagerClientIdentifier:(id)arg1;
+ (void)setProxyClass:(Class)arg1;
+ (id)navdManager;
- (void).cxx_destruct;
- (void)forceCacheRefresh;
- (void)didPostUINotification:(unsigned long long)arg1 forDestination:(id)arg2 fromClient:(id)arg3;
- (void)stopMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3;
- (void)onlyPerformLocalUpdatesForPlannedDestination:(id)arg1 client:(id)arg2;
- (void)requestRefreshForPlannedDestination:(id)arg1 client:(id)arg2;
- (void)startMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)statusWithCallback:(CDUnknownBlockType)arg1;
- (void)closeForClient:(id)arg1;
- (void)openForClient:(id)arg1;
- (void)shouldPostDarwinNotificationForNextUpdate:(_Bool)arg1;
- (id)init;

@end
