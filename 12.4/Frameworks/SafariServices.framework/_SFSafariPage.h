//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _SFAppleConnectExtensionContext;

__attribute__((visibility("hidden")))
@interface _SFSafariPage : NSObject
{
    _SFAppleConnectExtensionContext *_extensionContext;
}

- (void).cxx_destruct;
- (void)dismissExtensionUI;
- (void)presentExtensionUI;
- (void)dispatchMessageToScriptWithName:(id)arg1 userInfo:(id)arg2;
- (id)_remoteObjectProxy;
@property(readonly, nonatomic) _SFAppleConnectExtensionContext *_extensionContext;
- (id)_initWithExtensionContext:(id)arg1;

@end
