//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreServices/NSMutableCopying-Protocol.h>
#import <CoreServices/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface LSRegistrationInfo : NSObject <NSSecureCoding, NSMutableCopying>
{
    unsigned int version;
    unsigned int action;
    unsigned int options;
    unsigned int itemFlags;
    unsigned int containerUnit;
    unsigned int bundleUnit;
    unsigned int bundleClass;
    unsigned long long inoBundle;
    unsigned long long inoExec;
    unsigned int userID;
    double contentModDate;
    unsigned long long volumeIdentifier;
}

+ (_Bool)supportsSecureCoding;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

