//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SpringBoard/_UIScrollToTopView-Protocol.h>

@class SBSceneHandle;
@protocol SBScrollToTopSceneProxyViewDelegate;

@interface SBScrollToTopSceneProxyView : UIView <_UIScrollToTopView>
{
    SBSceneHandle *_sceneHandle;
    id <SBScrollToTopSceneProxyViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SBScrollToTopSceneProxyViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SBSceneHandle *sceneHandle; // @synthesize sceneHandle=_sceneHandle;
- (void).cxx_destruct;
- (void)_scrollToTopFromTouchAtScreenLocation:(struct CGPoint)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (_Bool)isScrollEnabled;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;

@end
