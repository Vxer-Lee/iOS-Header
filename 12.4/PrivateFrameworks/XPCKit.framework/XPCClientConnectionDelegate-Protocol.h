//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XPCKit/NSObject-Protocol.h>

@class XPCClientConnection, XPCRequest;

@protocol XPCClientConnectionDelegate <NSObject>
- (void)XPCClientConnection:(XPCClientConnection *)arg1 didReceiveRequest:(XPCRequest *)arg2;
@end
