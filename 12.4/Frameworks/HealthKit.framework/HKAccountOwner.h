//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKMedicalRecord.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKAccountOwnerType, HKMedicalDate, NSString;

@interface HKAccountOwner : HKMedicalRecord <NSSecureCoding, NSCopying>
{
    NSString *_name;
    HKMedicalDate *_birthDate;
}

+ (_Bool)_isConcreteObjectClass;
+ (_Bool)supportsEquivalence;
+ (_Bool)supportsSecureCoding;
+ (id)accountOwnerWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 extractionVersion:(long long)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 name:(id)arg10 birthDate:(id)arg11;
+ (id)accountOwnerWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 extractionVersion:(long long)arg6 device:(id)arg7 metadata:(id)arg8 name:(id)arg9 birthDate:(id)arg10;
- (void).cxx_destruct;
@property(readonly, copy) HKAccountOwnerType *accountOwnerType;
- (id)_validateConfiguration;
- (void)_setBirthDate:(id)arg1;
@property(readonly, copy) HKMedicalDate *birthDate;
- (void)_setName:(id)arg1;
@property(readonly, copy) NSString *name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEquivalent:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)init;

@end

