//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGItemsLayout.h>

#import <PhotosUICore/PXCuratedLibraryAllPhotosBodyLayout-Protocol.h>
#import <PhotosUICore/PXGDiagnosticsProvider-Protocol.h>

@class NSString;

@interface PXGGridLayout : PXGItemsLayout <PXCuratedLibraryAllPhotosBodyLayout, PXGDiagnosticsProvider>
{
    CDStruct_d97c9657 _updateFlags;
    _Bool _isUpdating;
    struct CGSize _itemSize;
    double _finalInterItemSpacing;
    struct UIEdgeInsets _finalInsets;
    _Bool _canHandleVisibleRectRejection;
    _Bool _enableBestCropRect;
    unsigned char _mediaFlags;
    _Bool _fillSafeAreaTopInset;
    _Bool _hideIncompleteLastRow;
    _Bool _mediaTargetSizeIgnoresSpacing;
    _Bool _loadItemsOutsideAnchorViewport;
    int _mediaKind;
    int _presentationType;
    long long _style;
    long long _contentMode;
    long long _numberOfColumns;
    double _interItemSpacing;
    double _itemAspectRatio;
    double _aspectRatioLimit;
    long long _visualItemShift;
    id _anchorObjectReference;
    CDStruct_2bd92d94 _itemCornerRadius;
    CDStruct_2bd92d94 _edgeCornerRadius;
    struct CGPoint _anchorViewportCenter;
    struct CGPoint _contentOrigin;
    struct UIEdgeInsets _padding;
}

@property(nonatomic) struct CGPoint contentOrigin; // @synthesize contentOrigin=_contentOrigin;
@property(nonatomic) _Bool loadItemsOutsideAnchorViewport; // @synthesize loadItemsOutsideAnchorViewport=_loadItemsOutsideAnchorViewport;
@property(nonatomic) struct CGPoint anchorViewportCenter; // @synthesize anchorViewportCenter=_anchorViewportCenter;
@property(retain, nonatomic) id anchorObjectReference; // @synthesize anchorObjectReference=_anchorObjectReference;
@property(nonatomic) CDStruct_2bd92d94 edgeCornerRadius; // @synthesize edgeCornerRadius=_edgeCornerRadius;
@property(nonatomic) CDStruct_2bd92d94 itemCornerRadius; // @synthesize itemCornerRadius=_itemCornerRadius;
@property(nonatomic) _Bool mediaTargetSizeIgnoresSpacing; // @synthesize mediaTargetSizeIgnoresSpacing=_mediaTargetSizeIgnoresSpacing;
@property(nonatomic) _Bool hideIncompleteLastRow; // @synthesize hideIncompleteLastRow=_hideIncompleteLastRow;
@property(nonatomic) long long visualItemShift; // @synthesize visualItemShift=_visualItemShift;
@property(nonatomic) _Bool fillSafeAreaTopInset; // @synthesize fillSafeAreaTopInset=_fillSafeAreaTopInset;
@property(nonatomic) int presentationType; // @synthesize presentationType=_presentationType;
@property(nonatomic) unsigned char mediaFlags; // @synthesize mediaFlags=_mediaFlags;
@property(nonatomic) int mediaKind; // @synthesize mediaKind=_mediaKind;
@property(nonatomic) double aspectRatioLimit; // @synthesize aspectRatioLimit=_aspectRatioLimit;
@property(nonatomic) _Bool enableBestCropRect; // @synthesize enableBestCropRect=_enableBestCropRect;
@property(nonatomic) double itemAspectRatio; // @synthesize itemAspectRatio=_itemAspectRatio;
@property(nonatomic) double interItemSpacing; // @synthesize interItemSpacing=_interItemSpacing;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) _Bool canHandleVisibleRectRejection; // @synthesize canHandleVisibleRectRejection=_canHandleVisibleRectRejection;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *diagnosticDescription;
- (void)applySpriteChangeDetails:(id)arg1 countAfterChanges:(unsigned int)arg2 initialState:(CDUnknownBlockType)arg3 modifyState:(CDUnknownBlockType)arg4;
- (void)setNumberOfItems:(long long)arg1 withChangeDetails:(id)arg2 changeMediaVersionHandler:(CDUnknownBlockType)arg3;
- (void)loadedItemsDidChange;
- (void)safeAreaInsetsDidChange;
- (void)visibleRectDidChange;
- (void)alphaDidChange;
- (void)screenScaleDidChange;
- (void)referenceSizeDidChange;
- (_Bool)shouldUpdateDecorationMediaTargetSizes;
- (unsigned int)spriteIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id *)arg3;
- (struct _NSRange)itemsToLoad;
- (struct CGRect)_pageAlignedRectForVisibleRect:(struct CGRect)arg1;
- (struct _NSRange)_itemsToLoadForVisibleRect:(struct CGRect)arg1;
- (struct _NSRange)itemRangeForSpriteIndexRange:(struct _PXGSpriteIndexRange)arg1;
- (struct _NSRange)itemRangeInRect:(struct CGRect)arg1;
@property(readonly, nonatomic) struct CGRect loadedItemsRect;
- (long long)itemClosestTo:(struct CGPoint)arg1;
- (long long)columnForItem:(long long)arg1;
- (long long)_rowForItem:(long long)arg1;
- (void)_getItemSize:(struct CGSize *)arg1 finalInteritemSpacing:(double *)arg2 finalInsets:(struct UIEdgeInsets *)arg3 forDesiredInterItemSpacing:(double)arg4 padding:(struct UIEdgeInsets)arg5;
- (struct CGRect)_frameForItem:(long long)arg1 usingInterItemSpacing:(double)arg2 itemSize:(struct CGSize)arg3 insets:(struct UIEdgeInsets)arg4;
- (struct CGRect)frameForItem:(long long)arg1 usingInterItemSpacing:(double)arg2;
- (struct CGRect)frameForItem:(long long)arg1;
- (struct _PXGSpriteIndexRange)spriteIndexRangeCoveringRect:(struct CGRect)arg1;
- (struct CGRect)_contentRectInLayout:(struct CGRect)arg1;
- (struct CGRect)_layoutRectInContent:(struct CGRect)arg1;
- (struct CGPoint)_contentPointInLayout:(struct CGPoint)arg1;
- (struct CGPoint)_layoutPointInContent:(struct CGPoint)arg1;
@property(readonly, nonatomic) long long numberOfVisualItems;
@property(readonly, nonatomic) long long numberOfVisualRows;
@property(readonly, nonatomic) double rowHeight;
- (void)_updateSpriteStyles;
- (void)_updateSprites;
- (void)_updateContentSize;
- (void)_updateColumnsMetrics;
- (void)update;
@property(readonly, copy) NSString *description;
- (id)init;
- (_Bool)shiftItem:(long long)arg1 toColumn:(long long)arg2 hideIncompleteRows:(_Bool)arg3;
@property(readonly, nonatomic) _Bool supportsContentMode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isLazy) _Bool lazy; // @dynamic lazy;
@property(readonly, nonatomic) struct _NSRange loadedItems;
@property(readonly) Class superclass;

@end
