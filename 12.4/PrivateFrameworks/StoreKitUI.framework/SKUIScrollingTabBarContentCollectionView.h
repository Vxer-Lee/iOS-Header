//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewControllerContainerCollectionView.h>

@protocol SKUIScrollingTabBarContentCollectionViewDelegate;

@interface SKUIScrollingTabBarContentCollectionView : SKUIViewControllerContainerCollectionView
{
    _Bool _performingLayout;
}

@property(readonly, nonatomic, getter=isPerformingLayout) _Bool performingLayout; // @synthesize performingLayout=_performingLayout;
- (void)_reuseCell:(id)arg1;
- (void)layoutSubviews;

// Remaining properties
@property(nonatomic) id <SKUIScrollingTabBarContentCollectionViewDelegate> delegate; // @dynamic delegate;

@end
