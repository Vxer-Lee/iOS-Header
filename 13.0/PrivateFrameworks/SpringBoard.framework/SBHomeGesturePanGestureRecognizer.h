//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBScreenEdgePanGestureRecognizer.h>

#import <SpringBoard/PTSettingsKeyObserver-Protocol.h>
#import <SpringBoard/SBGestureRecognizerPanGestureProviding-Protocol.h>
#import <SpringBoard/SBGestureRecognizerTouchHistoryProviding-Protocol.h>

@class NSString, SBFluidSwitcherGestureExclusionTrapezoid, SBHomeGestureSettings, SBTouchHistory, UIView;

@interface SBHomeGesturePanGestureRecognizer : SBScreenEdgePanGestureRecognizer <PTSettingsKeyObserver, SBGestureRecognizerPanGestureProviding, SBGestureRecognizerTouchHistoryProviding>
{
    _Bool _preventHorizontalSwipesOutsideTrapezoid;
    _Bool _installedAsSystemGesture;
    SBHomeGestureSettings *_homeGestureSettings;
    SBFluidSwitcherGestureExclusionTrapezoid *_portraitExclusionTrapezoid;
    SBFluidSwitcherGestureExclusionTrapezoid *_landscapeExclusionTrapezoid;
    SBTouchHistory *_touchHistory;
}

+ (id)homeGesturePanGestureRecognizerWithTarget:(id)arg1 action:(SEL)arg2;
@property(retain, nonatomic) SBTouchHistory *touchHistory; // @synthesize touchHistory=_touchHistory;
@property(retain, nonatomic) SBFluidSwitcherGestureExclusionTrapezoid *landscapeExclusionTrapezoid; // @synthesize landscapeExclusionTrapezoid=_landscapeExclusionTrapezoid;
@property(retain, nonatomic) SBFluidSwitcherGestureExclusionTrapezoid *portraitExclusionTrapezoid; // @synthesize portraitExclusionTrapezoid=_portraitExclusionTrapezoid;
@property(retain, nonatomic) SBHomeGestureSettings *homeGestureSettings; // @synthesize homeGestureSettings=_homeGestureSettings;
@property(nonatomic) _Bool installedAsSystemGesture; // @synthesize installedAsSystemGesture=_installedAsSystemGesture;
@property(nonatomic) _Bool preventHorizontalSwipesOutsideTrapezoid; // @synthesize preventHorizontalSwipesOutsideTrapezoid=_preventHorizontalSwipesOutsideTrapezoid;
- (void).cxx_destruct;
- (void)_updateHomeGestureParameters;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (_Bool)_shouldBlockHomeGestureForKeyboardInputMode:(id)arg1;
- (id)_currentExclusionShapeForEdge:(unsigned long long)arg1;
- (_Bool)_isOutsideOfExclusionTrapezoid;
- (id)_currentKeyboardExclusionCompositeShape;
- (void)_setUpExclusionTrapezoids;
- (_Bool)_shouldBegin;
- (double)peakSpeed;
- (double)averageTouchPathAngleOverTimeDuration:(double)arg1;
- (struct CGPoint)averageTouchVelocityOverTimeDuration:(double)arg1;
- (void)reset;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) __weak UIView *viewForTouchHistory;
- (void)sb_commonInitHomeGesturePanGestureRecognizer;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 type:(long long)arg3 options:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
