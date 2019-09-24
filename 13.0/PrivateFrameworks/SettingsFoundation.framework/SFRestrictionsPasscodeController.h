//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SFRestrictionsPasscodeController : NSObject
{
}

+ (void)removePasswordForHashAndSaltLegacyRestrictions;
+ (id)hashForHashAndSaltLegacyRestrictions;
+ (id)saltForHashAndSaltLegacyRestrictions;
+ (id)newHashDataForPassword:(id)arg1 andSalt:(id)arg2;
+ (id)_generateSalt;
+ (_Bool)legacyRestrictionsInEffect;
+ (id)pinFromHashAndSaltLegacyPassword;
+ (_Bool)hasHashAndSaltLegacyPassword;
+ (void)_setKeychainPasswordForRestrictions:(id)arg1;
+ (id)_keychainPasswordForRestrictions;
+ (void)_removeKeychainPasswordForRestrictions;
+ (_Bool)validatePIN:(id)arg1;
+ (_Bool)settingEnabled;
+ (void)setPIN:(id)arg1;
+ (void)migrateRestrictionsPasscode;
+ (void)_migrateRestrictionsPasscodeIfNeeded;

@end
