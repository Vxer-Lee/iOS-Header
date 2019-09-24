//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface APSTaskClient : NSObject
{
    NSXPCConnection *_connection;
    NSMutableArray *_outstandingDNSRequests;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSString *_environment;
}

- (void).cxx_destruct;
- (id)resolveDNS:(id)arg1;
- (void)_timeoutOutstandingRequests;
- (id)_findDNSRequestForHostname:(id)arg1;
- (void)_clearOutstandingTasks:(long long)arg1;
- (void)dealloc;
- (id)initWithEnvironment:(id)arg1 queue:(id)arg2;

@end
