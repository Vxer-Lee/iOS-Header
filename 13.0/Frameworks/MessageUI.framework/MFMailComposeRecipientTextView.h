//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsAutocompleteUI/CNComposeRecipientTextView.h>

@class MFComposeDisplayMetrics;
@protocol MFMailComposeRecipientTextViewDelegate;

@interface MFMailComposeRecipientTextView : CNComposeRecipientTextView
{
    MFComposeDisplayMetrics *_displayMetrics;
}

@property(retain, nonatomic) MFComposeDisplayMetrics *displayMetrics; // @synthesize displayMetrics=_displayMetrics;
- (void).cxx_destruct;
- (void)_textInputDidChange:(id)arg1;
- (void)_displayMetricsDidChange;
- (void)layoutMarginsDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (id)nextResponder;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) __weak id <MFMailComposeRecipientTextViewDelegate> delegate; // @dynamic delegate;

@end
