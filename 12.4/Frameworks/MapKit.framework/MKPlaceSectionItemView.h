//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKViewWithHairline.h>

@interface MKPlaceSectionItemView : MKViewWithHairline
{
    _Bool _fullWidthHairline;
}

@property(nonatomic, getter=isHairlineFullWidth) _Bool fullWidthHairline; // @synthesize fullWidthHairline=_fullWidthHairline;
- (void)didMoveToWindow;
- (void)_updateHairlineInsets;
- (void)layoutMarginsDidChange;
- (void)infoCardThemeChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
