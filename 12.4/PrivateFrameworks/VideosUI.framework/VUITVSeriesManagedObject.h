//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface VUITVSeriesManagedObject : NSManagedObject
{
}

+ (id)fetchRequest;

// Remaining properties
@property(copy, nonatomic) NSString *canonicalID; // @dynamic canonicalID;
@property(retain, nonatomic) NSSet *episodes; // @dynamic episodes;
@property(retain, nonatomic) NSSet *imageInfos; // @dynamic imageInfos;
@property(retain, nonatomic) NSSet *seasons; // @dynamic seasons;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end
