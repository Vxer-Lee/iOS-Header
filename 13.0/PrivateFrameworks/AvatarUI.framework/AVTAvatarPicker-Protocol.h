//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AvatarUI/NSObject-Protocol.h>

@class NSString;
@protocol AVTAvatarPickerDelegate;

@protocol AVTAvatarPicker <NSObject>
@property(nonatomic) __weak id <AVTAvatarPickerDelegate> avatarPickerDelegate;
- (void)selectAvatarRecordWithIdentifier:(NSString *)arg1 animated:(_Bool)arg2;
@end
