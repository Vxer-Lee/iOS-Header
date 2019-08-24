//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SignHintViewController.h"

#import "GuidanceDisplay-Protocol.h"

@class LowGuidanceSignHintView, MNNavigationService, NSLayoutConstraint, NSString, PassThroughView;
@protocol NavActionCoordination;

__attribute__((visibility("hidden")))
@interface LowGuidanceSignsViewController : SignHintViewController <GuidanceDisplay>
{
    NSLayoutConstraint *_topSignViewConstraint;
    NSLayoutConstraint *_trailingSignViewConstraint;
    NSLayoutConstraint *_leadingSignViewConstraint;
    NSLayoutConstraint *_bottomSignViewConstraint;
    MNNavigationService *_navigationService;
    id <NavActionCoordination> _coordinator;
    struct UIEdgeInsets _signViewInsets;
}

@property(nonatomic) __weak id <NavActionCoordination> coordinator; // @synthesize coordinator=_coordinator;
@property(nonatomic) struct UIEdgeInsets signViewInsets; // @synthesize signViewInsets=_signViewInsets;
@property(retain, nonatomic) MNNavigationService *navigationService; // @synthesize navigationService=_navigationService;
- (void).cxx_destruct;
- (void)showManeuverAlertForAnnouncementStage:(unsigned long long)arg1;
- (void)showProceedingToRouteDistance:(double)arg1 displayString:(id)arg2 forStep:(id)arg3;
- (void)setTimeToManeuver:(double)arg1 distanceToManeuver:(double)arg2 distanceText:(id)arg3 forStep:(id)arg4 atStepIndex:(unsigned long long)arg5;
- (void)hideSecondaryManeuver;
- (void)showSecondaryManeuverSign:(id)arg1;
- (void)setETA:(id)arg1;
- (void)setDestinationDisplayName:(id)arg1;
- (void)_updateSignViewWithArtwork:(id)arg1 instruction:(id)arg2;
- (void)_updateSignViewToShowLoading;
- (void)showRecalculating;
- (void)showArrivedUsingSignInfo:(_Bool)arg1;
- (void)showNoGuidance;
- (void)showManeuverSign:(id)arg1 maneuverStepIndex:(unsigned long long)arg2;
- (void)handleTap:(id)arg1;
- (void)_udpateConstraintsWithInsets;
- (id)_initialConstraints;
@property(readonly, nonatomic) PassThroughView *passThroughView;
@property(readonly, nonatomic) LowGuidanceSignHintView *signHintView;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isGuidanceEnabled) _Bool guidanceEnabled;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
