//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/EQKitBox.h>

@interface EQKitPathBox : EQKitBox
{
    struct CGPath *mCGPath;
    double mHeight;
    double mPaddingLeft;
    double mPaddingRight;
    double mDepth;
    double mWidth;
    _Bool mDimensionsValid;
    struct CGRect mErasableBounds;
    _Bool mErasableBoundsValid;
    struct CGColor *mCGColor;
    int mDrawingMode;
    double mLineWidth;
}

@property(readonly, nonatomic) double lineWidth; // @synthesize lineWidth=mLineWidth;
@property(readonly, nonatomic) int drawingMode; // @synthesize drawingMode=mDrawingMode;
@property(readonly, nonatomic) struct CGColor *color; // @synthesize color=mCGColor;
@property(readonly, nonatomic) double paddingRight; // @synthesize paddingRight=mPaddingRight;
@property(readonly, nonatomic) double paddingLeft; // @synthesize paddingLeft=mPaddingLeft;
@property(readonly, nonatomic) double height; // @synthesize height=mHeight;
@property(readonly, nonatomic) struct CGPath *cgPath; // @synthesize cgPath=mCGPath;
- (struct CGRect)p_cacheErasableBounds;
- (void)p_cacheDimensions;
- (id)description;
- (_Bool)appendOpticalAlignToSpec:(struct Spec *)arg1 offset:(struct CGPoint)arg2;
- (void)renderIntoContext:(struct CGContext *)arg1 offset:(struct CGPoint)arg2;
- (struct CGRect)erasableBounds;
@property(readonly, nonatomic) double width;
@property(readonly, nonatomic) double depth;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCGPath:(struct CGPath *)arg1 height:(double)arg2 cgColor:(struct CGColor *)arg3 drawingMode:(int)arg4 lineWidth:(double)arg5;
- (id)initWithCGPath:(struct CGPath *)arg1 height:(double)arg2 cgColor:(struct CGColor *)arg3;
- (id)initWithCGPath:(struct CGPath *)arg1 height:(double)arg2 paddingLeft:(double)arg3 paddingRight:(double)arg4 cgColor:(struct CGColor *)arg5;
- (id)initWithCGPath:(struct CGPath *)arg1 height:(double)arg2 paddingLeft:(double)arg3 paddingRight:(double)arg4 cgColor:(struct CGColor *)arg5 drawingMode:(int)arg6 lineWidth:(double)arg7;

@end
