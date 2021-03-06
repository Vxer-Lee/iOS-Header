//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUAssetsDataSourceManager.h>

#import <PhotosUI/PUAssetsDataSourceManagerDelegate-Protocol.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface PUAssetExplorerReviewScreenAssetsDataSourceManager : PUAssetsDataSourceManager <PUAssetsDataSourceManagerDelegate>
{
    NSDictionary *__replacementAssetsByUUID;
    PUAssetsDataSourceManager *__originalDataSourceManager;
}

@property(retain, nonatomic, setter=_setOriginalDataSourceManager:) PUAssetsDataSourceManager *_originalDataSourceManager; // @synthesize _originalDataSourceManager=__originalDataSourceManager;
@property(copy, nonatomic, setter=_setReplacementAssetsByUUID:) NSDictionary *_replacementAssetsByUUID; // @synthesize _replacementAssetsByUUID=__replacementAssetsByUUID;
- (void).cxx_destruct;
- (id)assetsDataSourceManagerInterestingAssetReferences:(id)arg1;
- (void)assetsDataSourceManager:(id)arg1 didChangeAssetsDataSource:(id)arg2;
- (void)_updateDataSource;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)detachFromOriginalDataSourceManager;
- (id)initWithOriginalDataSourceManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

