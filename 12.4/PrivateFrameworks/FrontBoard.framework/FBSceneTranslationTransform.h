//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/FBSceneTransform.h>

@interface FBSceneTranslationTransform : FBSceneTransform
{
    struct CGPoint _translation;
}

@property(nonatomic) struct CGPoint translation; // @synthesize translation=_translation;
- (void)_updateTransform;
- (id)description;
- (id)initWithTranslation:(struct CGPoint)arg1;

@end

