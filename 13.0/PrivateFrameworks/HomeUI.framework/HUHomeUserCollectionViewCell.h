//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <HomeUI/HUCellProtocol-Protocol.h>

@class HFItem, HUContactView, NSString;
@protocol HUResizableCellDelegate;

@interface HUHomeUserCollectionViewCell : UICollectionViewCell <HUCellProtocol>
{
    HFItem *_item;
    HUContactView *_contactView;
}

+ (id)_requiredKeyDescriptors;
@property(retain, nonatomic) HUContactView *contactView; // @synthesize contactView=_contactView;
@property(retain, nonatomic) HFItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)_createSubviews;
@property(nonatomic) double avatarDiameter; // @dynamic avatarDiameter;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <HUResizableCellDelegate> resizingDelegate;
@property(readonly) Class superclass;

@end
