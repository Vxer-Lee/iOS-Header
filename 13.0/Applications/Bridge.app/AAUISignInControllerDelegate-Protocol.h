//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UINavigationControllerDelegate-Protocol.h"

@class AAUISignInController, NSError;

@protocol AAUISignInControllerDelegate <UINavigationControllerDelegate>

@optional
- (void)signInControllerDidCancel:(AAUISignInController *)arg1;
- (void)signInController:(AAUISignInController *)arg1 didCompleteWithSuccess:(_Bool)arg2 error:(NSError *)arg3;
@end

