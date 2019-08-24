//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccountUI/VSCuratedViewModel.h>

@class NSString;
@protocol VSAutoAuthenticationViewModelDelegate;

__attribute__((visibility("hidden")))
@interface VSAutoAuthenticationViewModel : VSCuratedViewModel
{
    id <VSAutoAuthenticationViewModelDelegate> _delegate;
    NSString *_messageTitle;
    NSString *_accountName;
    NSString *_manualSignInTitle;
    NSString *_manualSignInButtonText;
}

@property(copy, nonatomic) NSString *manualSignInButtonText; // @synthesize manualSignInButtonText=_manualSignInButtonText;
@property(copy, nonatomic) NSString *manualSignInTitle; // @synthesize manualSignInTitle=_manualSignInTitle;
@property(copy, nonatomic) NSString *accountName; // @synthesize accountName=_accountName;
@property(copy, nonatomic) NSString *messageTitle; // @synthesize messageTitle=_messageTitle;
@property(nonatomic) __weak id <VSAutoAuthenticationViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)configureWithRequest:(id)arg1;
- (void)didSelectManualSignInButton;
- (id)init;

@end
