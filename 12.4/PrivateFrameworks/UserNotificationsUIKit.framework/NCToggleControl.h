//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PlatterKit/PLGlyphControl.h>

#import <UserNotificationsUIKit/NCPreviewInteractionPresenterDelegate-Protocol.h>
#import <UserNotificationsUIKit/PLContentSizeCategoryAdjusting-Protocol.h>

@class NCPreviewInteractionPresenter, NCToggleControlPair, NSString, UILabel;
@protocol NCToggleControlDelegate;

@interface NCToggleControl : PLGlyphControl <NCPreviewInteractionPresenterDelegate, PLContentSizeCategoryAdjusting>
{
    _Bool _adjustsFontForContentSizeCategory;
    _Bool _expanded;
    _Bool _glyphAlwaysVisible;
    _Bool _expandedPriorToControlEvent;
    unsigned int _anchorEdge;
    NSString *_preferredContentSizeCategory;
    id <NCToggleControlDelegate> _delegate;
    unsigned long long _toggleControlType;
    UILabel *_titleLabel;
    NCToggleControlPair *_managingPair;
    NCPreviewInteractionPresenter *_previewInteractionPlatterPresenter;
    struct CGSize _cachedEffectiveMaxExpandedSize;
    struct CGSize _cachedEffectiveMaxUnexpandedSize;
}

+ (id)_labelFont:(_Bool)arg1;
+ (double)effectiveHeight:(_Bool)arg1;
+ (void)performWithDefaultExpansionAnimation:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)showLessControlWithMaterialRecipe:(long long)arg1 backgroundMaterialOptions:(unsigned long long)arg2 overlayMaterialOptions:(unsigned long long)arg3;
+ (id)dismissControlWithMaterialRecipe:(long long)arg1 backgroundMaterialOptions:(unsigned long long)arg2 overlayMaterialOptions:(unsigned long long)arg3;
@property(nonatomic, getter=_wasExpandedPriorToControlEvent) _Bool expandedPriorToControlEvent; // @synthesize expandedPriorToControlEvent=_expandedPriorToControlEvent;
@property(retain, nonatomic, getter=_previewInteractionPlatterPresenter) NCPreviewInteractionPresenter *previewInteractionPlatterPresenter; // @synthesize previewInteractionPlatterPresenter=_previewInteractionPlatterPresenter;
@property(nonatomic, getter=_managingPair, setter=_setManagingPair:) __weak NCToggleControlPair *managingPair; // @synthesize managingPair=_managingPair;
@property(readonly, nonatomic, getter=_titleLabel) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic, getter=_toggleControlType) unsigned long long toggleControlType; // @synthesize toggleControlType=_toggleControlType;
@property(nonatomic) __weak id <NCToggleControlDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isGlyphAlwaysVisible) _Bool glyphAlwaysVisible; // @synthesize glyphAlwaysVisible=_glyphAlwaysVisible;
@property(nonatomic) unsigned int anchorEdge; // @synthesize anchorEdge=_anchorEdge;
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(copy, nonatomic) NSString *preferredContentSizeCategory; // @synthesize preferredContentSizeCategory=_preferredContentSizeCategory;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
- (void).cxx_destruct;
- (struct CGRect)_unexpandedFrame;
- (struct CGSize)_sizeThatFits:(struct CGSize)arg1 whenExpanded:(_Bool)arg2;
- (struct CGSize)_effectiveGlyphSize;
- (double)_cornerRadius;
- (struct CGSize)_effectiveUnexpandedSize;
@property(readonly, nonatomic, getter=_cachedEffectiveMaxUnexpandedSize) struct CGSize cachedEffectiveMaxUnexpandedSize; // @synthesize cachedEffectiveMaxUnexpandedSize=_cachedEffectiveMaxUnexpandedSize;
- (struct CGSize)_effectiveExpandedSize;
@property(readonly, nonatomic, getter=_cachedEffectiveMaxExpandedSize) struct CGSize cachedEffectiveMaxExpandedSize; // @synthesize cachedEffectiveMaxExpandedSize=_cachedEffectiveMaxExpandedSize;
- (double)_effectiveInternalPadding;
- (double)_effectiveLeadingTrailingPadding;
- (double)_effectiveHeight;
- (double)_effectiveValueForMinValue:(double)arg1 withFont:(id)arg2;
- (void)_configureTitleLabelIfNecessaryWithTitle:(id)arg1;
- (void)_updateTitleLabelVibrantStyling;
- (void)_updateTitleLabelTextAttributes;
- (id)_labelFont;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)adjustForContentSizeCategoryChange;
- (void)previewInteractionPresenterDidDismiss:(id)arg1;
- (void)previewInteractionPresenterDidPresent:(id)arg1;
- (void)previewInteractionPresenterDidBeginInteraction:(id)arg1;
- (void)previewInteractionPresenterDidCommitToPresentation:(id)arg1;
- (_Bool)previewInteractionPresenterShouldBegin:(id)arg1;
- (id)containerViewForPreviewInteractionPresenter:(id)arg1;
- (void)_reduceTransparencyStatusDidChange:(id)arg1;
- (void)_darkerSystemColorsStatusDidChange:(id)arg1;
- (void)_handleTouchUpInsideWithEvent:(id)arg1;
- (void)_sendActionsForEvents:(unsigned long long)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)dismissModalFullScreenIfNeeded;
- (void)addTarget:(id)arg1 forPreviewInteractionPresentedContentWithAction:(SEL)arg2;
@property(copy, nonatomic) NSString *title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
