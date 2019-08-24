//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudServices/NSObject-Protocol.h>

@class NSDictionary, NSError, NSString;

@protocol SRPClientRequest <NSObject>
@property(readonly, copy, nonatomic) NSString *recordID;
@property(readonly, retain, nonatomic) NSDictionary *escrowRecord;
@property(readonly, copy, nonatomic) NSString *recoveryPassphrase;
@property(readonly, copy, nonatomic) NSString *recordLabel;
@property(readonly, copy, nonatomic) NSString *dsid;
- (NSError *)validateInput;
@end
