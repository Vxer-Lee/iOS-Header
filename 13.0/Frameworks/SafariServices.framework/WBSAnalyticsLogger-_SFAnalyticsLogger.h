//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebUI/WBSAnalyticsLogger.h>

@interface WBSAnalyticsLogger (_SFAnalyticsLogger)
- (void)_sf_didCloseTabsAutomaticallyWithCount:(unsigned long long)arg1 tabClosingInterval:(id)arg2;
- (void)_sf_reportAutomaticTabClosingInterval:(id)arg1;
- (void)_sf_didChooseIntervalFromAutomaticTabClosingFirstTimeExperiencePrompt:(id)arg1;
- (void)_sf_didBeginDownloadWithMIMEType:(id)arg1 uti:(id)arg2 downloadType:(long long)arg3 promptType:(long long)arg4 browserPersona:(unsigned long long)arg5;
- (void)_sf_didTerminateWebProcessBeforeNavigationForReason:(int)arg1;
- (void)_sf_activatedHomeScreenQuickAction:(int)arg1;
- (void)_sf_authenticatedForAutoFillWithCategory:(int)arg1 onPageLoad:(_Bool)arg2 status:(int)arg3 error:(id)arg4 client:(int)arg5;
- (void)_sf_authenticatedForAutoFillWithCategory:(int)arg1 onPageLoad:(_Bool)arg2 status:(int)arg3 client:(int)arg4;
- (void)_sf_reportAutoFillRequiresAuthenticationPreference:(_Bool)arg1;
- (void)_sf_launchedOrResumedSafariWhileInPrivateBrowsing:(_Bool)arg1;
- (void)_sf_safariViewControllerDidPresentFromHostApp:(id)arg1;
- (void)_sf_safariViewControllerDidDismissWithMethod:(int)arg1;
- (void)_sf_longTappedOnSafariViewControllerToolbarButton:(int)arg1;
- (void)_sf_tappedOnSafariViewControllerToolbarButton:(int)arg1;
- (void)_sf_longTappedOnSafariToolbarButton:(int)arg1;
- (void)_sf_tappedOnSafariToolbarButton:(int)arg1;
- (void)_sf_twoFingerTappedLinkWithOutcome:(int)arg1;
- (void)_sf_enteredTwoUpUsingMethod:(int)arg1;
@end
