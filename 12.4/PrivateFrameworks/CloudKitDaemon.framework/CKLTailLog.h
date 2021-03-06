//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LoggingSupport/OSActivityStream.h>

#import <CloudKitDaemon/OSActivityStreamDelegate-Protocol.h>
#import <CloudKitDaemon/OSLogPersistenceDelegate-Protocol.h>

@class NSMutableArray, NSObject, NSString, OSLogPersistence;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKLTailLog : OSActivityStream <OSLogPersistenceDelegate, OSActivityStreamDelegate>
{
    _Bool _stillReadingFromArchive;
    _Bool _continueToReturnResults;
    OSLogPersistence *_logPersistence;
    OSActivityStream *_activityStream;
    NSMutableArray *_results;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool continueToReturnResults; // @synthesize continueToReturnResults=_continueToReturnResults;
@property(nonatomic) _Bool stillReadingFromArchive; // @synthesize stillReadingFromArchive=_stillReadingFromArchive;
@property(retain, nonatomic) NSMutableArray *results; // @synthesize results=_results;
@property(retain, nonatomic) OSActivityStream *activityStream; // @synthesize activityStream=_activityStream;
@property(retain, nonatomic) OSLogPersistence *logPersistence; // @synthesize logPersistence=_logPersistence;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)startFromStartDate:(id)arg1;
- (void)fetchFromStartDate:(id)arg1 toEndDate:(id)arg2;
- (void)persistenceDidFinishReadingForStartDate:(id)arg1 endDate:(id)arg2;
- (_Bool)persistence:(id)arg1 results:(id)arg2 error:(id)arg3;
- (void)streamDidStop:(id)arg1;
- (void)streamDidFail:(id)arg1 error:(id)arg2;
- (_Bool)activityStream:(id)arg1 results:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

