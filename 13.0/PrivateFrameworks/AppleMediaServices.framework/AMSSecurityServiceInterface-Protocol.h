//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/NSObject-Protocol.h>

@class ACAccount, AMSProcessInfo, NSDictionary;

@protocol AMSSecurityServiceInterface <NSObject>
- (void)performBiometricTokenUpdateWithAccount:(ACAccount *)arg1 clientInfo:(AMSProcessInfo *)arg2 additionalDialogMetrics:(NSDictionary *)arg3 shouldRequestConfirmation:(_Bool)arg4 completion:(void (^)(_Bool, NSError *))arg5;
@end
