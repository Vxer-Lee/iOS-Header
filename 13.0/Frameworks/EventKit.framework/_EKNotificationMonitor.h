//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EKEventStore, EKTimedEventStorePurger, NSArray, NSDate, NSMutableArray, NSTimer, PCPersistentTimer;
@protocol OS_dispatch_queue;

@interface _EKNotificationMonitor : NSObject
{
    CDUnknownBlockType _eventStoreGetter;
    _Bool _running;
    PCPersistentTimer *_timer;
    NSDate *_nextFireTime;
    NSTimer *_syncTimer;
    _Bool _pendingChanges;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_timerQueue;
    double _lastChangedTimestamp;
    _Bool _changedIDsValid;
    NSMutableArray *_changedIDs;
    int _ignoreSyncTimer;
    _Bool _initialCheck;
    _Bool _shouldInstallPersistentTimer;
    _Bool _useSyncIdleTimer;
    _Bool _registerForDarwinNotifications;
    _Bool _filteredByShowsNotificationsFlag;
    _Bool _computeChangedNotificationSet;
    _Bool _automaticallyFaultNotifications;
    NSArray *_notificationReferences;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    EKTimedEventStorePurger *_eventStorePurger;
    EKEventStore *_eventStore;
}

+ (id)requestedDarwinNotifications;
+ (id)logHandle;
@property(readonly, nonatomic) EKEventStore *eventStore; // @synthesize eventStore=_eventStore;
@property(readonly, nonatomic) EKTimedEventStorePurger *eventStorePurger; // @synthesize eventStorePurger=_eventStorePurger;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
- (void).cxx_destruct;
- (void)trackChangesInEventStore;
- (void)_syncDidEnd:(id)arg1;
- (void)_syncDidStart;
- (void)_syncTimerFired:(id)arg1;
- (void)_killSyncTimer:(id)arg1;
- (void)_resetSyncTimer;
- (id)_fetchEventNotificationReferencesFromEventStore:(id)arg1;
- (void)_timerFired;
- (void)_alertPrefChanged;
- (void)_notificationCountChangedExternally;
- (void)_databaseChanged;
- (void)_eventStoreChanged;
- (void)_eventStoreChangedNotification:(id)arg1;
- (void)handleDarwinNotification:(id)arg1;
- (void)_resetTimer;
- (void)_addRemovedOrAddedObjectIDsTo:(id)arg1 oldNotifications:(id)arg2 newNotifications:(id)arg3;
- (void)attemptReloadSynchronously:(_Bool)arg1;
- (void)attemptReload;
- (void)adjust;
@property(readonly, nonatomic) NSArray *notificationReferences; // @synthesize notificationReferences=_notificationReferences;
@property(readonly, nonatomic) unsigned long long notificationCount;
- (void)stop;
- (void)start;
- (void)killTimer;
- (id)_eventStore;
- (void)dealloc;
- (id)_initWithOptions:(long long)arg1 eventStore:(id)arg2 eventStoreGetter:(CDUnknownBlockType)arg3;
- (id)initWithOptions:(long long)arg1 eventStoreGetter:(CDUnknownBlockType)arg2;
- (id)initWithOptions:(long long)arg1 eventStore:(id)arg2;
- (id)initWithOptions:(long long)arg1;
- (id)init;

@end
