//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, SRStarkGatekeeperHeaderView, SRStarkMessagesContactContainerView, UIButton, UIFocusContainerGuide, UILabel;
@protocol SRStarkViewDataSource, SRStarkViewDelegate;

@interface SRStarkView : UIView
{
    id <SRStarkViewDataSource> _dataSource;
    id <SRStarkViewDelegate> _delegate;
    UIView *_snippetView;
    SRStarkMessagesContactContainerView *_messagesContactContainerView;
    SRStarkGatekeeperHeaderView *_gatekeeperHeader;
    NSString *_aceId;
    UIView *_dismisserView;
    UIButton *_selectButton;
    UILabel *_assistantVersionLabel;
    UIFocusContainerGuide *_selectButtonFocusContainerGuide;
}

+ (_Bool)_shouldShowBugReportUI;
@property(retain, nonatomic) UIFocusContainerGuide *selectButtonFocusContainerGuide; // @synthesize selectButtonFocusContainerGuide=_selectButtonFocusContainerGuide;
@property(retain, nonatomic) UILabel *assistantVersionLabel; // @synthesize assistantVersionLabel=_assistantVersionLabel;
@property(retain, nonatomic) UIButton *selectButton; // @synthesize selectButton=_selectButton;
@property(readonly, nonatomic, getter=_dismisserView) UIView *dismisserView; // @synthesize dismisserView=_dismisserView;
@property(retain, nonatomic) NSString *aceId; // @synthesize aceId=_aceId;
@property(retain, nonatomic) SRStarkGatekeeperHeaderView *gatekeeperHeader; // @synthesize gatekeeperHeader=_gatekeeperHeader;
@property(retain, nonatomic) SRStarkMessagesContactContainerView *messagesContactContainerView; // @synthesize messagesContactContainerView=_messagesContactContainerView;
@property(retain, nonatomic) UIView *snippetView; // @synthesize snippetView=_snippetView;
@property(nonatomic) __weak id <SRStarkViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SRStarkViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)_destroyAssistantVersionLabelIfNecessary;
- (void)_createAssistantVersionLabelIfNecessary;
- (void)_preferencesDidChange;
- (_Bool)canBecomeFocused;
- (void)layoutSubviews;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;
- (id)preferredFocusEnvironments;
- (void)reloadData;
- (void)_setSnippetView:(id)arg1 animated:(_Bool)arg2;
- (void)setSnippetView:(id)arg1 animated:(_Bool)arg2;
- (void)_dismissalTapped:(id)arg1;
- (void)_selectButtonTapped:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
