//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUICardKitProviderSupport/SUICKPInteractiveCardSectionViewController.h>

#import <SearchUICardKitProviderSupport/CRKEventResponding-Protocol.h>
#import <SearchUICardKitProviderSupport/SFFeedbackListener-Protocol.h>

@class NSString, SFAudioPlaybackCardSection, UIView;
@protocol SearchUICardSectionViewUpdatable;

@interface SUICKPAudioPlaybackCardSectionViewController : SUICKPInteractiveCardSectionViewController <SFFeedbackListener, CRKEventResponding>
{
}

+ (id)cardSectionClasses;
- (void)_performCommands:(id)arg1 applyingUserInfo:(id)arg2;
- (void)didEngageCardSection:(id)arg1;
- (void)cardEventDidOccur:(unsigned long long)arg1 withIdentifier:(id)arg2 userInfo:(id)arg3;

// Remaining properties
@property(retain, nonatomic) SFAudioPlaybackCardSection *cardSection; // @dynamic cardSection;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIView<SearchUICardSectionViewUpdatable> *view; // @dynamic view;

@end
