//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/FPOperation.h>

#import <FileProvider/FPOperationClient-Protocol.h>

@class FPItemManager, NSArray;
@protocol FPOperationProgressDelegate;

__attribute__((visibility("hidden")))
@interface FPFetchRegularItemThumbnailsOperation : FPOperation <FPOperationClient>
{
    NSArray *_itemIDs;
    struct CGSize _desiredSizeToScale;
    FPItemManager *_itemManager;
    id <FPOperationProgressDelegate> _delegate;
}

@property(nonatomic) __weak id <FPOperationProgressDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)operationDidProgressWithInfo:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)main;
- (id)initWithRegularItems:(id)arg1 desiredSizeToScale:(struct CGSize)arg2 itemManager:(id)arg3;

@end
