//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IconServices/ISCompositorRecipe-Protocol.h>

__attribute__((visibility("hidden")))
@interface ISiOSAppRecipe : NSObject <ISCompositorRecipe>
{
    _Bool _shouldDrawBorder;
    unsigned long long _options;
}

@property _Bool shouldDrawBorder; // @synthesize shouldDrawBorder=_shouldDrawBorder;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property _Bool shouldApplyMask;
- (id)layerTreeForSize:(struct CGSize)arg1 scale:(double)arg2;

@end
