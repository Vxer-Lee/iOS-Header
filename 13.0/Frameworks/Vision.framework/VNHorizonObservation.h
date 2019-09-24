//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNObservation.h>

@interface VNHorizonObservation : VNObservation
{
    struct CGAffineTransform _transform;
    double _angle;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) double angle; // @synthesize angle=_angle;
@property(nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
