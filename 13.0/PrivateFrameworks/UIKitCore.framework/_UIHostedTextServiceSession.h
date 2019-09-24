//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UITextServiceSession.h>

@protocol _UIHostedTextServiceSessionDelegate;

__attribute__((visibility("hidden")))
@interface _UIHostedTextServiceSession : _UITextServiceSession
{
    id <_UIHostedTextServiceSessionDelegate> _delegate;
}

+ (id)showServiceForText:(id)arg1 selectedTextRange:(struct _NSRange)arg2 type:(long long)arg3 fromRect:(struct CGRect)arg4 inView:(id)arg5;
+ (id)showServiceForText:(id)arg1 type:(long long)arg2 fromRect:(struct CGRect)arg3 inView:(id)arg4;
+ (id)showServiceForType:(long long)arg1 withContext:(id)arg2;
@property(nonatomic) id <_UIHostedTextServiceSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)remoteSessionDidDismiss;
- (void)dismissTextServiceAnimated:(_Bool)arg1;

@end
