//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Email/EMObjectID.h>

#import <Email/EFPubliclyDescribable-Protocol.h>

@class NSString, NSURL;

@interface EMMailboxObjectID : EMObjectID <EFPubliclyDescribable>
{
    NSURL *_url;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *ef_publicDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURL:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly) Class superclass;

@end
