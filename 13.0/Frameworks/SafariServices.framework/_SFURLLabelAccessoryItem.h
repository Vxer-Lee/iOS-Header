//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImageView, UIView, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _SFURLLabelAccessoryItem : NSObject
{
    _Bool _centerAligned;
    UIImageView *_view;
    UIImageView *_squishedView;
    UIVisualEffectView *_effectView;
    UIVisualEffectView *_squishedEffectView;
    double _spacing;
    struct CGSize _size;
}

@property(nonatomic) _Bool centerAligned; // @synthesize centerAligned=_centerAligned;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
@property(retain, nonatomic) UIVisualEffectView *squishedEffectView; // @synthesize squishedEffectView=_squishedEffectView;
@property(retain, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(retain, nonatomic) UIImageView *squishedView; // @synthesize squishedView=_squishedView;
@property(retain, nonatomic) UIImageView *view; // @synthesize view=_view;
- (void).cxx_destruct;
@property(nonatomic) struct CGRect frame;
@property(readonly, nonatomic) UIView *viewForLayout;

@end
