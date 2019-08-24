//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "DirectionsManagerObserver-Protocol.h"
#import "VehicleConnectionMonitorDelegate-Protocol.h"

@class NSString, NSTimer, VehicleConnectionMonitor;
@protocol RouteStartNavigationTimerDelegate;

__attribute__((visibility("hidden")))
@interface RouteStartNavigationTimerController : NSObject <VehicleConnectionMonitorDelegate, DirectionsManagerObserver>
{
    _Bool _allowToStart;
    _Bool _applicationInForeground;
    _Bool _carPlayConnected;
    _Bool _requestedFromWatch;
    id <RouteStartNavigationTimerDelegate> _delegate;
    double _timeoutDuration;
    VehicleConnectionMonitor *_vehicleConnectionMonitor;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool requestedFromWatch; // @synthesize requestedFromWatch=_requestedFromWatch;
@property(nonatomic, getter=isCarPlayConnected) _Bool carPlayConnected; // @synthesize carPlayConnected=_carPlayConnected;
@property(nonatomic, getter=isApplicationInForeground) _Bool applicationInForeground; // @synthesize applicationInForeground=_applicationInForeground;
@property(retain, nonatomic) VehicleConnectionMonitor *vehicleConnectionMonitor; // @synthesize vehicleConnectionMonitor=_vehicleConnectionMonitor;
@property(nonatomic) double timeoutDuration; // @synthesize timeoutDuration=_timeoutDuration;
@property(nonatomic) __weak id <RouteStartNavigationTimerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isAllowedToStart) _Bool allowToStart; // @synthesize allowToStart=_allowToStart;
- (void).cxx_destruct;
- (void)directionsManagerDidStartLoad:(id)arg1;
- (void)_timerDidEnd;
- (void)_updateRequestOriginFromDirectionsManager:(id)arg1;
- (void)_carPlayDidChangeConnected;
- (void)_applicationDidEnterBackground;
- (void)_applicationWillEnterForeground;
- (void)_invalidateTimerAndNotifyDelegate:(_Bool)arg1;
- (void)_invalidateTimer;
- (void)_startTimer;
- (void)_startOrInvalidateTimerIfNeeded;
@property(readonly, nonatomic) _Bool isTimerStarted;
- (void)vehicleConnectionMonitor:(id)arg1 didChangeToIsConnected:(_Bool)arg2;
- (void)restartTimerIfStarted;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
