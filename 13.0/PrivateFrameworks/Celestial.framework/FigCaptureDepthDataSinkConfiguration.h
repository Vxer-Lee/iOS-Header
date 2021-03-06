//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Celestial/FigCaptureSinkConfiguration.h>

@interface FigCaptureDepthDataSinkConfiguration : FigCaptureSinkConfiguration
{
    _Bool _discardsLateDepthData;
    _Bool _filteringEnabled;
}

@property(nonatomic) _Bool filteringEnabled; // @synthesize filteringEnabled=_filteringEnabled;
@property(nonatomic) _Bool discardsLateDepthData; // @synthesize discardsLateDepthData=_discardsLateDepthData;
- (int)sinkType;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;

@end

