//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIColor;

@interface UIView (ISCommonUI)
- (id)addConstraintsToSetSize:(struct CGSize)arg1;
- (id)addConstraintsToFillSuperview;
- (id)generateImage;
@property(retain, nonatomic) UIColor *debugHighlight;
- (void)setRandomDebugHighlight;
- (void)centerVerticallyInSuperview;
- (void)centerHorizontallyInSuperview;
- (void)performOnAllSubviews:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSArray *allSubviews;
@end
