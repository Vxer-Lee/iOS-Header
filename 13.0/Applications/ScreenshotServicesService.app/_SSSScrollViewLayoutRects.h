//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _SSSScrollViewLayoutRects : NSObject
{
    struct CGRect _scrollViewRect;
    struct CGRect _visibleRect;
    struct CGRect _contentInsetRect;
}

@property(readonly, nonatomic) struct CGRect contentInsetRect; // @synthesize contentInsetRect=_contentInsetRect;
@property(readonly, nonatomic) struct CGRect visibleRect; // @synthesize visibleRect=_visibleRect;
@property(readonly, nonatomic) struct CGRect scrollViewRect; // @synthesize scrollViewRect=_scrollViewRect;
- (id)layoutRectsByConvertingFromView:(id)arg1 toView:(id)arg2;
- (id)layoutRectsByApplyingTransform:(struct CGAffineTransform)arg1;
- (id)initWithScrollViewRect:(struct CGRect)arg1 contentInsetRect:(struct CGRect)arg2 visibleRect:(struct CGRect)arg3;
- (id)initWithScrollView:(id)arg1 visibleRectInScrollView:(struct CGRect)arg2;

@end
