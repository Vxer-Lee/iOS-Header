//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPanGestureRecognizer.h>

@interface _AXTodayPanGestureRecognizer : UIPanGestureRecognizer
{
    _Bool _show;
    long long _overriddenState;
}

@property(nonatomic) _Bool show; // @synthesize show=_show;
@property(nonatomic) long long overriddenState; // @synthesize overriddenState=_overriddenState;
- (struct CGPoint)velocityInView:(id)arg1;
- (struct CGPoint)translationInView:(id)arg1;
- (long long)state;

@end
