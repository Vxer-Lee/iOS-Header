//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FRAdInventory.h"

#import "ADBannerViewDelegate-Protocol.h"
#import "ADBannerViewInternalDelegate-Protocol.h"

@class ADBannerView, NSString;

@interface FRPrerollAdInventory : FRAdInventory <ADBannerViewDelegate, ADBannerViewInternalDelegate>
{
    CDUnknownBlockType _completionBlock;
    ADBannerView *_bannerView;
}

+ (void)initialize;
@property(retain, nonatomic) ADBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (id)videoInFeedPrerollForFeedDescriptor:(id)arg1 articleViewContext:(id)arg2 prerollLoadingTimeout:(double)arg3 aspectRatioOfVideoPlayer:(double)arg4 headline:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (id)viewControllerForStoryboardPresentationFromBannerView:(id)arg1;
- (void)bannerViewDidLoadAd:(id)arg1;
- (id)requestPrerollWithContext:(id)arg1 adOpportunityIdentifier:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)purgeAllAdObjects;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
