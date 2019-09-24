//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class ICViewControllerManager, UINavigationController;

@interface UIViewController (IC)
+ (void)ic_enableUIViewAnimations:(_Bool)arg1 forBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) UINavigationController *ic_rootNavigationController;
- (id)ic_embedInNavigationControllerForModalPresentation;
- (id)ic_topViewController;
- (void)ic_showSingleButtonAlertWithTitle:(id)arg1 message:(id)arg2;
- (id)ic_safeAreaLayoutGuide;
- (double)ic_safeAreaDistanceFromBottom;
- (double)ic_safeAreaDistanceFromTop;
- (_Bool)ic_isViewVisible;
- (void)ic_showViewController:(id)arg1 animated:(_Bool)arg2 sender:(id)arg3;
@property(readonly, nonatomic) _Bool ic_isRTL;
@property(readonly, nonatomic) ICViewControllerManager *ic_viewControllerManager;
@end
