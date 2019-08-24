//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableView.h>

@class UILabel;
@protocol ListTableViewDelegate;

@interface ListTableView : UITableView
{
    UILabel *_noContentView;
    id <ListTableViewDelegate> _listViewDelegate;
}

@property(nonatomic) __weak id <ListTableViewDelegate> listViewDelegate; // @synthesize listViewDelegate=_listViewDelegate;
- (void).cxx_destruct;
@property(nonatomic) _Bool showsNoContentString;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

@end
