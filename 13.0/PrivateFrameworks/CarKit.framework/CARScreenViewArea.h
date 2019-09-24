//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CARScreenViewArea : NSObject
{
    _Bool _displaysTransitionControl;
    struct CGRect _visibleFrame;
    struct CGRect _safeFrame;
}

@property(readonly, nonatomic) _Bool displaysTransitionControl; // @synthesize displaysTransitionControl=_displaysTransitionControl;
@property(readonly, nonatomic) struct CGRect safeFrame; // @synthesize safeFrame=_safeFrame;
@property(readonly, nonatomic) struct CGRect visibleFrame; // @synthesize visibleFrame=_visibleFrame;
- (_Bool)isEqualToViewArea:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithPropertySupplier:(CDUnknownBlockType)arg1 additionalInsets:(struct NSEdgeInsets)arg2;
- (id)initWithPropertySupplier:(CDUnknownBlockType)arg1;

@end
