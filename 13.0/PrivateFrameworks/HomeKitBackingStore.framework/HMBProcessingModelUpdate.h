//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitBackingStore/HMBProcessingModelResult.h>

@class HMBModel;

@interface HMBProcessingModelUpdate : HMBProcessingModelResult
{
    HMBModel *_previousModel;
}

@property(readonly) HMBModel *previousModel; // @synthesize previousModel=_previousModel;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithModel:(id)arg1 previousModel:(id)arg2 options:(id)arg3 mirrorOutputFuture:(id)arg4;

@end

