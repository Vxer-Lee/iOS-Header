//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNAvatarView.h>

@class NSString, UIViewController;

@interface CKAvatarView : CNAvatarView
{
    UIViewController *_presentingViewController;
    NSString *_preferredHandle;
}

@property(nonatomic) __weak NSString *preferredHandle; // @synthesize preferredHandle=_preferredHandle;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (id)init;

@end
