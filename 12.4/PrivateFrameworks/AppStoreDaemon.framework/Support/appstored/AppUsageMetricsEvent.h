//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSMetricsEvent.h>

@class NSArray, NSNumber, NSString;

@interface AppUsageMetricsEvent : AMSMetricsEvent
{
    NSNumber *_beta;
    unsigned char _appEventType;
    unsigned char _installType;
    NSString *_actorID;
    NSString *_appSessionReporterKey;
    NSString *_bundleID;
    NSString *_bundleVersion;
    NSArray *_clusters;
    NSString *_cohort;
    NSNumber *_evid;
    NSNumber *_itemID;
    NSString *_itemName;
    long long _locationAccuracy;
    NSString *_locationLatitude;
    NSString *_locationLongitude;
    NSString *_osBuild;
    NSString *_platform;
    NSString *_shortVersion;
    NSNumber *_storefront;
    long long _timeRangeEnd;
    long long _timeRangeStart;
    long long _usageTime;
    long long _usageCount;
}

@property(nonatomic) long long usageCount; // @synthesize usageCount=_usageCount;
@property(nonatomic) long long usageTime; // @synthesize usageTime=_usageTime;
@property(nonatomic) long long timeRangeStart; // @synthesize timeRangeStart=_timeRangeStart;
@property(nonatomic) long long timeRangeEnd; // @synthesize timeRangeEnd=_timeRangeEnd;
@property(copy, nonatomic) NSNumber *storefront; // @synthesize storefront=_storefront;
@property(copy, nonatomic) NSString *shortVersion; // @synthesize shortVersion=_shortVersion;
@property(copy, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(copy, nonatomic) NSString *osBuild; // @synthesize osBuild=_osBuild;
@property(copy, nonatomic) NSString *locationLongitude; // @synthesize locationLongitude=_locationLongitude;
@property(copy, nonatomic) NSString *locationLatitude; // @synthesize locationLatitude=_locationLatitude;
@property(nonatomic) long long locationAccuracy; // @synthesize locationAccuracy=_locationAccuracy;
@property(copy, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(copy, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(nonatomic) unsigned char installType; // @synthesize installType=_installType;
@property(copy, nonatomic) NSNumber *evid; // @synthesize evid=_evid;
@property(copy, nonatomic) NSString *cohort; // @synthesize cohort=_cohort;
@property(copy, nonatomic) NSArray *clusters; // @synthesize clusters=_clusters;
@property(copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) NSString *appSessionReporterKey; // @synthesize appSessionReporterKey=_appSessionReporterKey;
@property(nonatomic) unsigned char appEventType; // @synthesize appEventType=_appEventType;
@property(copy, nonatomic) NSString *actorID; // @synthesize actorID=_actorID;
- (void).cxx_destruct;
- (id)_typeForMetricsType:(unsigned char)arg1;
- (id)_eventForType:(unsigned char)arg1;
- (_Bool)requiresDiagnosticSendingPermission;
- (id)metricsDictionary;
- (void)setBeta:(_Bool)arg1;
- (_Bool)isBeta;
- (id)externalMapping;

@end

