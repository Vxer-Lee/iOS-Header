//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoEditSupport/BLPixelImageBuffer.h>

@class NSMutableData;

@interface BLCGPixelImageBuffer : BLPixelImageBuffer
{
    struct CGContext *_bitmapContext;
    unsigned long long _rowBytes;
    NSMutableData *_bitmapData;
}

@property(retain, nonatomic) NSMutableData *bitmapData; // @synthesize bitmapData=_bitmapData;
- (void).cxx_destruct;
- (void)readPixelsByAddressInBlock:(CDUnknownBlockType)arg1;
- (void)accessPixelsByAddressInBlock:(CDUnknownBlockType)arg1;
- (void)accessPixelsByContextInBlock:(CDUnknownBlockType)arg1;
- (void)renderCIImage:(id)arg1;
- (id)ciImage;
- (id)initWithSize:(struct CGSize)arg1 colorManagement:(int)arg2;

@end

