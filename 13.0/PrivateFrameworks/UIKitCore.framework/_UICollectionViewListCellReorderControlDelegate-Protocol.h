//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class _UICollectionViewListCellReorderControl;

@protocol _UICollectionViewListCellReorderControlDelegate <NSObject>
- (void)_reorderControlDidEndReordering:(_UICollectionViewListCellReorderControl *)arg1 cancelled:(_Bool)arg2;
- (void)_reorderControl:(_UICollectionViewListCellReorderControl *)arg1 didMoveToPoint:(struct CGPoint)arg2;
- (void)_reorderControlDidBeginReordering:(_UICollectionViewListCellReorderControl *)arg1;
- (_Bool)_reorderControlShouldBeginReordering:(_UICollectionViewListCellReorderControl *)arg1;
@end
