//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol FAFamilyCircleRequestConnectionProvider;

@interface FAFamilyCircleRequest : NSObject
{
    NSString *_usernameOrDSID;
    NSString *_passwordOrToken;
    id <FAFamilyCircleRequestConnectionProvider> _connectionProvider;
}

@property(retain, nonatomic) id <FAFamilyCircleRequestConnectionProvider> connectionProvider; // @synthesize connectionProvider=_connectionProvider;
@property(copy) NSString *passwordOrToken; // @synthesize passwordOrToken=_passwordOrToken;
@property(copy) NSString *usernameOrDSID; // @synthesize usernameOrDSID=_usernameOrDSID;
- (void).cxx_destruct;
- (id)requestOptions;
- (id)serviceRemoteObjectWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)serviceConnection;
- (id)initWithConnectionProvider:(id)arg1;
- (id)init;

@end
