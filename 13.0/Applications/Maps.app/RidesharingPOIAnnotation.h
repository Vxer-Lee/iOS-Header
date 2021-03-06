//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MKAnnotation-Protocol.h"
#import "MKCustomFeatureAnnotation-Protocol.h"

@class NSString, VKCustomFeature;

__attribute__((visibility("hidden")))
@interface RidesharingPOIAnnotation : NSObject <MKCustomFeatureAnnotation, MKAnnotation>
{
    VKCustomFeature *_feature;
    CDStruct_2c43369c _coordinate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool showsBalloonCallout;
@property(nonatomic) CDStruct_c3b9c2ee coordinate;
- (id)feature;
- (id)initWithMapItem:(id)arg1;

// Remaining properties
@property(nonatomic) double course;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end

