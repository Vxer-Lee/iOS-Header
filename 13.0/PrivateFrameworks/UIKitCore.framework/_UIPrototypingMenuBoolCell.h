//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIPrototypingMenuCell.h>

@class UISwitch;

__attribute__((visibility("hidden")))
@interface _UIPrototypingMenuBoolCell : _UIPrototypingMenuCell
{
    UISwitch *_valueSwitch;
}

+ (long long)_layoutAxis;
@property(retain, nonatomic) UISwitch *valueSwitch; // @synthesize valueSwitch=_valueSwitch;
- (void).cxx_destruct;
- (void)_switchDidChangeValue:(id)arg1;
- (void)_prototypingSettingDidChange;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
