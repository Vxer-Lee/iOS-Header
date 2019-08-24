//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoDurationObserving-Protocol.h>

@class NSString, SVKeyValueObserver;
@protocol SVPlayerItemObserving;

@interface SVVideoDurationObserver : NSObject <SVVideoDurationObserving>
{
    CDUnknownBlockType changeBlock;
    id <SVPlayerItemObserving> _playerItemObserver;
    SVKeyValueObserver *_playerItemDurationObserver;
    double _duration;
}

@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) SVKeyValueObserver *playerItemDurationObserver; // @synthesize playerItemDurationObserver=_playerItemDurationObserver;
@property(readonly, nonatomic) id <SVPlayerItemObserving> playerItemObserver; // @synthesize playerItemObserver=_playerItemObserver;
@property(copy, nonatomic, setter=onChange:) CDUnknownBlockType changeBlock; // @synthesize changeBlock;
- (void).cxx_destruct;
- (void)updateDuration:(CDStruct_198678f7)arg1;
- (id)initWithPlayerItemObserver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
