//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/__CAMMotionControllerAccessibility_super.h>

@interface CAMMotionControllerAccessibility : __CAMMotionControllerAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)_axDoMotionUpdate:(id)arg1;
- (void)axStopInternalMotionManager;
- (void)axStartInternalMotionManagerIfNecessary;
- (void)_axSetInternalMotionManager:(id)arg1;
- (id)_axInternalMotionManager;
- (void)_axSetInternalMotionManagerQueue:(id)arg1;
- (id)_axInternalMotionManagerQueue;
- (void)_handleLevelMotionUpdate:(id)arg1 error:(id)arg2;

@end
