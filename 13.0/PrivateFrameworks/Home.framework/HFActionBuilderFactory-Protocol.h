//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/NSObject-Protocol.h>

@class HMHome, NAFuture;

@protocol HFActionBuilderFactory <NSObject>
- (NAFuture *)currentStateActionBuildersForHome:(HMHome *)arg1;
- (_Bool)actionsMayRequireDeviceUnlock;
- (_Bool)containsActions;
@end
