//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageUI/MFContactsSearchOperation.h>

@class NSSet, NSString;

@interface MFCoreRecentsCorecipientSearchOperation : MFContactsSearchOperation
{
    NSString *_bundleIdentifier;
    NSSet *_otherRecipients;
    unsigned long long _implicitGroupThreshold;
}

+ (id)operationWithAddressBook:(void *)arg1 owner:(id)arg2 otherRecipients:(id)arg3 taskID:(id)arg4 properties:(id)arg5 bundleIdentifier:(id)arg6 implicitGroupThreshold:(unsigned long long)arg7;
- (void)main;
- (void)dealloc;

@end
