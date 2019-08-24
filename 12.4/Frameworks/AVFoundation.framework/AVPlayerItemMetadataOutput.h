//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVPlayerItemOutput.h>

@class AVPlayerItemMetadataOutputInternal, NSDictionary, NSObject;
@protocol AVPlayerItemMetadataOutputPushDelegate, OS_dispatch_queue;

@interface AVPlayerItemMetadataOutput : AVPlayerItemOutput
{
    AVPlayerItemMetadataOutputInternal *_metadataOutputInternal;
}

+ (void)initialize;
@property(nonatomic) double advanceIntervalForDelegateInvocation;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property(readonly, nonatomic) __weak id <AVPlayerItemMetadataOutputPushDelegate> delegate;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)_detachFromPlayerItem;
- (_Bool)_attachToPlayerItem:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (void)_collectUncollectables;
- (id)initWithIdentifiers:(id)arg1;
- (id)init;
- (void)_pushTimedMetadataGroups:(id)arg1 fromPlayerItemTrack:(id)arg2;
@property(readonly, nonatomic, getter=_figMetadataOutputsDictionaryOptions) NSDictionary *figMetadataOutputsDictionaryOptions;
- (void)_signalFlush;

@end
