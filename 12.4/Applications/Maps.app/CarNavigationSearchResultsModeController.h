//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CarChromeModeController-Protocol.h"
#import "CarRoutePreviewOverlayDataSource-Protocol.h"
#import "CarRoutePreviewOverlayDelegate-Protocol.h"
#import "PassThroughViewControllerDelegate-Protocol.h"
#import "SearchSessionObserver-Protocol.h"

@class CarChromeViewController, CarRoutePreviewOverlaySign, ChromeViewController, CustomPOIsController, NSArray, NSString, NavigationCustomFeaturesSource, PassThroughViewController, PersonalizedItemManager, SearchSession;

__attribute__((visibility("hidden")))
@interface CarNavigationSearchResultsModeController : NSObject <PassThroughViewControllerDelegate, CarRoutePreviewOverlayDelegate, CarRoutePreviewOverlayDataSource, SearchSessionObserver, CarChromeModeController>
{
    PassThroughViewController *_viewController;
    CarRoutePreviewOverlaySign *_searchResultsSign;
    unsigned long long _selectedIndex;
    CustomPOIsController *_customPOIsController;
    PersonalizedItemManager *_itemManager;
    NavigationCustomFeaturesSource *_customFeaturesSource;
    NSArray *_mapItems;
    NSArray *_searchResults;
    SearchSession *_searchSession;
    CarChromeViewController *_chromeViewController;
}

@property(nonatomic) ChromeViewController *chromeViewController;
- (void).cxx_destruct;
- (int)currentUsageTarget;
- (int)backButtonUsageActionToMode:(id)arg1;
- (id)carFocusOrderSequences;
- (id)preferredCarFocusEnvironments;
- (id)identifierForFocusItem:(id)arg1;
- (id)focusItemForIdentifier:(id)arg1;
- (double)_detourDistanceToMapItem:(id)arg1;
- (id)etaForPreviewSign:(id)arg1;
- (id)subtitleForPreviewSign:(id)arg1;
- (id)titleForPreviewSign:(id)arg1;
- (unsigned long long)numberOfResultsForPreviewSign:(id)arg1;
- (unsigned long long)selectedIndexForPreviewSign:(id)arg1;
- (unsigned long long)selectedRouteIndexForPreviewSign:(id)arg1;
- (id)currentRoutesForPreviewSign:(id)arg1;
- (void)routePreviewSign:(id)arg1 isShowingAlternates:(_Bool)arg2;
- (void)routePreviewSign:(id)arg1 selectedAlternateRouteAtIndex:(unsigned long long)arg2;
- (void)routePreviewSignSelectedPrevious:(id)arg1;
- (void)routePreviewSignSelectedNext:(id)arg1;
- (void)routePreviewSignSelectedStart:(id)arg1;
- (void)becomeCurrentModeWithViews:(id)arg1 animated:(_Bool)arg2 state:(id)arg3 fromMode:(id)arg4;
- (void)resignCurrentModeAnimated:(_Bool)arg1 toMode:(id)arg2;
- (id)overlayItemsForState:(id)arg1;
- (void)configureCardsOverlay:(id)arg1;
- (void)configureNavigationDisplay:(id)arg1;
- (id)passThroughView;
- (id)viewController;
- (_Bool)showsNavPanRecenterButton;
- (_Bool)showsNavigationBar;
- (_Bool)showsMapView;
- (void)searchSessionDidChangeSearchResults:(id)arg1;
- (void)searchSessionDidChangeSearchFieldItem:(id)arg1;
- (void)searchSessionWillPerformSearch:(id)arg1;
- (void)searchSessionDidFail:(id)arg1;
- (void)searchSessionDidInvalidate:(id)arg1;
- (unsigned long long)_validateSelectedIndex:(unsigned long long)arg1 forCount:(unsigned long long)arg2;
- (void)_updateContextAndDisplay;
- (void)_updateContext;
- (void)_updateDisplay;
- (void)_updateSelectedSearchResultAnnotation;
- (void)setMapItems:(id)arg1 selectedItemIndex:(unsigned long long)arg2;
- (void)setSearchResults:(id)arg1 selectedResultIndex:(unsigned long long)arg2;
- (void)setDestinations:(id)arg1 selectedDestinationIndex:(unsigned long long)arg2;
- (void)setSearchSession:(id)arg1;
- (void)_cancelButtonTapped:(id)arg1;
- (id)initWithMapItems:(id)arg1 selectedItemIndex:(unsigned long long)arg2;
- (id)initWithSearchResults:(id)arg1 selectedResultIndex:(unsigned long long)arg2;
- (id)initWithDestinations:(id)arg1 selectedDestinationIndex:(unsigned long long)arg2;
- (id)initWithSearchSession:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
