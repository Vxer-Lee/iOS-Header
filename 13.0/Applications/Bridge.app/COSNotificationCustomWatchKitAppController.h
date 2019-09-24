//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "COSNotificationsOnlyAppListController.h"

@class NSMutableArray, NSString;

@interface COSNotificationCustomWatchKitAppController : COSNotificationsOnlyAppListController
{
    NSMutableArray *_specifiers;
    NSString *_companionAppBundleID;
}

@property(copy, nonatomic) NSString *companionAppBundleID; // @synthesize companionAppBundleID=_companionAppBundleID;
- (void).cxx_destruct;
- (id)criticalAlertEnabled:(id)arg1;
- (void)setCriticalAlertEnabled:(id)arg1 forSpecifier:(id)arg2;
- (id)soundValue:(id)arg1;
- (void)setSoundValue:(id)arg1 forSpecifier:(id)arg2;
- (id)notificationApplicationSpecifiers;
- (_Bool)suppressSendToNotificationCenterOption;
- (_Bool)suppressMirrorOption;
- (void)setSpecifier:(id)arg1;

@end
