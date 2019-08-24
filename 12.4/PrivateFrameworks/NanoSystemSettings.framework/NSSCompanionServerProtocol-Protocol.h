//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoSystemSettings/NSSServerProtocol-Protocol.h>

@class NSData, NSString;

@protocol NSSCompanionServerProtocol <NSSServerProtocol>
- (void)getLocalesInfo:(void (^)(NSDictionary *, NSError *))arg1;
- (void)getLegalDocuments:(void (^)(NSDictionary *, NSError *))arg1;
- (void)rebootDevice;
- (void)removeProfileWithIdentifier:(NSString *)arg1 replyHandler:(void (^)(NSError *))arg2;
- (void)installProfile:(NSData *)arg1 replyHandler:(void (^)(NSError *))arg2;
- (void)getProfileWithIdentifier:(NSString *)arg1 replyHandler:(void (^)(NSData *, NSError *))arg2;
- (void)getProfilesInfo:(void (^)(NSDictionary *, NSError *))arg1;
- (void)getAccountsInfoForAccountType:(NSString *)arg1 completionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)obliterateGizmoPreservingeSIM:(_Bool)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)getAboutInfo:(void (^)(NSDictionary *, NSError *))arg1;
- (void)purgeUsageBundle:(NSString *)arg1 replyHandler:(void (^)(NSError *))arg2;
- (void)getUsage:(void (^)(NSDictionary *, NSError *))arg1;
- (void)setDeviceName:(NSString *)arg1;
@end
