//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKViewController.h>

@class UILabel;

@interface WDSourceMessageViewController : HKViewController
{
    UILabel *_messageLabel;
    long long _style;
}

@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)_updateFont;
- (id)initWithStyle:(long long)arg1;

@end
