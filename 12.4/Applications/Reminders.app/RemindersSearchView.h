//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel, UISearchBar, UITableView;

@interface RemindersSearchView : UIView
{
    UIButton *_actionButton;
    UITableView *_searchResultsView;
    UILabel *_noResultsLabel;
    long long _idiom;
    UISearchBar *_searchBar;
}

@property(readonly, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void).cxx_destruct;
- (void)setNoResultsLabelEnabled:(_Bool)arg1;
- (void)deactivateSearchBar;
- (void)activateSearchBar;
- (void)setButtonTarget:(id)arg1 action:(SEL)arg2;
- (void)useInterfaceIdiom:(long long)arg1;
- (void)createActionButton;
- (void)setSearchResultsView:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

