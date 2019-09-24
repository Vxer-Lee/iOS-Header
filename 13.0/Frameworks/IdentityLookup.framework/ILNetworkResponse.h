//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IdentityLookup/NSSecureCoding-Protocol.h>

@class NSData, NSHTTPURLResponse;

@interface ILNetworkResponse : NSObject <NSSecureCoding>
{
    NSHTTPURLResponse *_urlResponse;
    NSData *_data;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSHTTPURLResponse *urlResponse; // @synthesize urlResponse=_urlResponse;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithURLResponse:(id)arg1 data:(id)arg2;

@end
