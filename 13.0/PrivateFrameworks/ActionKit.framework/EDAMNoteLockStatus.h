//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSArray, NSDictionary, NSNumber;

@interface EDAMNoteLockStatus : FATObject
{
    NSNumber *_noteUpdateSequenceNumber;
    NSNumber *_lockHolderUserId;
    NSNumber *_lockRenewBy;
    NSArray *_viewingUserIds;
    NSNumber *_viewIdleExpiration;
    NSDictionary *_unknownUsers;
    NSNumber *_currentTime;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSNumber *currentTime; // @synthesize currentTime=_currentTime;
@property(retain, nonatomic) NSDictionary *unknownUsers; // @synthesize unknownUsers=_unknownUsers;
@property(retain, nonatomic) NSNumber *viewIdleExpiration; // @synthesize viewIdleExpiration=_viewIdleExpiration;
@property(retain, nonatomic) NSArray *viewingUserIds; // @synthesize viewingUserIds=_viewingUserIds;
@property(retain, nonatomic) NSNumber *lockRenewBy; // @synthesize lockRenewBy=_lockRenewBy;
@property(retain, nonatomic) NSNumber *lockHolderUserId; // @synthesize lockHolderUserId=_lockHolderUserId;
@property(retain, nonatomic) NSNumber *noteUpdateSequenceNumber; // @synthesize noteUpdateSequenceNumber=_noteUpdateSequenceNumber;
- (void).cxx_destruct;

@end
