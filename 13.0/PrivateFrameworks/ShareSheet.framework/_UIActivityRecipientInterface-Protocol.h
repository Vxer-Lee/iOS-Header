//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ShareSheet/NSObject-Protocol.h>

@class NSString;

@protocol _UIActivityRecipientInterface <NSObject>
- (void)requestMailRecipientsForSessionID:(NSString *)arg1 completionHandler:(void (^)(NSArray *))arg2;
- (void)requestMessagesRecipientInfoForSessionID:(NSString *)arg1 completionHandler:(void (^)(NSString *, NSString *, NSArray *))arg2;
@end
