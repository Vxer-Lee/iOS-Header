//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class SSAccount;

@interface LogoutOperation : ISOperation
{
    SSAccount *_account;
}

- (void).cxx_destruct;
- (void)_sendLogoutRequest;
- (id)_sbsyncData;
- (void)_disableBookkeeper;
- (void)_disableAutomaticDownloadKinds;
- (id)_copyAuthenticationContext;
- (void)run;
@property(readonly) SSAccount *account;
- (id)initWithAccount:(id)arg1;

@end
