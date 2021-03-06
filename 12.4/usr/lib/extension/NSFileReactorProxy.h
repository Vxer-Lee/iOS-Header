//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileAccessNode, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface NSFileReactorProxy : NSObject
{
    NSXPCConnection *_client;
    id _reactorID;
    NSFileAccessNode *_itemLocation;
    unsigned int _effectiveUserIdentifier;
}

+ (void)_enumerateParentDirectoriesStartingAtURL:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)collectDebuggingInformationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_clientProxy;
- (_Bool)allowedForURL:(id)arg1;
- (id)description;
- (id)descriptionWithIndenting:(id)arg1;
- (void)invalidate;
- (void)forwardUsingProxy:(id)arg1;
- (id)itemLocation;
- (void)setItemLocation:(id)arg1;
@property unsigned int effectiveUserIdentifier;
- (id)reactorID;
- (id)client;
- (void)dealloc;
- (id)initWithClient:(id)arg1 reactorID:(id)arg2;

@end

