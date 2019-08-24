//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/CoreTelephonyClientSubscriberDelegate-Protocol.h>

@class CTServiceDescriptor, CoreTelephonyClient, NSData, NSString;
@protocol CTSubscriberDelegate;

@interface CTSubscriber : NSObject <CoreTelephonyClientSubscriberDelegate>
{
    struct queue _queue;
    CoreTelephonyClient *_client;
    id <CTSubscriberDelegate> _delegate;
    CTServiceDescriptor *_descriptor;
}

@property(retain, nonatomic) CTServiceDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property(nonatomic) __weak id <CTSubscriberDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)authenticateWithInfo:(id)arg1 handleResult:(CDUnknownBlockType)arg2;
- (void)authenticate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)refreshCarrierToken;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, retain, nonatomic) NSData *carrierToken; // @dynamic carrierToken;
- (void)authTokenChanged:(id)arg1;
- (id)init;
- (id)initWithDescriptor:(id)arg1;
- (id)initWithDescriptor:(id)arg1 client:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
