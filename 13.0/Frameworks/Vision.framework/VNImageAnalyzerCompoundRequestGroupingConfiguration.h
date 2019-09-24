//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VNImageAnalyzerCompoundRequestGroupingConfiguration : NSObject
{
    NSMutableArray *_originalRequests;
    NSMutableDictionary *_kindToOriginalRequestsMapping;
    NSMutableDictionary *_detectorConfigurationOptions;
}

- (void).cxx_destruct;
- (_Bool)preferBackgroundProcessing;
- (id)processingDevice;
- (void)enumerateOriginalRequestsByKindUsingBlock:(CDUnknownBlockType)arg1;
- (id)originalRequests;
- (id)detectorConfigurationOptions;
- (void)addOriginalRequest:(id)arg1 forKind:(unsigned long long)arg2;
- (void)setDetectorConfigurationOption:(id)arg1 value:(id)arg2;
- (id)init;

@end
