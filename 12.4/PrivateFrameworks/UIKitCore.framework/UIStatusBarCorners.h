//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@interface UIStatusBarCorners : UIView
{
    int _cornerStyle;
    int _cornerAlignment;
    UIView *_leftCorner;
    UIView *_rightCorner;
}

+ (double)cornerRadius;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (id)_imageForCornerWithStyle:(int)arg1;
- (int)cornerStyle;
- (id)initForAlignment:(int)arg1 style:(int)arg2;

@end
