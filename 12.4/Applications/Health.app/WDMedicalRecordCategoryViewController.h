//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKTableViewController.h>

#import "HKHealthRecordsStoreIngestionStateListener-Protocol.h"
#import "WDMedicalRecordBuddyCellDelegate-Protocol.h"
#import "WDMedicalRecordCountProviderObserver-Protocol.h"
#import "WDUserActivityResponder-Protocol.h"

@class NSArray, NSLayoutConstraint, NSString, UIAlertController, UIViewPropertyAnimator, WDCancellationToken, WDClinicalOnboardingManager, WDMedicalRecordCategoriesDownloadIndicatorView, WDProfile;

@interface WDMedicalRecordCategoryViewController : HKTableViewController <WDMedicalRecordBuddyCellDelegate, WDMedicalRecordCountProviderObserver, HKHealthRecordsStoreIngestionStateListener, WDUserActivityResponder>
{
    int _sourceListUpdateToken;
    _Bool _showingIndicator;
    int _notifyToken;
    WDProfile *_profile;
    NSArray *_accounts;
    unsigned long long _countOfUnknownRecords;
    NSArray *_sortedCategories;
    long long _CDASampleCount;
    NSArray *_sectionsToDisplay;
    WDMedicalRecordCategoriesDownloadIndicatorView *_downloadIndicatorView;
    NSLayoutConstraint *_downloadIndicatorBottomConstraint;
    UIViewPropertyAnimator *_downloadIndicatorAnimator;
    NSArray *_authorizationSources;
    UIAlertController *_errorAlert;
    long long _ingestionState;
    WDCancellationToken *_loadAuthorizationSourcesCancellationToken;
    WDClinicalOnboardingManager *_deepLinkOnboardingManager;
}

@property(retain, nonatomic) WDClinicalOnboardingManager *deepLinkOnboardingManager; // @synthesize deepLinkOnboardingManager=_deepLinkOnboardingManager;
@property(retain, nonatomic) WDCancellationToken *loadAuthorizationSourcesCancellationToken; // @synthesize loadAuthorizationSourcesCancellationToken=_loadAuthorizationSourcesCancellationToken;
@property(nonatomic) int notifyToken; // @synthesize notifyToken=_notifyToken;
@property long long ingestionState; // @synthesize ingestionState=_ingestionState;
@property(nonatomic) __weak UIAlertController *errorAlert; // @synthesize errorAlert=_errorAlert;
@property(copy, nonatomic) NSArray *authorizationSources; // @synthesize authorizationSources=_authorizationSources;
@property(nonatomic) _Bool showingIndicator; // @synthesize showingIndicator=_showingIndicator;
@property(retain, nonatomic) UIViewPropertyAnimator *downloadIndicatorAnimator; // @synthesize downloadIndicatorAnimator=_downloadIndicatorAnimator;
@property(retain, nonatomic) NSLayoutConstraint *downloadIndicatorBottomConstraint; // @synthesize downloadIndicatorBottomConstraint=_downloadIndicatorBottomConstraint;
@property(retain, nonatomic) WDMedicalRecordCategoriesDownloadIndicatorView *downloadIndicatorView; // @synthesize downloadIndicatorView=_downloadIndicatorView;
@property(retain, nonatomic) NSArray *sectionsToDisplay; // @synthesize sectionsToDisplay=_sectionsToDisplay;
@property(nonatomic) long long CDASampleCount; // @synthesize CDASampleCount=_CDASampleCount;
@property(retain, nonatomic) NSArray *sortedCategories; // @synthesize sortedCategories=_sortedCategories;
@property(nonatomic) unsigned long long countOfUnknownRecords; // @synthesize countOfUnknownRecords=_countOfUnknownRecords;
@property(retain, nonatomic) NSArray *accounts; // @synthesize accounts=_accounts;
@property(retain, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (void)_postAWDMetricForAddingAccount;
- (void)_postAWDOnboardingMetricForType:(int)arg1;
- (_Bool)isClinicalRootViewController;
- (void)medicalRecordCountProviderDidUpdateAllRecordsCount:(id)arg1;
- (void)medicalRecordCountProvider:(id)arg1 didUpdateCountForSampleTypes:(id)arg2;
- (void)medicalRecordCountProvider:(id)arg1 didUpdateCountForCategories:(id)arg2;
- (void)medicalRecordBuddyCellDidTapLearnMoreButton:(id)arg1;
- (void)_showClinicalOnboardingViewController:(id)arg1;
- (void)_showClinicalOnboardingViewController;
- (void)medicalRecordBuddyCellDidTapGetStartedButton:(id)arg1;
- (void)_updateActivityForViewDidAppear;
- (id)_handlePushMedicalRecordSectionUserActivity:(id)arg1;
- (id)_handlePushSourceAuthorizationActivity:(id)arg1;
- (id)_handlePushMedicalRecordCategoryActivity:(id)arg1;
- (id)_medicalRecordCategoryForCategoryType:(long long)arg1;
- (void)_addActivityForUserActivitySection:(long long)arg1 newResponder:(id)arg2;
- (void)_addActivityForSourceAuthorization:(id)arg1 newResponder:(id)arg2;
- (void)_addActivityForMedicalRecordCategory:(id)arg1 newResponder:(id)arg2;
- (id)applyTransitionActivity:(id)arg1;
- (void)applyChangeActivity:(id)arg1;
- (void)_updateCountInCategoryCell:(id)arg1 forCategory:(id)arg2;
- (id)_indexPathsForAllRecords;
- (id)_indexPathsForSampleTypes:(id)arg1;
- (void)_enumerateIndexPathsForCategories:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)_appAuthorizationCellForSource:(id)arg1 tableView:(id)arg2;
- (_Bool)_indexPathIsNoSourcesCell:(id)arg1;
- (id)_noSourcesCellForTableView:(id)arg1 indexPath:(id)arg2;
- (_Bool)_shouldShowNoSourcesCell;
- (id)_addAccountCellInTableView:(id)arg1;
- (id)_accountCellForAccountIndex:(long long)arg1 tableView:(id)arg2 indexPath:(id)arg3;
- (id)_privacyCellForTableView:(id)arg1;
- (id)_settingsCellForTableView:(id)arg1;
- (id)_buddyCDADocumentsCellForTableView:(id)arg1;
- (id)_CDADocumentsCellForTableView:(id)arg1;
- (id)_unknownCellForTableView:(id)arg1;
- (id)_categoryCellForCategoryAtIndex:(long long)arg1 tableView:(id)arg2;
- (id)_categoryCellForCategory:(id)arg1 tableView:(id)arg2;
- (id)_allRecordsCellForTableView:(id)arg1;
- (long long)_cdaSectionInsertIndex;
- (long long)_currentCDASectionNumber;
@property(readonly, nonatomic) _Bool shouldShowUnknownRecords;
@property(readonly, nonatomic) _Bool hasDocuments;
@property(readonly, nonatomic) _Bool hasAccounts;
- (id)_authorizationSettingsViewControllerForSource:(id)arg1;
- (void)_handleTappingAtAppAuthorizationCellAtIndex:(long long)arg1;
- (id)_pushControllerForUnknownRecordsAnimated:(_Bool)arg1;
- (id)_pushControllerForCDADocumentsAnimated:(_Bool)arg1;
- (id)_pushControllerForAllRecordsAnimated:(_Bool)arg1;
- (id)_pushControllerForUserActivitySection:(long long)arg1 animated:(_Bool)arg2;
- (id)_pushControllerForSourceAuthorization:(id)arg1 animated:(_Bool)arg2;
- (id)_pushControllerForCategory:(id)arg1 animated:(_Bool)arg2;
- (void)_handleTappingAtCDADocumentsCell;
- (void)_handleTappingAtPrivacyCell;
- (void)_handleTappingAtSettingsCell;
- (void)_handleTappingAtAddAccountCell;
- (void)_handleTappingAtAccountCellAtIndex:(long long)arg1;
- (void)_handleTappingAtUnknownRecordsCell;
- (void)_handleTappingAtCategoryCellAtIndex:(long long)arg1;
- (void)_handleTappingAtAllRecordsCell;
- (_Bool)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
@property(readonly, nonatomic) _Bool isDownloadingRecords;
- (long long)_tableViewSectionForCategorySection:(long long)arg1;
- (long long)_categoryForSection:(long long)arg1;
- (void)resetSectionsToDisplay;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_loadAuthorizationSources;
- (void)_tapToRadar:(id)arg1;
- (void)_loadCategories;
- (void)_customizeTableViewForAccount;
- (void)_configureNavigationItems;
- (void)startBackgroundUpdatesOfBadgesSoWeCanClearThem;
- (void)beginSupressingBadgeUpdates;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)_toggleDownloadIndicatorViewShowHideState:(_Bool)arg1;
- (void)updateForNewHealthRecordsIngestionState;
- (void)healthRecordsStore:(id)arg1 ingestionStateDidUpdateTo:(long long)arg2;
- (void)updateIngestionState;
- (void)_triggerIngestion;
- (void)_updateCountOfUnknownRecords;
- (void)_updateCDADocumentCount;
- (void)_setupObserver;
- (void)reloadData;
- (id)initWithProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
