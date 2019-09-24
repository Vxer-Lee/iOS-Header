//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UserLocationView.h"

#import "_MKBalloonCalloutViewConfiguring-Protocol.h"

@class NSString, UIColor, UIImage, UIView;

__attribute__((visibility("hidden")))
@interface MapsUserLocationView : UserLocationView <_MKBalloonCalloutViewConfiguring>
{
    _Bool _isOnAnotherFloorInVenue;
    UIImage *_balloonImage;
    UIColor *_balloonTintColor;
}

+ (Class)calloutViewClass;
@property(nonatomic, setter=_setIsOnAnotherFloorInVenue:) _Bool isOnAnotherFloorInVenue; // @synthesize isOnAnotherFloorInVenue=_isOnAnotherFloorInVenue;
@property(retain, nonatomic, setter=_setBalloonTintColor:) UIColor *balloonTintColor; // @synthesize balloonTintColor=_balloonTintColor;
@property(retain, nonatomic, setter=_setBalloonImage:) UIImage *balloonImage; // @synthesize balloonImage=_balloonImage;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=_balloonInnerStrokeColor) UIColor *balloonInnerStrokeColor;
@property(readonly, nonatomic, getter=_balloonStrokeColor) UIColor *balloonStrokeColor;
- (id)_balloonTintColor;
- (id)_balloonImage;
@property(readonly, nonatomic, getter=_balloonCalloutStyle) long long balloonCalloutStyle;
- (struct CGPoint)calloutOffset;
- (_Bool)updateCalloutViewIfNeededAnimated:(_Bool)arg1;

// Remaining properties
@property(readonly, nonatomic, getter=_balloonContentView) UIView *balloonContentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
