//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoverSheet/NSObject-Protocol.h>

@class NSString, SBSLockScreenContentAction, UIView, UIViewController;
@protocol CSAdjunctItemHosting;

@protocol CSAdjunctListItemProviding <NSObject>
@property(retain, nonatomic) UIViewController<CSAdjunctItemHosting> *contentHost;
@property(retain, nonatomic) UIView *platterView;
@property(readonly, nonatomic) SBSLockScreenContentAction *action;
@property(readonly, nonatomic) NSString *identifier;
@end
