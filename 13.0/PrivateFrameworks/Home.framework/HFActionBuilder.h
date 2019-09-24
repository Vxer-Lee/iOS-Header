//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemBuilder.h>

@class HMAction;

@interface HFActionBuilder : HFItemBuilder
{
}

+ (id)actionBuilderForAction:(id)arg1 inHome:(id)arg2;
+ (Class)homeKitRepresentationClass;
- (_Bool)hasSameTargetAsAction:(id)arg1;
- (_Bool)isEquivalentToAction:(id)arg1;
@property(readonly, nonatomic, getter=isAffectedByEndEvents) _Bool affectedByEndEvents;
- (id)createNewAction;
- (id)getOrCreateAction;
- (id)copyForCreatingNewAction;
@property(readonly, nonatomic) _Bool requiresDeviceUnlock;
- (_Bool)updateWithActionBuilder:(id)arg1;
- (void)setAction:(id)arg1;
@property(readonly, nonatomic) HMAction *action;

@end
