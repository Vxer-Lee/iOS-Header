//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotoLibrary/CNContactPickerDelegate-Protocol.h>
#import <PhotoLibrary/MFContactsSearchConsumer-Protocol.h>
#import <PhotoLibrary/UIPopoverControllerDelegate-Protocol.h>
#import <PhotoLibrary/UITableViewDataSource-Protocol.h>
#import <PhotoLibrary/UITableViewDelegate-Protocol.h>

@class MFContactsSearchManager, MFContactsSearchResultsModel, MFSearchShadowView, NSArray, NSNumber, NSString, PLComposeRecipientView, UIPopoverController, UIScrollView, UITableView;
@protocol PLComposeRecipientViewControllerDelegate;

@interface PLComposeRecipientViewController : UIViewController <CNContactPickerDelegate, MFContactsSearchConsumer, UITableViewDelegate, UITableViewDataSource, UIPopoverControllerDelegate>
{
    PLComposeRecipientView *_recipientView;
    UIScrollView *_recipientContainerView;
    struct CGRect _keyboardFrame;
    unsigned long long _maxExpandRows;
    id <PLComposeRecipientViewControllerDelegate> _delegate;
    MFContactsSearchManager *_searchManager;
    MFContactsSearchResultsModel *_searchResultsModel;
    MFSearchShadowView *_shadowView;
    NSArray *_searchResults;
    NSNumber *_currentSearchTaskID;
    UITableView *_searchResultsTable;
    UIPopoverController *_searchResultsPopoverController;
    UIPopoverController *_peoplePickerPopoverController;
    struct {
        unsigned int showingPeoplePicker:1;
        unsigned int showingSearchResultsTable:1;
        unsigned int offsettingForResultsTable:1;
        unsigned int wasFirstResponder:1;
    } _flags;
}

+ (void)recordRecentInvitationRecipient:(id)arg1 displayName:(id)arg2 date:(id)arg3;
@property(nonatomic) id <PLComposeRecipientViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long maxExpandRows; // @synthesize maxExpandRows=_maxExpandRows;
@property(readonly, retain, nonatomic) PLComposeRecipientView *recipientView; // @synthesize recipientView=_recipientView;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)_addRecipientFromSelectedContactProperty:(id)arg1;
- (_Bool)isRecipientViewFirstResponder;
- (void)makeRecipientViewResignFirstResponder;
- (void)makeRecipientViewFirstResponder;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)composeRecipientViewReturnPressed:(id)arg1;
- (id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void *)arg2 identifier:(int)arg3;
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 showPersonCardForAtom:(id)arg2;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
- (_Bool)composeRecipientViewIsShowingPeoplePicker:(id)arg1;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 requestDeleteRecipientAtIndex:(int)arg2;
- (void)endedNetworkActivity;
- (void)beganNetworkActivity;
- (void)finishedTaskWithID:(id)arg1;
- (void)finishedSearchingForType:(unsigned long long)arg1;
- (void)consumeSearchResults:(id)arg1 type:(unsigned long long)arg2 taskID:(id)arg3;
- (void)_searchForRecipientWithText:(id)arg1;
- (void)_updateSearchResultsTableVisibility;
- (_Bool)_searchResultsShowInPopover;
- (id)_newShadowView;
- (id)_newSearchResultsTable;
- (void)_setSearchResults:(id)arg1;
- (id)_searchManager;
- (void)_presentSearchResultsPopover;
- (void)_keyboardSizeDidChange:(id)arg1;
- (void)_updateViewsLayoutAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void *)_addressBook;
- (void)_forceDismissPeoplePickerPopover;
- (void)_dismissContactPicker:(id)arg1;
- (id)recipients;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidUnload;
- (void)loadView;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
