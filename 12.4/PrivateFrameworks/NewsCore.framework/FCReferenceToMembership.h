//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FCReferenceToMembership : NSObject
{
    NSString *_identifier;
    NSString *_membershipID;
}

@property(readonly, nonatomic) NSString *membershipID; // @synthesize membershipID=_membershipID;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithIdentifier:(id)arg1 dictionaryRepresentation:(id)arg2;
- (id)initWithRecord:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end

