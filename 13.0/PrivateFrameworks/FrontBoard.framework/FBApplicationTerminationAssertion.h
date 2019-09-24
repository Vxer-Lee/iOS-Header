//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FBApplicationTerminationAssertion : NSObject
{
    NSString *_bundleID;
    NSString *_reason;
    unsigned long long _serialNumber;
    id _plugInHoldToken;
}

@property(retain, nonatomic) id plugInHoldToken; // @synthesize plugInHoldToken=_plugInHoldToken;
@property(nonatomic) unsigned long long serialNumber; // @synthesize serialNumber=_serialNumber;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
