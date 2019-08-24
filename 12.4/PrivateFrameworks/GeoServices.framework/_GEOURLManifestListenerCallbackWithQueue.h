//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/_GEOURLManifestListenerCallback-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue, OS_voucher;

__attribute__((visibility("hidden")))
@interface _GEOURLManifestListenerCallbackWithQueue : NSObject <_GEOURLManifestListenerCallback>
{
    CDUnknownBlockType _handler;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_voucher> *_voucher;
    unsigned int _qos;
}

- (void).cxx_destruct;
- (void)performHandler:(_Bool)arg1;
- (id)initWithQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
