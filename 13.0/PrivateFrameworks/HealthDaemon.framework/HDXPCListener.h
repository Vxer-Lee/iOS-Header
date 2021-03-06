//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSXPCListenerDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, NSXPCListener, NSXPCListenerEndpoint;
@protocol HDXPCListenerDelegate, OS_dispatch_queue;

@interface HDXPCListener : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_underlyingListener;
    struct os_unfair_lock_s _lock;
    NSMutableDictionary *_exportedObjectsByClient;
    id <HDXPCListenerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_connectionQueue;
}

+ (id)serviceListener;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(nonatomic) __weak id <HDXPCListenerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)newClientWithConnection:(id)arg1 error:(id *)arg2;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
@property(readonly) NSXPCListenerEndpoint *endpoint;
- (void)invalidate;
- (void)resume;
@property(readonly, copy) NSArray *allClients;
- (void)dealloc;
- (id)initWithUnderlyingListener:(id)arg1;
- (id)initWithMachServiceName:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

