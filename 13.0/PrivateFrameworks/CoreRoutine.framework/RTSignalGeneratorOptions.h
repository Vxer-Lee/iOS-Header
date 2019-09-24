//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreRoutine/NSCopying-Protocol.h>
#import <CoreRoutine/NSSecureCoding-Protocol.h>

@class NSArray, RTLocation;

@interface RTSignalGeneratorOptions : NSObject <NSCopying, NSSecureCoding>
{
    RTLocation *_startLocation;
    RTLocation *_endLocation;
    NSArray *_expectedVisits;
}

+ (_Bool)supportsSecureCoding;
+ (id)getVisitsFromVisitsDescriptionData:(id)arg1;
+ (id)visitsDescriptionDataAtPath:(id)arg1;
@property(readonly) NSArray *expectedVisits; // @synthesize expectedVisits=_expectedVisits;
@property(readonly) RTLocation *endLocation; // @synthesize endLocation=_endLocation;
@property(readonly) RTLocation *startLocation; // @synthesize startLocation=_startLocation;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithStartLocation:(id)arg1 endLocation:(id)arg2 expectedVisits:(id)arg3;
- (id)initWithVisitsDescriptionPListPath:(id)arg1;
- (id)init;

@end
