//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SKProductPageRemoteViewControllerDelegate-Protocol.h"
#import "ServiceProductPageLegacyViewControllerDelegate-Protocol.h"

@class NSDictionary, NSExtension, NSMutableArray, NSString, SSLookupItem, SSLookupRequest, ServiceProductPageLegacyViewController, ServiceResilientRemoteViewContainerViewController, UINavigationController, UIView;
@protocol NSCopying;

@interface ServiceProductPageViewController : UIViewController <ServiceProductPageLegacyViewControllerDelegate, SKProductPageRemoteViewControllerDelegate>
{
    ServiceProductPageLegacyViewController *_legacyProductPageViewController;
    _Bool _preview;
    SSLookupRequest *_lookupRequest;
    _Bool _isRemoteViewControllerReady;
    UIView *_containerView;
    UINavigationController *_placeholderViewController;
    SSLookupItem *_item;
    NSDictionary *_parameters;
    NSMutableArray *_configurationActions;
    ServiceResilientRemoteViewContainerViewController *_remoteContainerViewController;
    CDUnknownBlockType _remoteLoadDidFinishCompletion;
    NSExtension *_extension;
    id <NSCopying> _extensionRequest;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
+ (id)_remoteViewControllerInterface;
+ (id)_exportedInterface;
@property(retain, nonatomic) id <NSCopying> extensionRequest; // @synthesize extensionRequest=_extensionRequest;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(copy, nonatomic) CDUnknownBlockType remoteLoadDidFinishCompletion; // @synthesize remoteLoadDidFinishCompletion=_remoteLoadDidFinishCompletion;
@property(retain, nonatomic) ServiceResilientRemoteViewContainerViewController *remoteContainerViewController; // @synthesize remoteContainerViewController=_remoteContainerViewController;
@property(copy, nonatomic) NSMutableArray *configurationActions; // @synthesize configurationActions=_configurationActions;
@property(copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) SSLookupItem *item; // @synthesize item=_item;
@property(nonatomic) _Bool isRemoteViewControllerReady; // @synthesize isRemoteViewControllerReady=_isRemoteViewControllerReady;
@property(retain, nonatomic) UINavigationController *placeholderViewController; // @synthesize placeholderViewController=_placeholderViewController;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (_Bool)_shouldLayoutAsOverlayWithTraitCollection:(id)arg1;
- (void)_sendUnentitledErrorResponse;
- (void)_sendUnavailableErrorResponse;
- (void)_sendDidFinishWithResult:(long long)arg1;
- (void)_layoutContainerViewWithTraitCollection:(id)arg1;
- (_Bool)_isClientEntitled;
- (id)_clientViewControllerProxy;
- (void)_executeConfigurationActionsWithServiceProductPage:(id)arg1;
- (void)_addConfigurationAction:(CDUnknownBlockType)arg1;
- (void)_setupChildViewController:(id)arg1 animated:(_Bool)arg2;
- (id)_setupLegacyProductPageViewController;
- (void)_didReceiveRemoteViewController:(id)arg1;
- (void)_requestRemoteViewControllerForItemKind:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_loadProductWithIdentifier:(id)arg1 parameters:(id)arg2 fallback:(CDUnknownBlockType)arg3;
- (void)_cancelButtonAction:(id)arg1;
- (void)_backgroundViewAction:(id)arg1;
- (void)setVisibleInClientWindow:(id)arg1;
- (void)setShowsStoreButton:(id)arg1;
- (void)setShowsRightBarButton:(id)arg1;
- (void)setPreview:(id)arg1;
- (void)setScriptContextDictionary:(id)arg1;
- (void)setRightBarButtonTitle:(id)arg1;
- (void)setPromptString:(id)arg1;
- (void)setProductPageStyle:(id)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setCancelButtonTitle:(id)arg1;
- (void)setAskToBuy:(id)arg1;
- (void)setAffiliateIdentifier:(id)arg1;
- (void)setAdditionalBuyParameters:(id)arg1;
- (void)loadProductWithURL:(id)arg1;
- (void)loadProductWithRequest:(id)arg1;
- (void)loadProductWithParameters:(id)arg1;
- (void)loadProductWithPageDictionary:(id)arg1;
- (void)finishStarRatingPromptWithRating:(id)arg1;
- (void)finishImmediately;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (_Bool)serviceProductPageLegacyViewControllerIsEntitled;
- (void)serviceProductPageLegacyViewControllerFinishWithResult:(long long)arg1;
- (id)serviceProductPageLegacyViewControllerClientProxy;
- (void)productPageRemoteViewControllerLoadDidFinish:(id)arg1;
- (void)productPageRemoteViewController:(id)arg1 finishWithResult:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_willAppearInRemoteViewController;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
