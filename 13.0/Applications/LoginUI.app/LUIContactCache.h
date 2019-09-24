//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContact, NSCache, NSOperationQueue;

@interface LUIContactCache : NSObject
{
    NSCache *_userCache;
    NSCache *_instructorCache;
    NSOperationQueue *_operationQueue;
    CNContact *_groupImageContact;
}

+ (id)sharedInstance;
@property(retain, nonatomic) CNContact *groupImageContact; // @synthesize groupImageContact=_groupImageContact;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSCache *instructorCache; // @synthesize instructorCache=_instructorCache;
@property(retain, nonatomic) NSCache *userCache; // @synthesize userCache=_userCache;
- (void).cxx_destruct;
- (void)clearGroupImageContact;
- (id)contactWithGroupImage;
- (void)deleteContactCache;
- (void)updateContactImageDataForUser:(id)arg1 isInstructor:(_Bool)arg2;
- (void)updateContactImageDataForUser:(id)arg1;
- (id)loadContactForUser:(id)arg1 isInstructor:(_Bool)arg2;
- (id)contactForUser:(id)arg1 isInstructor:(_Bool)arg2;
- (id)init;

@end
