//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSAttributedString, NSString, UILabel, UITextView;

@interface LUIManagedDevicesView : UIView
{
    UILabel *_titleLabel;
    UITextView *_textView;
    NSString *_managedDevicesTitle;
    NSString *_managedDevicesText;
    NSAttributedString *_managedDevicesAttributedText;
}

@property(retain, nonatomic) NSAttributedString *managedDevicesAttributedText; // @synthesize managedDevicesAttributedText=_managedDevicesAttributedText;
@property(retain, nonatomic) NSString *managedDevicesText; // @synthesize managedDevicesText=_managedDevicesText;
@property(retain, nonatomic) NSString *managedDevicesTitle; // @synthesize managedDevicesTitle=_managedDevicesTitle;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
