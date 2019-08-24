//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceShortcutsUI/VCUIManageVoiceShortcutView.h>

@class NSLayoutConstraint, VCUIActionDonationDetailView, VCUIHeadlineView;

@interface VCUIManageVoiceShortcutSetupView : VCUIManageVoiceShortcutView
{
    VCUIActionDonationDetailView *_donationDetailView;
    VCUIHeadlineView *_headlineView;
    NSLayoutConstraint *_minHeightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *minHeightConstraint; // @synthesize minHeightConstraint=_minHeightConstraint;
@property(retain, nonatomic) VCUIHeadlineView *headlineView; // @synthesize headlineView=_headlineView;
@property(retain, nonatomic) VCUIActionDonationDetailView *donationDetailView; // @synthesize donationDetailView=_donationDetailView;
- (void).cxx_destruct;
- (_Bool)_shouldShowPhraseSuggestion;
- (void)showPhraseSuggestion;
- (void)updateButtonTrayDelta:(double)arg1;
- (_Bool)showRecordingButtonOverlayDescription;
- (_Bool)showRecordingButtonOverlay;
- (id)initWithController:(id)arg1 options:(id)arg2;

@end
