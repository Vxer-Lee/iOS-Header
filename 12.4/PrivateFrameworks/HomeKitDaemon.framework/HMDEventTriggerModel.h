//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDTriggerModel.h>

@class NSData, NSNumber;

@interface HMDEventTriggerModel : HMDTriggerModel
{
}

+ (id)properties;
- (id)createPayload;

// Remaining properties
@property(retain, nonatomic) NSData *evaluationCondition; // @dynamic evaluationCondition;
@property(retain, nonatomic) NSNumber *executeOnce; // @dynamic executeOnce;
@property(retain, nonatomic) NSData *recurrences; // @dynamic recurrences;

@end
