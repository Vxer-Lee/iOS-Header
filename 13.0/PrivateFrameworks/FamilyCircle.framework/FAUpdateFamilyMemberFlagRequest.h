//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class NSNumber, NSString;

@interface FAUpdateFamilyMemberFlagRequest : FAFamilyCircleRequest
{
    NSNumber *_dsid;
    NSString *_flag;
    _Bool _enabled;
}

- (void).cxx_destruct;
- (void)startRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithFamilyMemberDSID:(id)arg1 flag:(id)arg2 enabled:(_Bool)arg3;

@end

