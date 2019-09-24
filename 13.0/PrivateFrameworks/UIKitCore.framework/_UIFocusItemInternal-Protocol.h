//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIFocusItem-Protocol.h>
#import <UIKitCore/_UIFocusEnvironmentInternal-Protocol.h>

@class UIView;

@protocol _UIFocusItemInternal <UIFocusItem, _UIFocusEnvironmentInternal>

@optional
@property(readonly, nonatomic, getter=_focusTouchSensitivityStyle) long long focusTouchSensitivityStyle;
- (_Bool)_drawsFocusRingWhenChildrenFocused;
- (UIView *)_viewToAddFocusLayer;
@end
