//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Celestial/FigXPCCoding-Protocol.h>
#import <Celestial/NSCopying-Protocol.h>

@class FigCaptureDepthDataSinkConfiguration, FigCaptureIrisSinkConfiguration, FigCaptureSinkConfiguration, FigCaptureSourceConfiguration, FigCaptureStillImageSinkConfiguration, FigCaptureVideoDataSinkConfiguration, FigCaptureVideoPreviewSinkConfiguration, FigCaptureVideoThumbnailSinkConfiguration, NSString;

@interface FigCaptureConnectionConfiguration : NSObject <FigXPCCoding, NSCopying>
{
    NSString *_connectionID;
    unsigned int _mediaType;
    int _underlyingDeviceType;
    FigCaptureSourceConfiguration *_sourceConfiguration;
    FigCaptureSinkConfiguration *_sinkConfiguration;
    _Bool _enabled;
}

@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) FigCaptureSinkConfiguration *sinkConfiguration; // @synthesize sinkConfiguration=_sinkConfiguration;
@property(retain, nonatomic) FigCaptureSourceConfiguration *sourceConfiguration; // @synthesize sourceConfiguration=_sourceConfiguration;
@property(nonatomic) int underlyingDeviceType; // @synthesize underlyingDeviceType=_underlyingDeviceType;
@property(nonatomic) unsigned int mediaType; // @synthesize mediaType=_mediaType;
@property(copy, nonatomic) NSString *connectionID; // @synthesize connectionID=_connectionID;
@property(readonly) FigCaptureVideoThumbnailSinkConfiguration *thumbnailSinkConfiguration;
@property(readonly) FigCaptureDepthDataSinkConfiguration *depthDataSinkConfiguration;
@property(readonly) FigCaptureVideoPreviewSinkConfiguration *videoPreviewSinkConfiguration;
@property(readonly) FigCaptureVideoDataSinkConfiguration *videoDataSinkConfiguration;
@property(readonly) FigCaptureStillImageSinkConfiguration *stillImageSinkConfiguration;
@property(readonly) FigCaptureIrisSinkConfiguration *irisSinkConfiguration;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

