//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MapsAppTest, NSDictionary, NSString, VKMapView;
@protocol MapsAppTesting;

@protocol MapsApplicationDelegateTestingCoordination <NSObject>
+ (void)setCurrentTest:(MapsAppTest *)arg1;
+ (MapsAppTest *)currentTest;
+ (_Bool)application:(id <MapsAppTesting>)arg1 testName:(NSString *)arg2 options:(NSDictionary *)arg3 shouldLoadSampleProactiveData:(_Bool)arg4 shouldRaiseExceptionIfNeeded:(_Bool)arg5 runTest:(MapsAppTest * (^)(NSString *, id <MapsAppTesting>, NSDictionary *))arg6;
+ (void)doPostLauchTestSetupWithMapView:(VKMapView *)arg1 mapsAppTesting:(id <MapsAppTesting>)arg2;
@end
