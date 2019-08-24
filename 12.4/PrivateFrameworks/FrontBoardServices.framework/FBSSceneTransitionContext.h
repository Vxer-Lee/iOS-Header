//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>
#import <FrontBoardServices/BSXPCCoding-Protocol.h>
#import <FrontBoardServices/NSCopying-Protocol.h>
#import <FrontBoardServices/NSMutableCopying-Protocol.h>

@class BKSAnimationFenceHandle, BSAnimationSettings, BSMutableSettings, BSProcessHandle, FBSceneUpdateContext, NSSet, NSString;

@interface FBSSceneTransitionContext : NSObject <BSXPCCoding, BSDescriptionProviding, NSCopying, NSMutableCopying>
{
    BSAnimationSettings *_animationSettings;
    BKSAnimationFenceHandle *_animationFence;
    NSSet *_actions;
    BSProcessHandle *_originatingProcess;
    BSMutableSettings *_otherSettings;
    BSMutableSettings *_transientLocalClientSettings;
    FBSceneUpdateContext *_updateContext;
}

+ (id)transitionContext;
@property(retain, nonatomic) FBSceneUpdateContext *updateContext; // @synthesize updateContext=_updateContext;
@property(retain, nonatomic) BSProcessHandle *originatingProcess; // @synthesize originatingProcess=_originatingProcess;
@property(copy, nonatomic) NSSet *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) BKSAnimationFenceHandle *animationFence; // @synthesize animationFence=_animationFence;
@property(copy, nonatomic) BSAnimationSettings *animationSettings; // @synthesize animationSettings=_animationSettings;
- (void).cxx_destruct;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)transientLocalClientSettings;
- (id)otherSettings;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
