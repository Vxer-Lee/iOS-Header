//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@protocol PXInboxModelDetailViewControllerProvider, PXInboxModelMediaProvider, PXInboxModelTitleProvider;

@protocol PXInboxProviderSource <NSObject>
@property(readonly, nonatomic) id <PXInboxModelTitleProvider> titleProvider;
@property(readonly, nonatomic) id <PXInboxModelMediaProvider> mediaProvider;
@property(readonly, nonatomic) id <PXInboxModelDetailViewControllerProvider> detailViewControllerProvider;
@end
