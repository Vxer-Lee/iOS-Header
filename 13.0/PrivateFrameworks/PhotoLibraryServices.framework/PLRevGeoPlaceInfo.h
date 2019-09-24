//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface PLRevGeoPlaceInfo : NSObject <NSSecureCoding>
{
    _Bool _hasArea;
    NSString *_placeName;
    double _minimumArea;
    double _maximumArea;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) double maximumArea; // @synthesize maximumArea=_maximumArea;
@property(readonly, nonatomic) double minimumArea; // @synthesize minimumArea=_minimumArea;
@property(readonly, nonatomic) _Bool hasArea; // @synthesize hasArea=_hasArea;
@property(readonly, copy, nonatomic) NSString *placeName; // @synthesize placeName=_placeName;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)addPlaceInfoArea:(double)arg1;
- (id)initWithPlaceName:(id)arg1;

@end
