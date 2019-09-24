//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface SFAppleIDPersonInfo : NSObject <NSSecureCoding>
{
    _Bool _didMatchEmail;
    _Bool _didMatchPhone;
    NSString *_accountIdentifier;
    NSString *_altDSID;
    long long _certificateStatus;
    NSString *_matchedValue;
    NSDate *_validUntilDate;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSDate *validUntilDate; // @synthesize validUntilDate=_validUntilDate;
@property(readonly, nonatomic) NSString *matchedValue; // @synthesize matchedValue=_matchedValue;
@property(readonly, nonatomic) _Bool didMatchPhone; // @synthesize didMatchPhone=_didMatchPhone;
@property(readonly, nonatomic) _Bool didMatchEmail; // @synthesize didMatchEmail=_didMatchEmail;
@property(readonly, nonatomic) long long certificateStatus; // @synthesize certificateStatus=_certificateStatus;
@property(readonly, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(readonly, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isStale;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (_Bool)isEqualToPersonInfo:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
