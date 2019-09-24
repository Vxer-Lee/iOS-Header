//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, TTRIDividedGridViewController, UIColor, UITextLabel;

@interface TTRIUIDividedGridViewCell : UIView
{
    UIColor *_bgColor;
    _Bool _selected;
    UITextLabel *_label;
    TTRIDividedGridViewController *_viewController;
    NSLayoutConstraint *_widthConstraint;
}

@property __weak NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property __weak TTRIDividedGridViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain) UITextLabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (id)selectedTextColor;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)init;
- (id)initWithBackgroundColor:(id)arg1;

@end
