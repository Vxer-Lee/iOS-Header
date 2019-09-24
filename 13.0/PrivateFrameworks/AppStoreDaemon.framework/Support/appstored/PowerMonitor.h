//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface PowerMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    int _adapterChangeToken;
    int _batterySaverToken;
    _Bool _batterySaverEnabled;
    _Bool _powerPlugggedIn;
}

+ (id)defaultMonitor;
- (void).cxx_destruct;
- (void)_updateBatterySaverState;
- (void)_updateAdapterState;
- (void)_registerForAdapterChange;
- (void)_postPowerStateDidChangeNotification;
@property(readonly, getter=isPowerPluggedIn) _Bool powerPlugggedIn; // @synthesize powerPlugggedIn=_powerPlugggedIn;
@property(readonly, getter=isBatterySaverEnabled) _Bool batterySaverEnabled; // @synthesize batterySaverEnabled=_batterySaverEnabled;
- (void)dealloc;
- (id)init;

@end
