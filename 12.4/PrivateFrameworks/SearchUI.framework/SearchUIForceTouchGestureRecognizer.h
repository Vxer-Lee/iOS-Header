//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUI/SBUIForceTouchGestureRecognizer.h>

@class SBFApplication, SFSearchResult, UIView;
@protocol SearchUIFeedbackDelegate;

@interface SearchUIForceTouchGestureRecognizer : SBUIForceTouchGestureRecognizer
{
    _Bool _canHaveSmallSpotlightIcons;
    UIView *_thumbnailView;
    SBFApplication *_application;
    SFSearchResult *_result;
    id <SearchUIFeedbackDelegate> _selectionAndFeedbackDelegate;
}

@property __weak id <SearchUIFeedbackDelegate> selectionAndFeedbackDelegate; // @synthesize selectionAndFeedbackDelegate=_selectionAndFeedbackDelegate;
@property _Bool canHaveSmallSpotlightIcons; // @synthesize canHaveSmallSpotlightIcons=_canHaveSmallSpotlightIcons;
@property(retain) SFSearchResult *result; // @synthesize result=_result;
@property(retain) SBFApplication *application; // @synthesize application=_application;
@property __weak UIView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
- (void).cxx_destruct;
- (id)engagementFeedbackForTriggerEvent:(unsigned long long)arg1;
- (void)didPop;
- (void)didPeek;
- (void)iconButtonPressed;
- (void)updateApplicationIfNecessary;
- (double)cornerRadius;
- (id)shortcutItems;
- (id)widgetBundleID;
- (id)bundleURL;
- (id)webClipID;
- (id)bundleID;
- (id)thumbnailViewCopy;
- (void)updateWithResult:(id)arg1;
- (id)initWithView:(id)arg1 canHaveSmallSpotlightIcons:(_Bool)arg2 selectionAndFeedbackDelegate:(id)arg3;

@end

