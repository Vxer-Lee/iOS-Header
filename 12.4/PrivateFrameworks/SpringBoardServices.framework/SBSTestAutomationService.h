//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardServices/SBSAbstractSystemService.h>

@interface SBSTestAutomationService : SBSAbstractSystemService
{
}

- (void)setApplicationBundleIdentifier:(id)arg1 blockedForScreenTime:(_Bool)arg2;
- (void)resetToHomeScreenAnimated:(_Bool)arg1;
- (void)setOrientationLockEnabled:(_Bool)arg1;
- (void)setIdleTimerEnabled:(_Bool)arg1;
- (void)setAlertsEnabled:(_Bool)arg1;
- (void)suspendAllDisplays;

@end

