//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CryptoTokenKit/TKTokenSession.h>

@class TKSmartCard;

@interface TKSmartCardTokenSession : TKTokenSession
{
    TKSmartCard *_smartCard;
    _Bool _hasSession;
    TKSmartCard *_errorCard;
}

- (void).cxx_destruct;
- (id)name;
- (void)endRequest;
@property(readonly) TKSmartCard *smartCard;
- (void)beginRequest;
- (id)initWithToken:(id)arg1;

@end
