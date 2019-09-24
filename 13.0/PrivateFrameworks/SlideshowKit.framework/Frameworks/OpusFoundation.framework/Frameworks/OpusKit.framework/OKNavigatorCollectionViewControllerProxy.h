//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/OKNavigatorViewController.h>

#import <OpusKit/UICollectionViewDataSource-Protocol.h>
#import <OpusKit/UICollectionViewDelegate-Protocol.h>
#import <OpusKit/UIScrollViewDelegate-Protocol.h>

@class NSArray, NSString, OKNavigatorCollectionView, OKPageViewController;

@interface OKNavigatorCollectionViewControllerProxy : OKNavigatorViewController <UICollectionViewDelegate, UICollectionViewDataSource, UIScrollViewDelegate>
{
    OKNavigatorCollectionView *_collectionView;
    struct CGPoint _collectionViewContentPreviousOffset;
    _Bool _scrollViewDidEndDragging;
    NSArray *_orderedPagesNames;
    OKPageViewController *_lastPageViewController;
}

+ (void)setupJavascriptContext:(id)arg1;
+ (id)supportedSettings;
@property(retain, nonatomic) OKPageViewController *lastPageViewController; // @synthesize lastPageViewController=_lastPageViewController;
- (void)navigateToPageWithName:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)_scrollViewDidCompleteScrolling;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)prepareAdjacentPagesForScrolling;
- (_Bool)isHorizontal;
- (void)prepareAdjacentPages;
- (void)prepareAdjacentPages:(unsigned long long)arg1;
- (void)prepareAdjacentPages:(unsigned long long)arg1 withDirection:(unsigned long long)arg2;
- (id)currentPageViewControllerIndexPath;
- (void)updateCurrentPageViewController;
- (_Bool)prepareForUnload;
- (_Bool)prepareForWarmup;
- (_Bool)prepareForDisplay;
- (void)updateCollectionViewLayoutItemSize;
- (void)updateCollectionView;
- (void)setSettingOrientation:(unsigned long long)arg1;
- (void)setSettingTransition:(unsigned long long)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)resolutionDidChange;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
