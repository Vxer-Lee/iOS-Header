//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSString, STUsageBlock;

@interface STUsageCountedItem : NSManagedObject
{
}

+ (id)pickupDetailItemsForCountedItems:(id)arg1;
+ (id)notificationDetailItemsForCountedItems:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) STUsageBlock *block; // @dynamic block;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @dynamic bundleIdentifier;
@property(readonly, nonatomic) long long numberOfNotifications; // @dynamic numberOfNotifications;
@property(readonly, nonatomic) long long numberOfPickups; // @dynamic numberOfPickups;

@end
