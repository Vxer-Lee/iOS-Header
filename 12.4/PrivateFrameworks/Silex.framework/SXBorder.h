//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXJSONObject.h>

@class SXStrokeStyle;

@interface SXBorder : SXJSONObject
{
}

- (_Bool)isSolid;
- (_Bool)shouldBeDotted;
- (id)defaultStrokeStyle;

// Remaining properties
@property(readonly, nonatomic) SXStrokeStyle *all; // @dynamic all;
@property(readonly, nonatomic) SXStrokeStyle *bottom; // @dynamic bottom;
@property(readonly, nonatomic) SXStrokeStyle *left; // @dynamic left;
@property(readonly, nonatomic) SXStrokeStyle *right; // @dynamic right;
@property(readonly, nonatomic) SXStrokeStyle *top; // @dynamic top;

@end
