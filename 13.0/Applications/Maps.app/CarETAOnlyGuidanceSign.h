//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class GuidanceETA, NSLayoutConstraint, NSString, UILabel;

__attribute__((visibility("hidden")))
@interface CarETAOnlyGuidanceSign : UIView
{
    _Bool _useLastBaselineToBottomMetric;
    NSLayoutConstraint *_bottomConstraint;
    NSString *_title;
    NSString *_subtitleOverride;
    GuidanceETA *_latestETA;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

+ (_Bool)requiresConstraintBasedLayout;
+ (CDStruct_7b7c8ae7)viewMetrics;
@property(retain) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool useLastBaselineToBottomMetric; // @synthesize useLastBaselineToBottomMetric=_useLastBaselineToBottomMetric;
@property(retain, nonatomic) GuidanceETA *latestETA; // @synthesize latestETA=_latestETA;
@property(copy, nonatomic) NSString *subtitleOverride; // @synthesize subtitleOverride=_subtitleOverride;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
@property(readonly) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
- (void)_updateContents;
- (id)initWithFrame:(struct CGRect)arg1;

@end
