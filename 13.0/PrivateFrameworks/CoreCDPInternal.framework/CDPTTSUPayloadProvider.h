//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/CDPKeychainCircleProxy-Protocol.h>

@class KCPairingChannel, NSString;
@protocol CDPDCircleProxy;

@interface CDPTTSUPayloadProvider : NSObject <CDPKeychainCircleProxy>
{
    KCPairingChannel *_pairingChannel;
    _Bool _complete;
    id <CDPDCircleProxy> _circleProxy;
}

- (void).cxx_destruct;
- (_Bool)requiresInitialSync;
- (_Bool)supportsInteractiveAuth;
- (_Bool)isComplete;
- (id)processIncomingPayload:(id)arg1 error:(id *)arg2;
- (id)initiatingPayload:(id *)arg1;
- (id)initWithCircleProxy:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
