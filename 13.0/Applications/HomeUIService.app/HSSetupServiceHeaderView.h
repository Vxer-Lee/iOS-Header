//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class HFItem, HUGridServiceCell, HUPillButton, NAUILayoutConstraintSet, UIStackView, UITapGestureRecognizer;
@protocol HSSetupServiceHeaderViewDelegate;

@interface HSSetupServiceHeaderView : UIView
{
    _Bool _canShowIdentifyButton;
    _Bool _pendingReleaseAnimation;
    HFItem *_item;
    id <HSSetupServiceHeaderViewDelegate> _delegate;
    UIView *_backgroundView;
    unsigned long long _paddingEdges;
    HUGridServiceCell *_serviceCell;
    HUPillButton *_identifyButton;
    UIStackView *_stackView;
    NAUILayoutConstraintSet *_constraintSet;
    UITapGestureRecognizer *_cellTapGestureRecognizer;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(nonatomic) _Bool pendingReleaseAnimation; // @synthesize pendingReleaseAnimation=_pendingReleaseAnimation;
@property(retain, nonatomic) UITapGestureRecognizer *cellTapGestureRecognizer; // @synthesize cellTapGestureRecognizer=_cellTapGestureRecognizer;
@property(retain, nonatomic) NAUILayoutConstraintSet *constraintSet; // @synthesize constraintSet=_constraintSet;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) HUPillButton *identifyButton; // @synthesize identifyButton=_identifyButton;
@property(retain, nonatomic) HUGridServiceCell *serviceCell; // @synthesize serviceCell=_serviceCell;
@property(nonatomic) unsigned long long paddingEdges; // @synthesize paddingEdges=_paddingEdges;
@property(nonatomic) _Bool canShowIdentifyButton; // @synthesize canShowIdentifyButton=_canShowIdentifyButton;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak id <HSSetupServiceHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) HFItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)_updateShowIdentifyButtonState;
- (void)updateConstraints;
- (void)_createConstraintSet;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (void)identifyAccessory:(id)arg1;
- (id)initWithItem:(id)arg1;

@end

