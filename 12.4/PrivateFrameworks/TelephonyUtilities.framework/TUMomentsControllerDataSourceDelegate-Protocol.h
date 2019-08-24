//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class TUMomentDescriptor, TUMomentsCapabilities;
@protocol TUMomentsControllerDataSource;

@protocol TUMomentsControllerDataSourceDelegate <NSObject>
- (void)serverDiedForDataSource:(id <TUMomentsControllerDataSource>)arg1;
- (void)dataSource:(id <TUMomentsControllerDataSource>)arg1 didReceiveLocallyRequestedMomentDescriptor:(TUMomentDescriptor *)arg2;
- (void)willCaptureRemoteRequestForDataSource:(id <TUMomentsControllerDataSource>)arg1;
- (void)dataSource:(id <TUMomentsControllerDataSource>)arg1 didUpdateCapabilities:(TUMomentsCapabilities *)arg2 forVideoStreamToken:(long long)arg3;
@end
