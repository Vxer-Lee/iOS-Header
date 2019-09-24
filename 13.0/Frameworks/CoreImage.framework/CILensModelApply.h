//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage;

__attribute__((visibility("hidden")))
@interface CILensModelApply : CIFilter
{
    CIImage *inputImage;
    CIImage *inputLensModelParams;
}

@property(retain, nonatomic) CIImage *inputLensModelParams; // @synthesize inputLensModelParams;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)kernel;

@end
