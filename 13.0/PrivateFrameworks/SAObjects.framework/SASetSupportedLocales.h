//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SASetSupportedLocales : SABaseClientBoundCommand
{
}

+ (id)setSupportedLocalesWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setSupportedLocales;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSArray *locales;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
