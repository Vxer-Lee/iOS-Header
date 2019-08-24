//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PSYInitialSyncStateObserverDelegate-Protocol.h"
#import "PSYSyncSessionObserverDelegate-Protocol.h"

@class NSArray, NSPointerArray, NSString, PSYInitialSyncStateObserver, PSYSyncSessionObserver;

@interface COSGlobalAlertPresentationCoordinator : NSObject <PSYInitialSyncStateObserverDelegate, PSYSyncSessionObserverDelegate>
{
    _Bool _pairedSyncSaysSyncNeeded;
    _Bool _nanoRegistrySaysStartSync;
    _Bool _nanoRegistrySaysDeviceDisconnected;
    _Bool _pairedSyncSaysSyncActive;
    _Bool _isPresented;
    _Bool _isPresenting;
    _Bool _appDelegateNotificationsRegistered;
    _Bool _nanoRegistryNotificationsRegistered;
    _Bool _pendingSyncProgressForce;
    int _syncAdviceNotifyToken;
    double _pairedSyncProgress;
    unsigned long long _nanoRegistryStatus;
    double _lastDisplayedSyncProgress;
    long long _activeGlobalAlerts;
    PSYInitialSyncStateObserver *_pairedSyncISSObserver;
    PSYSyncSessionObserver *_progressObserver;
    unsigned long long _alertType;
    NSPointerArray *_observers;
    NSArray *_alertTypeStrings;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool pendingSyncProgressForce; // @synthesize pendingSyncProgressForce=_pendingSyncProgressForce;
@property(nonatomic) _Bool nanoRegistryNotificationsRegistered; // @synthesize nanoRegistryNotificationsRegistered=_nanoRegistryNotificationsRegistered;
@property(nonatomic) _Bool appDelegateNotificationsRegistered; // @synthesize appDelegateNotificationsRegistered=_appDelegateNotificationsRegistered;
@property(retain, nonatomic) NSArray *alertTypeStrings; // @synthesize alertTypeStrings=_alertTypeStrings;
@property(retain, nonatomic) NSPointerArray *observers; // @synthesize observers=_observers;
@property(nonatomic) unsigned long long alertType; // @synthesize alertType=_alertType;
@property(nonatomic) _Bool isPresenting; // @synthesize isPresenting=_isPresenting;
@property(nonatomic) _Bool isPresented; // @synthesize isPresented=_isPresented;
@property(retain, nonatomic) PSYSyncSessionObserver *progressObserver; // @synthesize progressObserver=_progressObserver;
@property(nonatomic) int syncAdviceNotifyToken; // @synthesize syncAdviceNotifyToken=_syncAdviceNotifyToken;
@property(retain, nonatomic) PSYInitialSyncStateObserver *pairedSyncISSObserver; // @synthesize pairedSyncISSObserver=_pairedSyncISSObserver;
@property(nonatomic) long long activeGlobalAlerts; // @synthesize activeGlobalAlerts=_activeGlobalAlerts;
@property(nonatomic) double lastDisplayedSyncProgress; // @synthesize lastDisplayedSyncProgress=_lastDisplayedSyncProgress;
@property(nonatomic) unsigned long long nanoRegistryStatus; // @synthesize nanoRegistryStatus=_nanoRegistryStatus;
@property(nonatomic) _Bool pairedSyncSaysSyncActive; // @synthesize pairedSyncSaysSyncActive=_pairedSyncSaysSyncActive;
@property(nonatomic) double pairedSyncProgress; // @synthesize pairedSyncProgress=_pairedSyncProgress;
@property(nonatomic) _Bool nanoRegistrySaysDeviceDisconnected; // @synthesize nanoRegistrySaysDeviceDisconnected=_nanoRegistrySaysDeviceDisconnected;
@property(nonatomic) _Bool nanoRegistrySaysStartSync; // @synthesize nanoRegistrySaysStartSync=_nanoRegistrySaysStartSync;
@property(nonatomic) _Bool pairedSyncSaysSyncNeeded; // @synthesize pairedSyncSaysSyncNeeded=_pairedSyncSaysSyncNeeded;
- (void).cxx_destruct;
- (void)updateSyncProgress:(_Bool)arg1;
- (void)update;
- (long long)getHighestPriorityGlobalAlert;
- (id)stringForAlertType:(unsigned long long)arg1;
- (void)_enumerateAlertPresenterObservers:(CDUnknownBlockType)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)removeAlertPresenterObserver:(id)arg1;
- (void)addAlertPresenterObserver:(id)arg1;
- (void)updateAlerts;
- (void)_dismissModalAlert:(unsigned long long)arg1;
- (void)_presentModalAlert:(unsigned long long)arg1;
- (void)nanoRegistryStatusChanged:(id)arg1;
- (void)unregisterNanoRegistryNotifications;
- (void)registerNanoRegistryNotifications;
- (unsigned long long)readNotifyToken:(int)arg1;
- (int)registerNotifyTokenWithName:(id)arg1 withQueue:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (_Bool)isSyncAdvised;
- (void)unregisterPairedSyncNotifications;
- (void)syncSessionObserver:(id)arg1 didInvalidateSyncSession:(id)arg2;
- (void)syncSessionObserver:(id)arg1 receivedSyncSession:(id)arg2;
- (void)syncSessionObserver:(id)arg1 didReceiveUpdate:(id)arg2;
- (void)initialSyncStateObserver:(id)arg1 syncDidCompleteForPairingIdentifier:(id)arg2;
- (void)initialSyncStateObserver:(id)arg1 syncDidResetForPairingIdentifier:(id)arg2;
- (void)_initialSyncStateObserverClientCanRetryFailedRequests;
- (void)initialSyncStateObserverClientCanRetryFailedRequests:(id)arg1;
- (void)updateNanoRegistrySyncAdviceStatus;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)unregisterAppDelegateNotifications;
- (void)registerAppDelegateNotifications;
- (void)registerPairedSyncNotifications;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
