//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNImageBasedRequestConfiguration.h>

__attribute__((visibility("hidden")))
@interface VNCreateSceneprintRequestConfiguration : VNImageBasedRequestConfiguration
{
    _Bool _returnAllResults;
    _Bool _useCenterTileOnly;
    unsigned long long _imageCropAndScaleOption;
}

@property(nonatomic) unsigned long long imageCropAndScaleOption; // @synthesize imageCropAndScaleOption=_imageCropAndScaleOption;
@property(nonatomic) _Bool useCenterTileOnly; // @synthesize useCenterTileOnly=_useCenterTileOnly;
@property(nonatomic) _Bool returnAllResults; // @synthesize returnAllResults=_returnAllResults;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequestClass:(Class)arg1;

@end
