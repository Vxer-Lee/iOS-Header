//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Task.h"

@class ACAccount, NSArray, NSString, UpdatesResponse;

@interface UpdatesTask : Task
{
    ACAccount *_account;
    NSArray *_apps;
    _Bool _isUserInitiated;
    NSString *_logKey;
    UpdatesResponse *_response;
}

@property(retain, nonatomic) UpdatesResponse *response; // @synthesize response=_response;
@property(copy, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
- (void).cxx_destruct;
- (id)_requestBodyDictionary;
- (id)_newDictionaryWithUpdatableApp:(id)arg1;
- (id)_newArrayWithUpdatableApps:(id)arg1;
- (id)_copyLocalAppsDictionaries;
- (id)_bagURL;
- (void)main;
- (id)initWithAccount:(id)arg1 apps:(id)arg2 isUserInitiated:(_Bool)arg3;

@end
