//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSArray;

@interface SANPSkipToPreviousItem : SADomainCommand
{
}

+ (id)skipToPreviousItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)skipToPreviousItem;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSArray *hashedRouteUIDs;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
