//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRootWindow.h>

@interface AXUIWindow : _UIRootWindow
{
    _Bool _isHandlingFullScreenPresentation;
}

+ (_Bool)_isSecure;
@property(nonatomic) _Bool isHandlingFullScreenPresentation; // @synthesize isHandlingFullScreenPresentation=_isHandlingFullScreenPresentation;
- (long long)_interfaceOrientationForSceneSafeAreaInsetsIncludingStatusBar:(_Bool)arg1;
- (id)description;
- (id)accessibilityLabel;
- (id)_accessibilityElementCommunityIdentifier;
- (_Bool)_accessibilityIsIsolatedWindow;
- (_Bool)_shouldAutorotateToInterfaceOrientation:(long long)arg1;

@end
