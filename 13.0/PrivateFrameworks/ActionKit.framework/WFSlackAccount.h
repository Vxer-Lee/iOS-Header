//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFOAuth2Account.h>

@class NSString;

@interface WFSlackAccount : WFOAuth2Account
{
    NSString *_username;
    NSString *_teamName;
}

+ (_Bool)allowsMultipleAccounts;
+ (id)scopes;
+ (id)redirectURI;
+ (id)clientSecret;
+ (id)clientID;
+ (id)sessionManager;
+ (id)localizedServiceName;
+ (id)serviceID;
@property(copy, nonatomic) NSString *teamName; // @synthesize teamName=_teamName;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (void)refreshWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)localizedName;

@end
