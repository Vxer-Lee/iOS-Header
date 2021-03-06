//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleIDSSOAuthentication/NSCopying-Protocol.h>
#import <AppleIDSSOAuthentication/NSMutableCopying-Protocol.h>

@class NSDictionary, UIViewController;
@protocol CDPStateUIProvider;

@interface AIDAServiceContext : NSObject <NSMutableCopying, NSCopying>
{
    NSDictionary *_authenticationResults;
    _Bool _shouldForceOperation;
    UIViewController *_viewController;
    id <CDPStateUIProvider> _cdpUiProvider;
}

+ (id)contextWithContext:(id)arg1;
+ (_Bool)accessInstanceVariablesDirectly;
@property(readonly, nonatomic) __weak id <CDPStateUIProvider> cdpUiProvider; // @synthesize cdpUiProvider=_cdpUiProvider;
@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) _Bool shouldForceOperation; // @synthesize shouldForceOperation=_shouldForceOperation;
@property(readonly, copy, nonatomic) NSDictionary *authenticationResults; // @synthesize authenticationResults=_authenticationResults;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

