//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSData, NSDictionary, NSString, NSURL, NSURLAuthenticationChallenge, TabDocument, UIViewController, WKBackForwardListItem, _SFDownload;

@protocol TabDocumentDelegate
- (void)didFirstVisuallyNonEmptyLayoutForWebViewInTabDocument:(TabDocument *)arg1;
- (void)tabDocument:(TabDocument *)arg1 didExtractArticleText:(NSString *)arg2 withMetadata:(NSDictionary *)arg3;
- (void)tabDocumentDidChangeSafeAreaShouldAffectObscuredInsets:(TabDocument *)arg1;
- (void)tabDocumentDidChangeSafeAreaInsets:(TabDocument *)arg1;
- (_Bool)tabDocumentDidBecomeActiveDueToWindowArrangementChanges:(TabDocument *)arg1;
- (_Bool)tabDocumentCanBecomeCurrentUserActivity:(TabDocument *)arg1;
- (_Bool)tabDocumentSupportsOpenInNewWindow:(TabDocument *)arg1;
- (NSData *)tabDocumentSavedSessionStateData:(TabDocument *)arg1;
- (long long)tabDocumentOrderIndex:(TabDocument *)arg1;
- (void)tabDocument:(TabDocument *)arg1 dismissViewControllerAnimated:(UIViewController *)arg2;
- (void)tabDocument:(TabDocument *)arg1 presentViewControllerAnimated:(UIViewController *)arg2;
- (void)tabDocumentDidEndNavigationGesture:(TabDocument *)arg1 withNavigationToBackForwardListItem:(WKBackForwardListItem *)arg2;
- (void)tabDocumentWillEndNavigationGesture:(TabDocument *)arg1 withNavigationToBackForwardListItem:(WKBackForwardListItem *)arg2;
- (void)tabDocumentDidBeginNavigationGesture:(TabDocument *)arg1;
- (_Bool)tabDocumentCanBeginInputSessionForStreamlinedLogin:(TabDocument *)arg1;
- (_Bool)tabDocumentCanDisplayModalUI:(TabDocument *)arg1;
- (void)tabDocumentDidDimissPreviewedDocument:(TabDocument *)arg1;
- (void)tabDocumentCommitPreviewedDocumentAsNewTab:(TabDocument *)arg1 inBackground:(_Bool)arg2;
- (void)tabDocumentCommitPreviewedDocument:(TabDocument *)arg1;
- (void)tabDocument:(TabDocument *)arg1 didCreatePreviewDocument:(TabDocument *)arg2;
- (unsigned long long)popUpPolicyForTabDocument:(TabDocument *)arg1;
- (void)tabDocumentShouldCloseAndSwitchToParentTab:(TabDocument *)arg1;
- (void)tabDocument:(TabDocument *)arg1 didCreateNewTabDocument:(TabDocument *)arg2;
- (void)tabDocumentDidUpdateShowingContinuous:(TabDocument *)arg1;
- (NSString *)blankTabTitleForTabDocument:(TabDocument *)arg1;
- (void)setAppBannerPinnedToTop:(_Bool)arg1 forTabDocument:(TabDocument *)arg2;
- (void)removeAppBannerFromTabDocument:(TabDocument *)arg1 animated:(_Bool)arg2;
- (void)tabDocumentDidCompleteCheckForAppBanner:(TabDocument *)arg1;
- (void)tabDocument:(TabDocument *)arg1 composeEmailWithMailToURL:(NSURL *)arg2;
- (void)tabDocumentDidAddAlert:(TabDocument *)arg1;
- (void)tabDocumentDidCancelRedirectToExternalApplication:(TabDocument *)arg1;
- (_Bool)tabDocumentCanShowJavaScriptAlertConfirmOrTextInput:(TabDocument *)arg1;
- (_Bool)tabDocumentCanRedirectToExternalApplication:(TabDocument *)arg1;
- (_Bool)tabDocument:(TabDocument *)arg1 canShowDownload:(_SFDownload *)arg2;
- (_Bool)tabDocumentCanDownloadFile:(TabDocument *)arg1;
- (void)tabDocumentWillStartLoadFromUserClick:(TabDocument *)arg1;
- (void)tabDocument:(TabDocument *)arg1 didDetectReaderAvailability:(_Bool)arg2;
- (_Bool)tabDocumentShouldHandleCertificateError:(TabDocument *)arg1;
- (_Bool)tabDocument:(TabDocument *)arg1 shouldHandleAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (void)tabDocumentFluidProgressRocketAnimationDidComplete:(TabDocument *)arg1;
- (void)tabDocumentDidChangeLocationWithinPageForMainFrame:(TabDocument *)arg1;
- (void)tabDocumentDidUpdateBackForward:(TabDocument *)arg1;
- (void)tabDocumentDidUpdateTitle:(TabDocument *)arg1;
- (void)tabDocumentDidUpdatePersistentState:(TabDocument *)arg1;
- (void)closeTabDocument:(TabDocument *)arg1 animated:(_Bool)arg2;
- (_Bool)tabDocumentCanCloseWindow:(TabDocument *)arg1;
- (void)tabDocument:(TabDocument *)arg1 didFinishLoadingWithError:(_Bool)arg2;
- (void)tabDocumentDidStartLoading:(TabDocument *)arg1;
@end

