//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AppDefaultsManager : NSObject
{
}

+ (void)_setNullableValue:(void *)arg1 forKey:(struct __CFString *)arg2;
+ (id)_copyNumberForKey:(struct __CFString *)arg1 applicationId:(struct __CFString *)arg2;
+ (_Bool)_boolForKey:(struct __CFString *)arg1 applicationId:(struct __CFString *)arg2 ifMissing:(_Bool)arg3;
+ (_Bool)useModernFreeSpaceCheck;
+ (_Bool)useLaunchCountsForAppUsage;
+ (_Bool)useAppInstallQueue;
+ (id)updateMigratorConfiguraton;
+ (id)transporterConfiguration;
+ (_Bool)thermalEnabled;
+ (id)testFlightVisualFeedbackOverrides;
+ (void)setUpdateMigratorConfiguration:(id)arg1;
+ (void)setTransporterConfiguration:(id)arg1;
+ (void)setLastOSBuildVersion:(id)arg1;
+ (void)setInvalidBuildToolVersions:(id)arg1;
+ (void)setClaimHistory:(id)arg1;
+ (void)setBulletins:(id)arg1 forKey:(struct __CFString *)arg2;
+ (void)recordOSMigrationDate;
+ (void)recordLastJobCleanupDate;
+ (void)recordLastGarbageCollectDownloads;
+ (void)recordJobApprovalDate;
+ (id)maxConcurrentThermalLimitedJobCount;
+ (id)maxConcurrentJobCount;
+ (id)lastOSBuildVersion;
+ (id)lastOSMigrationDate;
+ (id)lastJobCleanupDate;
+ (id)lastGarbageCollectionDate;
+ (id)jobApprovalDate;
+ (id)invalidBuildToolVersions;
+ (_Bool)externalManifestSkipHTTPSCheck;
+ (void)enableDeamonCommsSemaphore;
+ (_Bool)disablePowerOnStartup;
+ (_Bool)deamonCommsSemaphoreSet;
+ (void)clearJobApprovalDate;
+ (void)clearDaemonCommsSemaphore;
+ (void)clearUpdateMigrations;
+ (id)claimHistory;
+ (id)cellularSizeLimitOverride;
+ (id)bulletinForKey:(struct __CFString *)arg1;
+ (_Bool)batterySaverEnabledOnStartup;
+ (_Bool)automationRunning;
+ (_Bool)autoDownloadsEnabled;
+ (_Bool)allowDownloadOnCellular;
+ (id)forceDrmMode;
+ (_Bool)useFollowUpsForRestoreFailures;
+ (_Bool)shouldPerformAutomaticUpdates;
+ (void)setShouldPerformAutomaticUpdates:(_Bool)arg1;
+ (void)setPreviouslyInstalledProvisionedApps:(id)arg1;
+ (void)setLastUpdateCheckDate:(id)arg1;
+ (void)setLastAutoUpdatePerformDate:(id)arg1;
+ (void)setLastAutoUpdateCompletionDate:(id)arg1;
+ (void)recordLastUpdateCleanupDate;
+ (id)previouslyInstalledProvisionedApps;
+ (id)lastAutoUpdateCompletionDate;
+ (id)lastUpdateCheckDate;
+ (id)lastUpdateCleanupDate;
+ (void)setManageSubsOnDeleteBlacklist:(id)arg1;
+ (id)manageSubsOnDeleteBlacklist;
+ (_Bool)shouldSuppressTermsAndConditionsDialogs;
+ (void)setShouldSuppressTermsAndConditionsDialogs:(_Bool)arg1;
+ (void)setRestoreItemValue:(id)arg1 forKey:(struct __CFString *)arg2;
+ (void)setRestoreItemKinds:(id)arg1;
+ (void)setRestoreSoftFailureRetryDate:(id)arg1;
+ (void)setPerformedPostRestoreSoftwareUpdate:(_Bool)arg1;
+ (void)setFollowUpAccounts:(id)arg1;
+ (void)setAttemptedPreflightAccountIDs:(id)arg1;
+ (id)restoreSoftFailureRetryDate;
+ (id)restoreItemsForKey:(struct __CFString *)arg1;
+ (id)restoreItemKinds;
+ (_Bool)performedPostRestoreSoftwareUpdate;
+ (id)followUpAccounts;
+ (void)clearShouldSuppressTermsAndConditionsDialogs;
+ (void)clearRestoreDefaults;
+ (id)attemptedPreflightAccountIDs;
+ (id)powerPluggedInOverride;
+ (void)setOcelotSubscriptionState:(id)arg1;
+ (void)setOcelotPayoutDeviceID:(id)arg1;
+ (void)setOcelotPayoutResetDate:(id)arg1;
+ (void)setOcelotDeviceIDCreationDate:(id)arg1;
+ (void)setOcelotDeviceID:(id)arg1;
+ (void)setOcelotDeviceGUID:(id)arg1;
+ (void)setOcelotApps:(id)arg1;
+ (void)setOcelotAppAnalyticsClientID:(id)arg1;
+ (void)recordOcelotPayoutIntervalStartDate;
+ (void)recordOcelotIntervalStartDate;
+ (id)ocelotSubscriptionState;
+ (id)ocelotPayoutIntervalStartDate;
+ (id)ocelotPayoutResetDate;
+ (id)ocelotIntervalStartDate;
+ (id)ocelotPayoutDeviceID;
+ (id)ocelotDeviceIDCreationDate;
+ (id)ocelotDeviceID;
+ (id)ocelotDeviceGUID;
+ (id)ocelotDefaultApp;
+ (id)ocelotAppAnalyticsClientID;
+ (id)ocelotApps;
+ (void)recordOffloadingGracePeriodStartDateIfUnset;
+ (id)offloadingGracePeriodStartDate;
+ (_Bool)offloadingAppsEnabled;
+ (id)appPurgePluginBlacklist;
+ (id)appPurgeRecentInstallCutoffDate;
+ (id)appPurgeCutoffDate;
+ (id)appPurgeBlacklist;
+ (_Bool)emulateRoamingNetwork;
+ (_Bool)emulateConstrainedNetwork;
+ (_Bool)emulateCellularNetwork;
+ (void)setBadgeCount:(unsigned long long)arg1;
+ (_Bool)marketingDemoMode;
+ (unsigned long long)badgeCount;
+ (void)setAppUsageResetActorIDTargetDate:(id)arg1;
+ (void)setAppUsageNextPostTargetDate:(id)arg1;
+ (void)setAppUsageFlushDnuTargetDate:(id)arg1;
+ (void)setAppUsageEnableMetricsForActorIDSession:(_Bool)arg1;
+ (void)setAppUsageDBMigrated;
+ (void)setAppClusterMappingRefreshTargetDate:(id)arg1;
+ (void)setAppUsageActorID:(id)arg1;
+ (void)recordAppUsageLaunchesIntervalStartDate;
+ (void)recordAppUsageIntervalStartDate;
+ (void)clearAppUsageLaunchesIntervalStartDate;
+ (void)clearAppUsageIntervalStartDate;
+ (void)clearAppUsageRecordMetricsForActorIDSession;
+ (_Bool)appUsageUseTestTopic;
+ (id)appUsageTaskGracePeriodOverride;
+ (id)appUsageResetActorIDTargetDate;
+ (id)appUsageResetActorIDOverride;
+ (id)appUsagePostMetricsSamplingPercentageOverride;
+ (id)appUsageNextPostTargetDate;
+ (id)appUsageLaunchesIntervalStartDate;
+ (id)appUsageIntervalStartDate;
+ (id)appUsageFlushDnuTargetDate;
+ (id)appUsageFlushDnuIntervalOverride;
+ (_Bool)appUsageEnableMetricsForActorIDSession;
+ (_Bool)appUsageDBMigrated;
+ (id)appUsageDailyPostCountOverride;
+ (_Bool)appTasteProfileEnabled;
+ (id)appClusterMappingRefreshTargetDate;
+ (id)appClusterMappingRefreshIntervalOverride;
+ (id)appUsageActorID;
+ (void)setCrossfireNextPostTargetDate:(id)arg1;
+ (void)recordCrossfireIntervalStartDate;
+ (id)crossfirePostMetricsSamplingPercentageOverride;
+ (id)crossfirePostIntervalSecondsOverride;
+ (id)crossfireNextPostTargetDate;
+ (id)crossfireIntervalStartDate;
+ (void)recordMigratedAppUsageDB;
+ (void)setNextPostTargetDate:(id)arg1 forActivity:(id)arg2;
+ (id)postIntervalSecondsOverrideForActivity:(id)arg1;
+ (id)nextPostDateForActivity:(id)arg1;

@end
