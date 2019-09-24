//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKMedicalCodingCollection, NSArray;

@interface HKMedicalCodingTask : NSObject <NSSecureCoding, NSCopying>
{
    HKMedicalCodingCollection *_codings;
    NSArray *_preferredSystems;
}

+ (_Bool)supportsSecureCoding;
+ (id)taskWithCodings:(id)arg1 preferredSystems:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *preferredSystems; // @synthesize preferredSystems=_preferredSystems;
@property(readonly, copy, nonatomic) HKMedicalCodingCollection *codings; // @synthesize codings=_codings;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCodings:(id)arg1 preferredSystems:(id)arg2;
- (id)init;

@end
