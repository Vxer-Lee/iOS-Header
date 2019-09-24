//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/CNContactImageRequest-Protocol.h>

@class NSArray, NSPersistentStoreRequest, NSString;

@interface CNContactImageFetchRequest : NSObject <CNContactImageRequest>
{
    NSArray *_contactIdentifiers;
}

+ (id)predicateForImagesMatchingContactIdentifiers:(id)arg1;
+ (id)recentImagesRequestForContactIdenfitiers:(id)arg1;
@property(retain, nonatomic) NSArray *contactIdentifiers; // @synthesize contactIdentifiers=_contactIdentifiers;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSPersistentStoreRequest *persistentStoreRequest;
- (id)initWithContactIdentifiers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
