//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSNumber, NSString;

@interface PushNotificationEnvironment : NSManagedObject
{
}

+ (id)entityFromContext:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *environmentName; // @dynamic environmentName;
@property(retain, nonatomic) NSNumber *lastAccountIdentifier; // @dynamic lastAccountIdentifier;
@property(copy, nonatomic) NSData *tokenData; // @dynamic tokenData;

@end
