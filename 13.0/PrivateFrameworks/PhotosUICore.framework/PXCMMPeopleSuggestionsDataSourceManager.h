//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSourceManager.h>

@class PXCMMPeopleSuggestionsDataSource;

@interface PXCMMPeopleSuggestionsDataSourceManager : PXSectionedDataSourceManager
{
}

- (_Bool)isLoading;
- (void)boostLoading;
- (void)cancelLoading;
- (void)startLoading;

// Remaining properties
@property(readonly, nonatomic) PXCMMPeopleSuggestionsDataSource *dataSource; // @dynamic dataSource;

@end
