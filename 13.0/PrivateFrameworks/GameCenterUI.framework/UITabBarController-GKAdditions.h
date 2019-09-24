//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITabBarController.h>

#import <GameCenterUI/GKContentRefresh-Protocol.h>
#import <GameCenterUI/GKURLHandling-Protocol.h>

@class NSString;

@interface UITabBarController (GKAdditions) <GKContentRefresh, GKURLHandling>
- (_Bool)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)_gkRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)_gkHandleURLPathComponents:(id)arg1 query:(id)arg2;
- (void)_gkForceNextContentUpdate;
- (void)_gkUpdateContentsWithCompletionHandlerAndError:(CDUnknownBlockType)arg1;
- (void)_gkResetContents;
- (void)_gkSetContentsNeedUpdateWithHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
