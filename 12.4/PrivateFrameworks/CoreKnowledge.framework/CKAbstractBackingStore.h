//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface CKAbstractBackingStore : NSObject
{
    NSXPCConnection *_connection;
}

+ (id)instanceNamed:(id)arg1;
+ (id)directoryPath;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (id)daemonWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end
