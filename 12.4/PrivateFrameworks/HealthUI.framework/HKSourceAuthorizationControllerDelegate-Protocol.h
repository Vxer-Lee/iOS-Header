//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/NSObject-Protocol.h>

@class HKObjectType, HKSourceAuthorizationController, NSSet;

@protocol HKSourceAuthorizationControllerDelegate <NSObject>
- (void)authorizationController:(HKSourceAuthorizationController *)arg1 subTypesEnabled:(NSSet *)arg2 forType:(HKObjectType *)arg3 inSection:(long long)arg4;
- (void)authorizationController:(HKSourceAuthorizationController *)arg1 parentTypeIsDisabled:(HKObjectType *)arg2 forType:(HKObjectType *)arg3 inSection:(long long)arg4;
@end
