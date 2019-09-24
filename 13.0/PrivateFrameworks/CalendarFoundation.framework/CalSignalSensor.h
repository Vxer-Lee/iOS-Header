//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

@interface CalSignalSensor : NSObject
{
    NSObject<OS_dispatch_source> *_signalSource;
    int _signal;
    CDUnknownBlockType _fireBlock;
}

@property(copy, nonatomic) CDUnknownBlockType fireBlock; // @synthesize fireBlock=_fireBlock;
@property(nonatomic) int signal; // @synthesize signal=_signal;
- (void).cxx_destruct;
- (void)_shutDownSource;
- (void)stopSensor;
- (void)startSensor;
- (id)description;
- (void)dealloc;
- (id)initWithSignal:(int)arg1;

@end
