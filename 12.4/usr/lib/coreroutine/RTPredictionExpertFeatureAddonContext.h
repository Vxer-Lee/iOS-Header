//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTPredictionExpertFeatureAddon.h>

@class NSString;
@protocol NSObject><NSCopying><NSSecureCoding;

@interface RTPredictionExpertFeatureAddonContext : RTPredictionExpertFeatureAddon
{
    NSString *_key;
    id <NSObject><NSCopying><NSSecureCoding> _value;
}

@property(readonly, nonatomic) id <NSObject><NSCopying><NSSecureCoding> value; // @synthesize value=_value;
@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)description;
- (long long)addonType;
- (id)initWithKey:(id)arg1 value:(id)arg2;

@end

