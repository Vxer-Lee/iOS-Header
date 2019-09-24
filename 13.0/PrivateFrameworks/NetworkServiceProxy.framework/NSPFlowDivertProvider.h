//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEAppProxyProvider.h>

@class NSPManager;

@interface NSPFlowDivertProvider : NEAppProxyProvider
{
    NSPManager *_manager;
}

@property(retain) NSPManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (_Bool)handleNewFlow:(id)arg1;
- (void)stopProxyWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startProxyWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end
