//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class HMAccessorySetupCompletedInfo, NSError;

@protocol HMSetupRemoteHost
- (void)accessorySetupDidFinishWithInfo:(HMAccessorySetupCompletedInfo *)arg1 error:(NSError *)arg2;
- (void)accessorySetupDidFinishWithError:(NSError *)arg1;
- (void)accessorySetupDidFinishPairing;
- (void)accessorySetupDidBeginPairing;
- (void)accessorySetupDidLoad;
@end
