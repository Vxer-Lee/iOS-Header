//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class SBFolderIconImageView, _SBFolderPageElement;

@interface _SBIconGridWrapperView : UIImageView
{
    _SBFolderPageElement *_element;
    SBFolderIconImageView *_folderIconImageView;
}

@property(nonatomic) __weak SBFolderIconImageView *folderIconImageView; // @synthesize folderIconImageView=_folderIconImageView;
@property(retain, nonatomic) _SBFolderPageElement *element; // @synthesize element=_element;
- (void).cxx_destruct;
- (void)positionAtRow:(unsigned long long)arg1;
- (void)reposition;

@end
