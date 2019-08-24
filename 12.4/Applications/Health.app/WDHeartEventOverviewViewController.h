//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKTableViewController.h>

#import "HKSwitchTableViewCellDelegate-Protocol.h"
#import "WDFavoriteDisplayTypesControllerObserver-Protocol.h"
#import "WDUserActivityResponder-Protocol.h"

@class HKDisplayType, NSString, WDProfile;
@protocol WDDataListViewControllerDataProvider;

@interface WDHeartEventOverviewViewController : HKTableViewController <HKSwitchTableViewCellDelegate, WDFavoriteDisplayTypesControllerObserver, WDUserActivityResponder>
{
    HKDisplayType *_displayType;
    WDProfile *_profile;
    id <WDDataListViewControllerDataProvider> _dataProvider;
    long long _visibleSampleCount;
    long long _totalSampleCount;
}

- (void).cxx_destruct;
- (void)switchCellValueChanged:(id)arg1 value:(_Bool)arg2;
- (void)_addActivityForAction:(long long)arg1 newResponder:(id)arg2;
- (id)applyTransitionActivity:(id)arg1;
- (void)applyChangeActivity:(id)arg1;
- (void)_updateActivityForViewDidAppear;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)_doesActiveWatchSupportHeartRateMotionContexts;
- (void)_recomputeTotalSampleCount;
- (id)_pushDataSourcesAndAccessController;
- (id)_pushShowAllViewController;
- (void)_pushSampleDetailViewControllerForIndexPath:(id)arg1;
- (id)_cellForDescription;
- (_Bool)_isDisplayTypeFavorited;
- (id)_cellForDataSourcesAndAccess;
- (id)_cellForFavoriteSwitch;
- (id)_cellForShowAll;
- (id)_cellForSampleAtIndexPath:(id)arg1;
- (void)_reloadAllData;
- (id)_heartEventType;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
