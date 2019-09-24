//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsSubscription/ASWebAuthenticationPresentationContextProviding-Protocol.h>

@class ASWebAuthenticationSession, NSString;

@interface BridgedWebAuthenticationSession : NSObject <ASWebAuthenticationPresentationContextProviding>
{
    ASWebAuthenticationSession *_authenticationSession;
}

@property(retain, nonatomic) ASWebAuthenticationSession *authenticationSession; // @synthesize authenticationSession=_authenticationSession;
- (void).cxx_destruct;
- (id)presentationAnchorForWebAuthenticationSession:(id)arg1;
- (_Bool)start;
- (id)initWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
