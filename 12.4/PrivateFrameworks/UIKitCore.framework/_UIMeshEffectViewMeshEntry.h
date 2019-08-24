//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIVisualEffectViewEntry.h>

@class CAMeshTransform;

__attribute__((visibility("hidden")))
@interface _UIMeshEffectViewMeshEntry : _UIVisualEffectViewEntry
{
    CAMeshTransform *_requestedMesh;
    CAMeshTransform *_identityMesh;
    long long _meshIdentifier;
}

@property(nonatomic) long long meshIdentifier; // @synthesize meshIdentifier=_meshIdentifier;
@property(retain, nonatomic) CAMeshTransform *identityMesh; // @synthesize identityMesh=_identityMesh;
@property(retain, nonatomic) CAMeshTransform *requestedMesh; // @synthesize requestedMesh=_requestedMesh;
- (void).cxx_destruct;
- (_Bool)canTransitionToEffect:(id)arg1;
- (void)removeEffectFromView:(id)arg1;
- (void)applyIdentityEffectToView:(id)arg1;
- (void)applyRequestedEffectToView:(id)arg1;
- (_Bool)shouldAnimateProperty:(id)arg1;

@end
