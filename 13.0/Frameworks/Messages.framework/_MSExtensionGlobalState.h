//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol _MSMessageComposeExtensionImplProtocol;

__attribute__((visibility("hidden")))
@interface _MSExtensionGlobalState : NSObject
{
    id <_MSMessageComposeExtensionImplProtocol> _activeExtensionContext;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <_MSMessageComposeExtensionImplProtocol> activeExtensionContext; // @synthesize activeExtensionContext=_activeExtensionContext;
- (void).cxx_destruct;

@end
