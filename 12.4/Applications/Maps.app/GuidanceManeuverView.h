//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class GuidanceManeuverArtwork, NSArray, UIBezierPath, UIColor;
@protocol GuidanceManeuverViewDelegate, GuidanceManeuverViewTextureProvider;

__attribute__((visibility("hidden")))
@interface GuidanceManeuverView : UIView
{
    _Bool _disallowMutation;
    _Bool _alerting;
    _Bool _disallowManeuversWithoutArt;
    id <GuidanceManeuverViewTextureProvider> _textureProvider;
    int _framing;
    UIColor *_arrowColor;
    UIColor *_accentColor;
    UIBezierPath *_arrowPath;
    UIBezierPath *_arrowStrokePath;
    UIBezierPath *_intersectionFillPath;
    UIBezierPath *_intersectionStrokePath;
    NSArray *_arrivalCircles;
    double _visibleWidth;
    GuidanceManeuverArtwork *_maneuverArtwork;
    double _accentFillAlpha;
    double _accentStrokeAlpha;
    id <GuidanceManeuverViewDelegate> _delegate;
    CDStruct_092aca68 _arrowMetrics;
}

@property(nonatomic) __weak id <GuidanceManeuverViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool disallowManeuversWithoutArt; // @synthesize disallowManeuversWithoutArt=_disallowManeuversWithoutArt;
@property(nonatomic) double accentStrokeAlpha; // @synthesize accentStrokeAlpha=_accentStrokeAlpha;
@property(nonatomic) double accentFillAlpha; // @synthesize accentFillAlpha=_accentFillAlpha;
@property(retain, nonatomic) UIColor *accentColor; // @synthesize accentColor=_accentColor;
@property(retain, nonatomic) UIColor *arrowColor; // @synthesize arrowColor=_arrowColor;
@property(nonatomic) int framing; // @synthesize framing=_framing;
@property(nonatomic) CDStruct_092aca68 arrowMetrics; // @synthesize arrowMetrics=_arrowMetrics;
@property(retain, nonatomic) GuidanceManeuverArtwork *maneuverArtwork; // @synthesize maneuverArtwork=_maneuverArtwork;
- (void).cxx_destruct;
- (id)imageRepresentation;
- (struct CGSize)intrinsicContentSize;
- (void)disallowMutation;
@property(readonly, nonatomic) int displayManeuver;
- (void)_invalidateDrawingPaths;
- (void)_drawProceedToRoute;
- (void)_drawArrival;
- (void)_drawDefaultPaths;
- (void)drawRect:(struct CGRect)arg1;
- (void)_updateDrawingPathsFromJunction;
- (void)_updateDrawingPathsForProceedToRoute;
- (void)_updateDrawingPathsForArrival;
- (void)_updateDrawingPaths;
- (void)drawArrow:(id)arg1 stroke:(id)arg2 withVisibleWidth:(double)arg3 intersectionFillPath:(id)arg4 intersectionStrokePath:(id)arg5 referenceSize:(struct CGSize)arg6;
- (struct CGAffineTransform)transformForDrawingPathsWithFrame:(struct CGRect)arg1 relativeToReferenceSize:(struct CGSize)arg2;
- (void)drawArrow:(id)arg1 stroke:(id)arg2;
- (void)drawIntersectionStroke:(id)arg1 forFill:(id)arg2;
- (void)drawIntersectionFill:(id)arg1;
- (_Bool)_maneuverIsDrawnByDrawRect;
- (void)didMoveToWindow;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textureProvider:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

