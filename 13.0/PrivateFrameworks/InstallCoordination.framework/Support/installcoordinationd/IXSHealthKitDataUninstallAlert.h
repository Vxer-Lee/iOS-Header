//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IXSUninstallAlert.h"

@interface IXSHealthKitDataUninstallAlert : IXSUninstallAlert
{
}

+ (void)deleteHealthKitDataForAppWithBundleID:(id)arg1;
+ (void)healthKitDataPresentForAppWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)cancelButtonLabel;
- (id)deleteButtonLabel;
- (id)message;
- (id)title;
- (id)initWithAppProxy:(id)arg1;

@end
