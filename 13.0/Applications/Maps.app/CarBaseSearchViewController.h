//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MKLocationManagerObserver-Protocol.h"
#import "MKQuickRouteConfigurableView-Protocol.h"
#import "MKQuickRouteManagerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CLLocation, CarTableView, NSIndexPath, NSMapTable, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CarBaseSearchViewController : UIViewController <MKQuickRouteManagerDelegate, MKQuickRouteConfigurableView, UITableViewDelegate, UITableViewDataSource, MKLocationManagerObserver>
{
    NSMutableDictionary *_quickRouteManagers;
    NSMapTable *_lastKnownETAResultsForItem;
    CLLocation *_lastKnownLocation;
    CLLocation *_lastFetchedFromLocation;
    _Bool _suppressETAUpdates;
    NSMapTable *_modelsByItem;
    _Bool _userIsActive;
    _Bool _userIsActiveStateChangeQueued;
    CarTableView *_tableView;
    NSIndexPath *_lastSelectedIndexPath;
    long long _cellStyle;
}

@property _Bool userIsActiveStateChangeQueued; // @synthesize userIsActiveStateChangeQueued=_userIsActiveStateChangeQueued;
@property(nonatomic) _Bool userIsActive; // @synthesize userIsActive=_userIsActive;
@property(readonly, nonatomic) long long cellStyle; // @synthesize cellStyle=_cellStyle;
@property(retain, nonatomic) NSIndexPath *lastSelectedIndexPath; // @synthesize lastSelectedIndexPath=_lastSelectedIndexPath;
@property(retain, nonatomic) CarTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (id)indexPathForPreferredFocusedViewInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)modelForItem:(id)arg1;
- (id)modelForItemAtIndexPath:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (_Bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (_Bool)quickRouteShouldIncludeTransitWhenNotPreferredTransportType;
- (_Bool)quickRouteShouldOnlyUseAutomobile;
- (unsigned long long)preferredDirectionsTypeForQuickRoute;
- (void)_applyRouteETA:(id)arg1 toCell:(id)arg2 animated:(_Bool)arg3;
- (void)quickRouteManager:(id)arg1 didUpdateETA:(id)arg2 error:(id)arg3 animated:(_Bool)arg4;
- (id)_quickRouteManagerForIndexPath:(id)arg1;
- (void)_markAllQuickRouteManagersNotVisible;
- (unsigned long long)_markVisibleQuickRouteManagersVisible;
- (id)_lastKnownETAForIndexPath:(id)arg1;
- (id)_lastKnownETAForItem:(id)arg1;
- (void)updateAllETAs;
- (void)continueQuickRouteETAs;
- (void)prepareQuickRouteETAs;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
