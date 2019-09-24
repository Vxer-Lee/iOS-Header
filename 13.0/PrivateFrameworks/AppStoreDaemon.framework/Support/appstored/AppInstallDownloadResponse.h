//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AIMDownloadEvent, AssetRequest, CoordinatorPromiseDataConsumer, NSError;

@interface AppInstallDownloadResponse : NSObject
{
    AssetRequest *_assetRequest;
    long long _installID;
    NSError *_error;
    AIMDownloadEvent *_event;
    long long _result;
    CoordinatorPromiseDataConsumer *_dataConsumer;
}

+ (id)finishInstallID:(long long)arg1;
+ (id)failInstallID:(long long)arg1 withError:(id)arg2;
+ (id)continueInstallID:(long long)arg1 withDataConsumer:(id)arg2 assetRequest:(id)arg3 event:(id)arg4;
@property(readonly) CoordinatorPromiseDataConsumer *dataConsumer; // @synthesize dataConsumer=_dataConsumer;
@property(readonly) long long result; // @synthesize result=_result;
@property(readonly) AIMDownloadEvent *event; // @synthesize event=_event;
@property(readonly) NSError *error; // @synthesize error=_error;
@property(readonly) long long installID; // @synthesize installID=_installID;
@property(readonly) AssetRequest *assetRequest; // @synthesize assetRequest=_assetRequest;
- (void).cxx_destruct;
- (id)_initWithInstallID:(long long)arg1 result:(long long)arg2 dataConsumer:(id)arg3 assetRequest:(id)arg4 error:(id)arg5 event:(id)arg6;

@end
