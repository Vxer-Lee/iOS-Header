//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSArray, NSDictionary, UIColor, UIDragPreviewParameters, UIView, _DUIPreview;

@interface UIDragPreview : NSObject <NSCopying>
{
    _Bool _marginsEnabled;
    _Bool _precisionInput;
    _Bool _scalesOnLift;
    _Bool _translatesOnLift;
    _Bool _hidesSourceView;
    _Bool _viewCornersAreContinuous;
    _Bool __springboardPlatterStyle;
    UIView *_view;
    UIDragPreviewParameters *_parameters;
    NSArray *_clippingRects;
    UIView *_container;
    UIColor *_backgroundColor;
    UIView *_maskView;
    double _viewCornerRadius;
    NSDictionary *__springboardParameters;
    struct CGSize _originalSize;
    struct CGPoint _originalCenter;
}

+ (struct CGSize)textBoundingSize;
+ (struct CGSize)defaultBoundingSize;
+ (id)previewForURL:(id)arg1 title:(id)arg2;
+ (id)previewForURL:(id)arg1;
@property(copy, nonatomic) NSDictionary *_springboardParameters; // @synthesize _springboardParameters=__springboardParameters;
@property(nonatomic) _Bool _springboardPlatterStyle; // @synthesize _springboardPlatterStyle=__springboardPlatterStyle;
@property(readonly, nonatomic) _Bool viewCornersAreContinuous; // @synthesize viewCornersAreContinuous=_viewCornersAreContinuous;
@property(readonly, nonatomic) double viewCornerRadius; // @synthesize viewCornerRadius=_viewCornerRadius;
@property(nonatomic) _Bool hidesSourceView; // @synthesize hidesSourceView=_hidesSourceView;
@property(nonatomic) _Bool translatesOnLift; // @synthesize translatesOnLift=_translatesOnLift;
@property(nonatomic) _Bool scalesOnLift; // @synthesize scalesOnLift=_scalesOnLift;
@property(nonatomic) _Bool precisionInput; // @synthesize precisionInput=_precisionInput;
@property(readonly, nonatomic) struct CGPoint originalCenter; // @synthesize originalCenter=_originalCenter;
@property(readonly, nonatomic) struct CGSize originalSize; // @synthesize originalSize=_originalSize;
@property(readonly, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) _Bool marginsEnabled; // @synthesize marginsEnabled=_marginsEnabled;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) UIView *container; // @synthesize container=_container;
@property(copy, nonatomic) NSArray *clippingRects; // @synthesize clippingRects=_clippingRects;
@property(readonly, copy, nonatomic) UIDragPreviewParameters *parameters; // @synthesize parameters=_parameters;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_setOriginalCenter:(struct CGPoint)arg1;
@property(readonly, nonatomic) _DUIPreview *_duiPreview;
- (id)initWithView:(id)arg1;
- (id)initWithView:(id)arg1 parameters:(id)arg2;

@end

