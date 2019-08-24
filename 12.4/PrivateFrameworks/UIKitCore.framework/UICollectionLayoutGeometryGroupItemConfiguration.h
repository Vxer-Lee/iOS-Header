//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UICollectionLayoutGeometryGroupItemConfiguration-Protocol.h>

@class NSString, UICollectionLayoutGeometry;

@interface UICollectionLayoutGeometryGroupItemConfiguration : NSObject <UICollectionLayoutGeometryGroupItemConfiguration>
{
    _Bool _heightSizedToContentHeight;
    _Bool _heightSizedToContainerHeight;
    _Bool _widthSizedToContentWidth;
    _Bool _widthSizedToContainerWidth;
    double _height;
    double _heightSizedToContainerHeightFactor;
    double _heightSizedToContainerWidthFactor;
    double _width;
    double _widthSizedToContainerWidthFactor;
    double _widthSizedToContainerHeightFactor;
    UICollectionLayoutGeometry *_layoutGeometry;
    struct UIEdgeInsets _requiredEdgeSpacing;
}

+ (id)defaultItemConfig;
@property(copy, nonatomic) UICollectionLayoutGeometry *layoutGeometry; // @synthesize layoutGeometry=_layoutGeometry;
@property(nonatomic) struct UIEdgeInsets requiredEdgeSpacing; // @synthesize requiredEdgeSpacing=_requiredEdgeSpacing;
@property(nonatomic) double widthSizedToContainerHeightFactor; // @synthesize widthSizedToContainerHeightFactor=_widthSizedToContainerHeightFactor;
@property(nonatomic) double widthSizedToContainerWidthFactor; // @synthesize widthSizedToContainerWidthFactor=_widthSizedToContainerWidthFactor;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) _Bool widthSizedToContainerWidth; // @synthesize widthSizedToContainerWidth=_widthSizedToContainerWidth;
@property(nonatomic) _Bool widthSizedToContentWidth; // @synthesize widthSizedToContentWidth=_widthSizedToContentWidth;
@property(nonatomic) double heightSizedToContainerWidthFactor; // @synthesize heightSizedToContainerWidthFactor=_heightSizedToContainerWidthFactor;
@property(nonatomic) double heightSizedToContainerHeightFactor; // @synthesize heightSizedToContainerHeightFactor=_heightSizedToContainerHeightFactor;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) _Bool heightSizedToContainerHeight; // @synthesize heightSizedToContainerHeight=_heightSizedToContainerHeight;
@property(nonatomic) _Bool heightSizedToContentHeight; // @synthesize heightSizedToContentHeight=_heightSizedToContentHeight;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_resetWidth;
- (void)widthSizedToContainerWidthFactor:(double)arg1;
- (void)_resetHeight;
- (void)heightSizedToContainerWidthFactor:(double)arg1;
@property(nonatomic) struct CGSize size;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
