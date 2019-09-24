//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PersonalizationPortrait/PPPortrait.h>

@interface PPPortrait (Maintenance)
+ (id)runPortraitMusicDataCollectionWithTopicStore:(id)arg1 namedEntityStore:(id)arg2 collectIntents:(_Bool)arg3 error:(id *)arg4 shouldContinueBlock:(CDUnknownBlockType)arg5;
+ (void)_addMediaItem:(id)arg1 ofType:(int)arg2 withBundleId:(id)arg3 dateInterval:(id)arg4 to:(id)arg5;
+ (_Bool)_runPortraitMusicDataCollectionWithError:(id *)arg1 shouldContinueBlock:(CDUnknownBlockType)arg2;
+ (id)_quantizeTopics:(id)arg1;
+ (id)_quantizeAndFilterEntities:(id)arg1 withLimit:(unsigned int)arg2;
+ (_Bool)_logPerplexityWithError:(id *)arg1;
+ (_Bool)_logPerplexityForNamedEntitiesWithError:(id *)arg1;
+ (_Bool)_logPerplexityForTopicsWithError:(id *)arg1;
+ (_Bool)_logUniqueTopicsWithError:(id *)arg1;
+ (void)_registerAssetMetadataUpdate;
+ (void)_registerDailyMetricsLogging;
+ (void)_registerDataCollection;
+ (_Bool)_logDailyMetricsWithError:(id *)arg1 shouldContinueBlock:(CDUnknownBlockType)arg2;
+ (void)processPendingFeedbackWithShouldContinueBlock:(CDUnknownBlockType)arg1;
+ (void)_registerProcessPendingFeedback;
+ (void)_registerEntityBackfilling;
+ (void)_registerRTCSendLogs;
+ (void)_registerNowPlayingMPRequestResponseController;
+ (void)_registerPeriodicMetrics;
+ (_Bool)_checkDeferralAndAvoidDuetRateLimitWithBatchInterval:(double)arg1 lastSyncDate:(id)arg2 activity:(id)arg3;
+ (void)_registerKnowledgeStoreSync;
+ (void)_registerRemotelyDonatedRecordCleanup;
+ (void)_setDateOfLastTopicDKSyncViaCTSToDate:(id)arg1;
+ (id)_dateOfLastTopicDKSyncViaCTS;
+ (void)_setDateOfLastNamedEntityDKSyncViaCTSToDate:(id)arg1;
+ (id)_dateOfLastNamedEntityDKSyncViaCTS;
+ (void)_registerTTLBasedDonationCleanup;
+ (void)_deleteAllTopicsExceedingMaxAgeSeconds:(double)arg1;
+ (void)_deleteAllLocationsExceedingMaxAgeSeconds:(double)arg1;
+ (void)_deleteAllNamedEntitiesExceedingMaxAgeSeconds:(double)arg1;
+ (void)_deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 maxAgeSeconds:(double)arg3;
+ (void)_deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 maxAgeSeconds:(double)arg3;
+ (void)_registerContactsImport;
+ (void)_registerEventKitImport;
+ (void)_registerMapsImport;
+ (void)_registerCoreRoutineImport;
+ (void)registerMaintenanceTasksInternal;
@end
