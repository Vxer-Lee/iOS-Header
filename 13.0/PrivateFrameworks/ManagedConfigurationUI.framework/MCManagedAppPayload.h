//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MCManagedAppPayload : MCPayload
{
    NSString *_managedAppID;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
@property(retain, nonatomic) NSString *managedAppID; // @synthesize managedAppID=_managedAppID;
- (void).cxx_destruct;
- (id)title;
- (id)initWithManagedAppID:(id)arg1 profile:(id)arg2;

@end

