//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class HKDisplayCategory, NSLayoutConstraint, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface WDHealthDataTopLevelCategoryCollectionViewCell : UICollectionViewCell
{
    UIImageView *_categoryImageView;
    UILabel *_categoryLabel;
    NSLayoutConstraint *_categoryLabelBaselineAnchor;
    HKDisplayCategory *_displayCategory;
    double _fontSize;
}

+ (id)reuseIdentifier;
+ (double)internalHorizontalPadding;
+ (id)categoryNameLabelFontWithSize:(double)arg1;
+ (double)categoryNameLabelDefaultFontSize;
+ (id)categoryNameLabelFont;
+ (id)categoryNameLabelWithText:(id)arg1;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) HKDisplayCategory *displayCategory; // @synthesize displayCategory=_displayCategory;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateForCurrentSizeCategory;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
