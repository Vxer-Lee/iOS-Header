//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@class NSDate, NSDictionary, NSString;

@interface NSError (NMSError)
@property(readonly, nonatomic, getter=isFromRequest) _Bool fromRequest;
@property(readonly, nonatomic) NSDictionary *persistentUserInfo;
@property(readonly, nonatomic) NSDate *messageSent;
@property(readonly, nonatomic) NSString *idsIdentifier;
@property(readonly, nonatomic) unsigned short messageID;
@end

