//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreServices/NSObject-Protocol.h>

@class LSBundleProxy, NSDictionary, NSString, NSURL;

@protocol LSIconResourceLocator <NSObject>
@property(readonly) NSDictionary *bundleIconsDictionary;
@property(readonly) NSURL *resourcesDirectoryURL;
@property(readonly, copy) NSString *applicationIdentifier;
@property(readonly, copy) LSBundleProxy *typeOwner;
@end
