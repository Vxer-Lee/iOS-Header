//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SNUtils : NSObject
{
}

+ (int)modelOutputBlockSize:(id)arg1;
+ (int)modelInputBlockSize:(id)arg1;
+ (int)modelBlockSize:(id)arg1;
+ (int)modelSampleRate:(id)arg1 orDefaultRate:(int)arg2;
+ (id)vggishFrontEndProcessingModelDescription;
+ (id)vggishFeatureEmbeddingOutputShape;
+ (id)vggishFeatureEmbeddingInputShape;
+ (id)vggishFrontEndProcessingOutputShape;
+ (id)vggishFrontEndProcessingInputShape;
+ (int)numberOfElements:(id)arg1;
+ (void)copyAudioBufferList:(struct AudioBufferList *)arg1 to:(struct AudioBufferList *)arg2 frameCount:(unsigned int)arg3 bytesPerFrame:(unsigned int)arg4;
+ (void)silenceUnfilledFramesInBuffer:(id)arg1;
+ (id)splitBuffer:(id)arg1 intoBuffersWithFrameCount:(unsigned int)arg2;

@end
