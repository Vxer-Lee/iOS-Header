//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIActivity.h>

#import <ActionKit/ENSendToEvernoteViewControllerDelegate-Protocol.h>

@class ENNote, NSArray, NSString;
@protocol ENSaveToEvernoteActivityDelegate;

@interface ENSaveToEvernoteActivity : UIActivity <ENSendToEvernoteViewControllerDelegate>
{
    NSString *_noteTitle;
    ENNote *_preparedNote;
    id <ENSaveToEvernoteActivityDelegate> _delegate;
    NSArray *_notebooks;
}

+ (long long)activityCategory;
@property(retain, nonatomic) NSArray *notebooks; // @synthesize notebooks=_notebooks;
@property(nonatomic) __weak id <ENSaveToEvernoteActivityDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ENNote *preparedNote; // @synthesize preparedNote=_preparedNote;
@property(copy, nonatomic) NSString *noteTitle; // @synthesize noteTitle=_noteTitle;
- (void).cxx_destruct;
- (void)viewController:(id)arg1 didFinishWithSuccess:(_Bool)arg2 uploadError:(id)arg3;
- (id)defaultNoteTitleForViewController:(id)arg1;
- (id)noteForViewController:(id)arg1;
- (id)activityViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

