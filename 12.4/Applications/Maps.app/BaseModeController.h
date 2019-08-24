//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CustomSearchManagerObserver-Protocol.h"
#import "GEOLogContextDelegate-Protocol.h"
#import "MapCameraControllerObserver-Protocol.h"
#import "MapQuickActionMenuPresenterDelegate-Protocol.h"
#import "MapViewProviding-Protocol.h"
#import "StackedChromeModeController-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class ControlContainerViewController, CustomPOIsController, IOSChromeViewController, MKMapView, MapQuickActionMenuPresenter, MapViewDragSource, MapsDragDestinationHandler, NSString, PersonalizedItemManager, UIDragInteraction, UIDropInteraction, UILongPressGestureRecognizer, _UIFeedbackImpactBehavior;
@protocol ActionCoordination;

__attribute__((visibility("hidden")))
@interface BaseModeController : NSObject <UIGestureRecognizerDelegate, CustomSearchManagerObserver, MapCameraControllerObserver, MapQuickActionMenuPresenterDelegate, GEOLogContextDelegate, MapViewProviding, StackedChromeModeController>
{
    CDStruct_b7cb895d _previousRegion;
    ControlContainerViewController *_containerViewController;
    MKMapView *_mapView;
    UILongPressGestureRecognizer *_longPress;
    MapQuickActionMenuPresenter *_quickActionMenuPresenter;
    PersonalizedItemManager *_personalizedItemManager;
    CustomPOIsController *_customPOIsController;
    UILongPressGestureRecognizer *_feedbackPreWarmGestureRecognizer;
    _UIFeedbackImpactBehavior *_feedbackBehavior;
    UIDragInteraction *_dragInteraction;
    MapViewDragSource *_mapViewDragSource;
    UIDropInteraction *_dropInteraction;
    MapsDragDestinationHandler *_mapsDragDestinationHandler;
    IOSChromeViewController *_chromeViewController;
}

@property(nonatomic) __weak IOSChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
- (void).cxx_destruct;
- (int)currentMapViewTargetForAnalytics;
- (int)currentUITargetForAnalytics;
- (_Bool)shouldQuickActionMenuPresenter:(id)arg1 showDirectionsToPlace:(id)arg2;
- (void)quickActionMenuWillPresent:(id)arg1;
- (void)quickActionMenuPresenter:(id)arg1 selectedViewTransitLinesOnMap:(id)arg2;
- (void)quickActionMenuPresenter:(id)arg1 selectedRemoveDroppedPinOf:(id)arg2;
- (id)mapServiceTraitsForQuickActionPresenter:(id)arg1;
- (_Bool)shouldQuickActionMenuPresenter:(id)arg1 presentAtLocation:(struct CGPoint)arg2 inView:(id)arg3;
- (void)quickActionMenuPresenter:(id)arg1 selectedShowPlaceCard:(id)arg2;
- (void)quickActionMenuPresenter:(id)arg1 selectedShareLocationOf:(id)arg2;
- (void)quickActionMenuPresenter:(id)arg1 selectedViewWebsiteFor:(id)arg2;
- (void)quickActionMenuPresenter:(id)arg1 selectedCall:(id)arg2;
- (void)quickActionMenuPresenter:(id)arg1 selectedDirectionsTo:(id)arg2;
- (void)_addRecentPlaceForSearchResult:(id)arg1;
- (_Bool)mapQuickActionMenuPresenter:(id)arg1 shouldBeginOrbGestureForLabelMarkerOnMap:(id)arg2;
- (void)resignCurrentModeAnimated:(_Bool)arg1 toMode:(id)arg2;
- (void)becomeCurrentModeWithViews:(id)arg1 animated:(_Bool)arg2 state:(id)arg3 fromMode:(id)arg4;
- (id)viewController;
- (_Bool)showsMapView;
- (id)mapSelectionManagerDelegate;
- (id)mapViewDelegate;
- (_Bool)usesDefaultTransitions;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_handleFeedbackPreWarmGesture:(id)arg1;
- (void)_handleLongPress:(id)arg1;
- (int)floorOrdinalAtCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)cancelQuickActionMenuPresentation:(id)arg1;
- (void)mapCameraControllerWillChangeVisibleRect:(id)arg1;
- (void)customSearchManager:(id)arg1 didModifyCustomSearchResult:(id)arg2 coordinateChanged:(_Bool)arg3;
- (void)customSearchManager:(id)arg1 didReplaceCustomSearchResult:(id)arg2 animated:(_Bool)arg3 shouldSelectOnMap:(_Bool)arg4 context:(id)arg5;
- (void)createCustomSearchResultForDroppedPinAtPoint:(struct CLLocationCoordinate2D)arg1 floorOrdinal:(int)arg2 animated:(_Bool)arg3;
- (void)_clearCustomSearchResult;
- (void)_showCustomSearchResult:(id)arg1 shouldSelectOnMap:(_Bool)arg2;
- (void)setCustomSearchResult:(id)arg1 animated:(_Bool)arg2;
- (void)setMapView:(id)arg1;
@property(readonly, nonatomic) MKMapView *mapView;
- (void)_updateUserLocationAnnotationWithContactInfo;
- (void)_setupUserLocationAnnotation;
- (void)_setupPersonalizedMaps;
- (void)_setupMapView;
- (void)updateViewMode:(long long)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) id <ActionCoordination> actionCoordinator;
- (id)containerViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
