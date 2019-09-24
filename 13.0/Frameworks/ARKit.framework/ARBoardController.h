//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/ARStarBoardSceneManagerObserver-Protocol.h>

@class ARStarBoardViewController, NSString, SRHMEConfig, UIView, UIWindow, UIWindowScene;
@protocol ARBoardControllerDelegate;

@interface ARBoardController : NSObject <ARStarBoardSceneManagerObserver>
{
    unsigned long long _currentBoardScene;
    UIView *_springBoardView;
    UIWindowScene *_starBoardScene;
    UIWindow *_starBoardWindow;
    ARStarBoardViewController *_starBoardViewController;
    NSString *_statistics;
    SRHMEConfig *_currentConfig;
    id <ARBoardControllerDelegate> _delegate;
}

@property(nonatomic) unsigned long long currentBoardScene; // @synthesize currentBoardScene=_currentBoardScene;
@property(nonatomic) __weak id <ARBoardControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SRHMEConfig *currentConfig; // @synthesize currentConfig=_currentConfig;
@property(retain, nonatomic) NSString *statistics; // @synthesize statistics=_statistics;
- (void).cxx_destruct;
- (void)_updateMetalLayer:(id)arg1 descriptor:(id)arg2;
- (void)_handleStarBoardSceneConnect:(id)arg1;
- (void)_evaluateCompositorDestination:(id)arg1;
- (void)_switchToSpringBoard;
- (void)_switchToStarBoard;
- (void)starBoardSceneDisconnected:(id)arg1;
- (void)starBoardSceneConnected:(id)arg1;
- (void)updateLayerBounds;
- (void)updateMetalLayer:(id)arg1;
@property(nonatomic) __weak UIView *view;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
