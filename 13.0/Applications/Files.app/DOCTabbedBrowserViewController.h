//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIDocumentBrowserViewController.h>

#import "DOCFullDocumentManagerViewControllerDelegate-Protocol.h"
#import "DOCSplitViewControllerDelegate-Protocol.h"
#import "DOCTabbedBrowserViewDelegate-Protocol.h"
#import "UIDocumentBrowserViewControllerPrivateDelegate-Protocol.h"
#import "UITabBarControllerDelegate-Protocol.h"

@class DOCFullDocumentManagerViewController, DOCSourceObserver, DOCSplitBrowserViewController, NSString, UITabBarController, _TtC5Files24DOCNamedLocationResolver, _TtC5Files25DOCDefaultSourceUIManager, _TtC5Files29DOCBrowserContainerController;
@protocol DOCTabbedBrowserViewControllerDelegate;

@interface DOCTabbedBrowserViewController : UIDocumentBrowserViewController <UIDocumentBrowserViewControllerPrivateDelegate, UITabBarControllerDelegate, DOCSplitViewControllerDelegate, DOCFullDocumentManagerViewControllerDelegate, DOCTabbedBrowserViewDelegate>
{
    _Bool _didLoadRecentsTab;
    _Bool _didLoadBrowseTab;
    DOCFullDocumentManagerViewController *_fullRecentsViewController;
    DOCSplitBrowserViewController *_splitBrowserViewController;
    id <DOCTabbedBrowserViewControllerDelegate> _tabbedBrowserViewControllerDelegate;
    DOCSourceObserver *_sourceObserver;
    _TtC5Files24DOCNamedLocationResolver *_namedLocationResolver;
    NSString *_currentLocationTitle;
    UITabBarController *_tabBarController;
    _TtC5Files25DOCDefaultSourceUIManager *_defaultSourceUIManager;
}

+ (void)setGlobalTabbedBrowserController:(id)arg1 forIdentifier:(id)arg2;
+ (id)globalTabbedBrowserControllerForIdentifier:(id)arg1;
+ (id)globalMapTable;
@property(retain) _TtC5Files25DOCDefaultSourceUIManager *defaultSourceUIManager; // @synthesize defaultSourceUIManager=_defaultSourceUIManager;
@property(retain) UITabBarController *tabBarController; // @synthesize tabBarController=_tabBarController;
@property(retain) NSString *currentLocationTitle; // @synthesize currentLocationTitle=_currentLocationTitle;
@property(retain) _TtC5Files24DOCNamedLocationResolver *namedLocationResolver; // @synthesize namedLocationResolver=_namedLocationResolver;
@property(retain) DOCSourceObserver *sourceObserver; // @synthesize sourceObserver=_sourceObserver;
@property __weak id <DOCTabbedBrowserViewControllerDelegate> tabbedBrowserViewControllerDelegate; // @synthesize tabbedBrowserViewControllerDelegate=_tabbedBrowserViewControllerDelegate;
@property(retain) DOCSplitBrowserViewController *splitBrowserViewController; // @synthesize splitBrowserViewController=_splitBrowserViewController;
@property(retain) DOCFullDocumentManagerViewController *fullRecentsViewController; // @synthesize fullRecentsViewController=_fullRecentsViewController;
- (void).cxx_destruct;
- (void)importDocumentAtURL:(id)arg1 mode:(unsigned long long)arg2 toCurrentBrowserLocationWithCompletion:(CDUnknownBlockType)arg3;
- (void)importDocumentAtURL:(id)arg1 nextToDocumentAtURL:(id)arg2 mode:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)dismissAllPresentedViewControllers:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)documentManagerDidFinishGatheringItemsAndThumbnails:(id)arg1;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (_Bool)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
- (void)updateNavigationBarButtonItemsForViewController:(id)arg1;
- (_Bool)_shouldForwardSelectorToDelegate:(SEL)arg1;
- (void)updateLocationTitleFromCurrentState;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setAllowsPickingMultipleItems:(_Bool)arg1;
- (void)documentBrowser:(id)arg1 willPresentActivityViewController:(id)arg2;
- (id)documentBrowser:(id)arg1 applicationActivitiesForDocumentURLs:(id)arg2;
- (void)documentBrowser:(id)arg1 failedToImportDocumentAtURL:(id)arg2 error:(id)arg3;
- (void)documentBrowser:(id)arg1 didImportDocumentAtURL:(id)arg2 toDestinationURL:(id)arg3;
- (void)documentBrowser:(id)arg1 didRequestDocumentCreationWithHandler:(CDUnknownBlockType)arg2;
- (void)documentBrowser:(id)arg1 commitPreviewOfDocumentAtURL:(id)arg2;
- (void)documentBrowser:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (_Bool)documentBrowser:(id)arg1 shouldHandleLocation:(id)arg2;
- (_Bool)documentBrowser:(id)arg1 shouldShowActivityViewControllerForDocumentURLs:(id)arg2 barButtonItem:(id)arg3 popoverTracker:(id)arg4;
- (id)transitionControllerForDocumentAtURL:(id)arg1;
- (void)revealDocumentAtURL:(id)arg1 importIfNeeded:(_Bool)arg2 openDocument:(_Bool)arg3 revealContents:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)revealDocumentAtURL:(id)arg1 importIfNeeded:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)splitViewController:(id)arg1 wantsToShowTabBar:(_Bool)arg2;
- (void)showConnectToServer:(id)arg1;
- (void)presentTab:(unsigned long long)arg1;
@property(readonly) unsigned long long presentedTab;
@property(readonly) DOCFullDocumentManagerViewController *effectiveFullBrowser;
@property(readonly) _TtC5Files29DOCBrowserContainerController *effectiveBrowserViewController;
- (void)setCustomActions:(id)arg1;
- (void)setAllowsDocumentCreation:(_Bool)arg1;
- (void)setAdditionalTrailingNavigationBarButtonItems:(id)arg1;
- (void)setAdditionalLeadingNavigationBarButtonItems:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)tabbedBrowserView:(id)arg1 didMoveToWindow:(id)arg2;
- (void)tabbedBrowserView:(id)arg1 willMoveToWindow:(id)arg2;
- (void)_updateColmnViewAvaialablityFromTraitCollection:(id)arg1 andSize:(struct CGSize)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)_loadFullHierarchy;
- (void)_loadMinimalHierarchy;
- (void)viewDidLoad;
- (void)loadView;
- (void)_commonInit;
- (void)_stopSearchingSources;
- (void)startSearchingSourcesWithConfiguration:(id)arg1;
- (void)_viewController:(id)arg1 wantsToShowTabBar:(_Bool)arg2 isEditing:(_Bool)arg3;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)installKeyCommands;
- (void)presentConnectToServer:(id)arg1;
- (void)presentConnectToServer:(id)arg1 askPermission:(_Bool)arg2;
- (void)actionController:(id)arg1 presentError:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)actionControllerDidFinishAction:(id)arg1 error:(id)arg2;
- (void)actionControllerDidFinishAction:(id)arg1 userInfo:(id)arg2 error:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
