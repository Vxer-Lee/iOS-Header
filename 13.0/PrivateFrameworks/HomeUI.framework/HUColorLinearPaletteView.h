//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <HomeUI/HUQuickControlInteractiveView-Protocol.h>
#import <HomeUI/UICollectionViewDataSource-Protocol.h>
#import <HomeUI/UICollectionViewDelegate-Protocol.h>
#import <HomeUI/UICollectionViewDelegateFlowLayout-Protocol.h>

@class HFColorPalette, HFColorPaletteColor, HUQuickControlColorViewProfile, NSArray, NSIndexPath, NSNumber, NSString, UICollectionView, UICollectionViewFlowLayout, UIImpactFeedbackGenerator, UISelectionFeedbackGenerator;
@protocol HUQuickControlColorPaletteViewInteractionDelegate;

@interface HUColorLinearPaletteView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, HUQuickControlInteractiveView>
{
    _Bool _userInteractionActive;
    _Bool _colorPaletteHasChanged;
    HUQuickControlColorViewProfile *_profile;
    id <HUQuickControlColorPaletteViewInteractionDelegate> _interactionDelegate;
    unsigned long long _reachabilityState;
    HFColorPalette *_colorPalette;
    NSIndexPath *_selectedColorIndexPath;
    NSArray *_colorSwatchViews;
    HFColorPalette *_calibratedColorPalette;
    HFColorPaletteColor *_selectedColor;
    NSNumber *_selectedColorBiasIndex;
    UICollectionView *_colorSwatchCollectionView;
    UICollectionViewFlowLayout *_collectionViewFlowLayout;
    NSIndexPath *_prevSelectedColorIndexPath;
    UISelectionFeedbackGenerator *_selectionFeedbackGenerator;
    UIImpactFeedbackGenerator *_impactFeedbackGenerator;
}

@property(retain, nonatomic) UIImpactFeedbackGenerator *impactFeedbackGenerator; // @synthesize impactFeedbackGenerator=_impactFeedbackGenerator;
@property(retain, nonatomic) UISelectionFeedbackGenerator *selectionFeedbackGenerator; // @synthesize selectionFeedbackGenerator=_selectionFeedbackGenerator;
@property(retain, nonatomic) NSIndexPath *prevSelectedColorIndexPath; // @synthesize prevSelectedColorIndexPath=_prevSelectedColorIndexPath;
@property(retain, nonatomic) UICollectionViewFlowLayout *collectionViewFlowLayout; // @synthesize collectionViewFlowLayout=_collectionViewFlowLayout;
@property(retain, nonatomic) UICollectionView *colorSwatchCollectionView; // @synthesize colorSwatchCollectionView=_colorSwatchCollectionView;
@property(nonatomic) _Bool colorPaletteHasChanged; // @synthesize colorPaletteHasChanged=_colorPaletteHasChanged;
@property(retain, nonatomic) NSNumber *selectedColorBiasIndex; // @synthesize selectedColorBiasIndex=_selectedColorBiasIndex;
@property(retain, nonatomic) HFColorPaletteColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(retain, nonatomic) HFColorPalette *calibratedColorPalette; // @synthesize calibratedColorPalette=_calibratedColorPalette;
@property(copy, nonatomic) NSArray *colorSwatchViews; // @synthesize colorSwatchViews=_colorSwatchViews;
@property(retain, nonatomic) NSIndexPath *selectedColorIndexPath; // @synthesize selectedColorIndexPath=_selectedColorIndexPath;
@property(nonatomic, getter=isUserInteractionActive) _Bool userInteractionActive; // @synthesize userInteractionActive=_userInteractionActive;
@property(retain, nonatomic) HFColorPalette *colorPalette; // @synthesize colorPalette=_colorPalette;
@property(nonatomic) unsigned long long reachabilityState; // @synthesize reachabilityState=_reachabilityState;
@property(nonatomic) __weak id <HUQuickControlColorPaletteViewInteractionDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
@property(copy, nonatomic) HUQuickControlColorViewProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (void)_actuateImpactTapticFeedbackIfAvailable;
- (void)_actuateSelectionTapticFeedbackIfAvailable;
- (void)_prepareForTapticFeedbackIfAvailable;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (void)_updateUIForReachabilityState:(unsigned long long)arg1;
@property(retain, nonatomic) id value;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
- (unsigned long long)_indexForSelectedColor:(id)arg1 includeBias:(_Bool)arg2;
- (void)_setSelectedColor:(id)arg1 notifyDelegate:(_Bool)arg2 updateSelectionState:(_Bool)arg3;
- (void)_updateCalibratedColorPalette;
- (void)_setColorPalette:(id)arg1 notifyDelegate:(_Bool)arg2;
- (id)initWithProfile:(id)arg1 colorPalette:(id)arg2;
- (id)initWithProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id secondaryValue;
@property(readonly) Class superclass;

@end
