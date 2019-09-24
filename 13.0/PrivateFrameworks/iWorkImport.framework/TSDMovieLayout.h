//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDMediaLayout.h>

@class TSDInfoGeometry;

__attribute__((visibility("hidden")))
@interface TSDMovieLayout : TSDMediaLayout
{
    TSDInfoGeometry *mDynamicInfoGeometry;
}

- (void)p_destroyDynamicCopies;
- (void)p_createDynamicCopies;
- (struct CGRect)computeAlignmentFrameInRoot:(_Bool)arg1;
- (double)scaleForInlineClampingUnrotatedSize:(struct CGSize)arg1 withTransform:(struct CGAffineTransform)arg2;
- (id)computeLayoutGeometry;
- (struct CGRect)fullReflectionFrame;
- (struct CGRect)fullReflectionBoundsForRect:(struct CGRect)arg1;
- (id)movieInfo;
- (id)layoutGeometryFromInfo;
- (_Bool)supportsRotation;
- (id)i_computeWrapPath;
- (void)processChangedProperty:(int)arg1;
- (void)dealloc;
- (id)initWithInfo:(id)arg1;

@end
