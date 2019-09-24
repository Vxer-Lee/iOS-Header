//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CNUIFamilyMemberContactsEditingStrategy : NSObject
{
    NSArray *_prohibitedPropertyKeys;
    CDUnknownBlockType _sensitiveDataContactFilter;
}

+ (id)whitelistedContactsStrategy;
+ (id)managedContactsStrategy;
@property(readonly, nonatomic) CDUnknownBlockType sensitiveDataContactFilter; // @synthesize sensitiveDataContactFilter=_sensitiveDataContactFilter;
@property(readonly, nonatomic) NSArray *prohibitedPropertyKeys; // @synthesize prohibitedPropertyKeys=_prohibitedPropertyKeys;
- (void).cxx_destruct;
- (id)initWithProhibitedPropertyKeys:(id)arg1 sensitiveDataContactFilter:(CDUnknownBlockType)arg2;

@end
