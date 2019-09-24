//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCPrivateDataSyncAvailability-Protocol.h>

@class NSArray;

@interface FCPrivateDataSyncAvailability : NSObject <FCPrivateDataSyncAvailability>
{
    NSArray *_conditions;
}

+ (id)notAvailable;
+ (id)defaultAvailability;
@property(readonly, copy, nonatomic) NSArray *conditions; // @synthesize conditions=_conditions;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isPrivateDataSyncingAllowed) _Bool privateDataSyncingAllowed;
- (id)initWithConditions:(id)arg1;

@end
