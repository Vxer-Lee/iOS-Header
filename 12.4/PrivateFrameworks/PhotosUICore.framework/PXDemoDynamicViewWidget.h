//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXWidget-Protocol.h>

@class NSString, PXPhotosDetailsContext, PXSectionedSelectionManager, PXTilingController, PXWidgetSpec, UIView;
@protocol PXAnonymousView, PXWidgetDelegate, PXWidgetUnlockDelegate;

@interface PXDemoDynamicViewWidget : NSObject <PXWidget>
{
    id <PXWidgetDelegate> _widgetDelegate;
    UIView *__view;
    double __preferredHeightPhase;
}

@property(nonatomic, setter=_setPreferredHeight:) double _preferredHeightPhase; // @synthesize _preferredHeightPhase=__preferredHeightPhase;
@property(readonly, nonatomic) UIView *_view; // @synthesize _view=__view;
@property(nonatomic) __weak id <PXWidgetDelegate> widgetDelegate; // @synthesize widgetDelegate=_widgetDelegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) NSObject<PXAnonymousView> *contentView;
- (double)preferredContentHeightForWidth:(double)arg1;
@property(readonly, nonatomic) _Bool hasContentForCurrentInput;
- (void)_setPreferredHeightPhase:(double)arg1;
- (void)_heartBeatIncreaseHeightPhase:(_Bool)arg1;
- (void)_loadView;

// Remaining properties
@property(readonly, nonatomic) _Bool allowUserInteractionWithSubtitle;
@property(readonly, nonatomic) long long contentLayoutStyle;
@property(readonly, nonatomic) PXTilingController *contentTilingController;
@property(readonly, nonatomic) long long contentViewAnchoringType;
@property(retain, nonatomic) PXPhotosDetailsContext *context;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isFaceModeEnabled) _Bool faceModeEnabled;
@property(readonly, nonatomic) _Bool hasLoadedContentData;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *localizedCaption;
@property(readonly, nonatomic) NSString *localizedDisclosureTitle;
@property(readonly, nonatomic) NSString *localizedSubtitle;
@property(nonatomic, getter=isSelecting) _Bool selecting;
@property(readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property(retain, nonatomic) PXWidgetSpec *spec;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supportsFaceMode;
@property(readonly, nonatomic) _Bool supportsSelection;
@property(nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled;
@property(nonatomic) __weak id <PXWidgetUnlockDelegate> widgetUnlockDelegate;

@end

