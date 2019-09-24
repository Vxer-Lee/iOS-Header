//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSWPRendering-Protocol.h>

@class NSString, TSUBezierPath;

__attribute__((visibility("hidden")))
@interface TSWPRenderer : NSObject <TSWPRendering>
{
    _Bool _flipShadows;
    struct CGContext *_context;
    double _viewScale;
    TSUBezierPath *_interiorClippingPath;
}

+ (struct __CTFont *)invisiblesFont;
+ (id)correctionAndDictationMarkColor;
+ (id)grammarMarkColor;
+ (id)spellingMarkColor;
+ (void)initialize;
@property(retain, nonatomic) TSUBezierPath *interiorClippingPath; // @synthesize interiorClippingPath=_interiorClippingPath;
@property(nonatomic) _Bool flipShadows; // @synthesize flipShadows=_flipShadows;
@property(nonatomic) double viewScale; // @synthesize viewScale=_viewScale;
@property(readonly, nonatomic) struct CGContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)p_setCTMAndTextPositionForFragment:(const struct TSWPLineFragment *)arg1;
- (void)p_drawListLabelForFragment:(const struct TSWPLineFragment *)arg1 drawingState:(const struct TSWPDrawingState *)arg2 lineDrawFlags:(unsigned int)arg3;
- (void)p_drawInvisiblesBreakLine:(id)arg1 lineFragment:(const struct TSWPLineFragment *)arg2 state:(const struct TSWPDrawingState *)arg3;
- (void)p_drawAdornments:(id)arg1 lineFragment:(const struct TSWPLineFragment *)arg2 state:(const struct TSWPDrawingState *)arg3;
- (void)p_drawAdornmentGlyphs:(id)arg1 lineFragment:(const struct TSWPLineFragment *)arg2 state:(const struct TSWPDrawingState *)arg3;
- (void)p_drawAttachmentAdornments:(id)arg1 lineFragment:(const struct TSWPLineFragment *)arg2 state:(const struct TSWPDrawingState *)arg3;
- (_Bool)p_canvasSelectionIncludesDrawableOfAttachmentAtCharIndex:(unsigned long long)arg1 state:(const struct TSWPDrawingState *)arg2;
- (void)p_drawHiddenDeletionsAdornments:(id)arg1 lineFragment:(const struct TSWPLineFragment *)arg2 state:(const struct TSWPDrawingState *)arg3;
- (void)p_drawInvisiblesAdornments:(id)arg1 lineFragment:(const struct TSWPLineFragment *)arg2 state:(const struct TSWPDrawingState *)arg3;
- (void)p_drawAttachmentGlyphAtPosition:(CDStruct_316206b0)arg1 fragment:(const struct TSWPLineFragment *)arg2;
- (void)p_drawTextInRunsForLine:(struct TSWPLineRef)arg1 fragment:(const struct TSWPLineFragment *)arg2 state:(const struct TSWPDrawingState *)arg3 tateChuYoko:(_Bool)arg4 baseRange:(struct _NSRange)arg5 isFirstLineRef:(_Bool)arg6;
- (void)p_drawRun:(const struct __CTRun *)arg1 range:(CDStruct_627e0f85)arg2 attributes:(id)arg3 canvasIsInteractive:(_Bool)arg4;
- (void)p_strokeWavyLineFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 width:(double)arg3;
- (void)p_strokeLineFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 width:(double)arg3;
- (void)p_drawAdornmentLineBackgroundRect:(id)arg1 lineDrawFlags:(unsigned int)arg2 drawingState:(const struct TSWPDrawingState *)arg3 bounds:(struct CGRect)arg4;
- (void)p_drawAdornmentLine:(id)arg1 drawingState:(const struct TSWPDrawingState *)arg2 lineFragment:(const struct TSWPLineFragment *)arg3 lineFragmentStart:(struct CGPoint)arg4 vertical:(_Bool)arg5;
- (void)p_drawAutocorrectionMarkingsFragment:(const struct TSWPLineFragment *)arg1 drawingState:(const struct TSWPDrawingState *)arg2;
- (void)p_drawDictationMarkingsFragment:(const struct TSWPLineFragment *)arg1 drawingState:(const struct TSWPDrawingState *)arg2;
- (void)p_drawWordMarkingsForFragment:(const struct TSWPLineFragment *)arg1 color:(id)arg2 ranges:(id)arg3 suppressRange:(struct _NSRange)arg4 drawingState:(const struct TSWPDrawingState *)arg5;
- (_Bool)shouldClipFragment:(const struct TSWPLineFragment *)arg1 drawingState:(const struct TSWPDrawingState *)arg2 lineDrawFlags:(unsigned int)arg3 updateRect:(struct CGRect)arg4 outClipRect:(struct CGRect *)arg5;
- (void)drawAdornmentRects:(id)arg1 forColumn:(id)arg2 foreground:(_Bool)arg3;
- (void)drawCharacterStrokeAdornmentRects:(id)arg1 forColumn:(id)arg2 limitSelection:(id)arg3 rubyGlyphRange:(struct _NSRange)arg4;
- (void)drawCharacterFillAdornmentRects:(id)arg1 forColumn:(id)arg2 limitSelection:(id)arg3 rubyGlyphRange:(struct _NSRange)arg4;
- (void)p_clipToInteriorClippingPath;
- (void)drawAdornmentsForFragment:(const struct TSWPLineFragment *)arg1 updateRect:(struct CGRect)arg2 drawingState:(const struct TSWPDrawingState *)arg3 runState:(CDStruct_3b6efdb6 *)arg4 lineDrawFlags:(unsigned int)arg5;
- (void)drawFragment:(const struct TSWPLineFragment *)arg1 updateRect:(struct CGRect)arg2 drawingState:(const struct TSWPDrawingState *)arg3 runState:(CDStruct_3b6efdb6 *)arg4 lineDrawFlags:(unsigned int)arg5;
- (void)didRenderFragments;
- (void)willRenderFragmentsWithDrawingState:(const struct TSWPDrawingState *)arg1;
- (void)setupFontSmoothingWithDrawingState:(const struct TSWPDrawingState *)arg1 attributes:(id)arg2;
- (struct CGSize)convertSizeToDeviceSpace:(struct CGSize)arg1;
- (struct CGRect)getClipBoundingBox;
- (void)dealloc;
- (id)initWithContext:(struct CGContext *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
