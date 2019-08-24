//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariServices/SFContentBlockerManagerObserver-Protocol.h>

@class NSMutableDictionary, NSString, WKWebView, _SFInjectedJavaScriptController;

@interface _SFReloadOptionsController : NSObject <SFContentBlockerManagerObserver>
{
    NSMutableDictionary *_domainToUserAgentPolicyMap;
    WKWebView *_webView;
    _Bool _hasEnabledContentBlockers;
    _SFInjectedJavaScriptController *_activityJSController;
}

@property(nonatomic) _Bool hasEnabledContentBlockers; // @synthesize hasEnabledContentBlockers=_hasEnabledContentBlockers;
@property(readonly, nonatomic) _SFInjectedJavaScriptController *activityJSController; // @synthesize activityJSController=_activityJSController;
- (void).cxx_destruct;
- (void)contentBlockerManagerExtensionListDidChange:(id)arg1;
- (void)_checkForContentBlockers;
- (void)dealloc;
- (void)invalidate;
- (void)didMarkURLAsNeedingDesktopUserAgent:(id)arg1;
- (void)requestDesktopSiteWithURL:(id)arg1;
- (void)requestDesktopSite;
- (id)customUserAgentForSetting:(long long)arg1;
- (void)customUserAgentSettingForMainFrameURL:(id)arg1 withTimeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) _Bool loadedUsingDesktopUserAgent;
- (id)init;
- (id)initWithWebView:(id)arg1 activityJSController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
