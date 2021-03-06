//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ProviderConfiguration : NSObject
{
    NSDictionary *_configuration;
    _Bool _providerOff;
    _Bool _socialEngineeringThreatTypeOff;
    _Bool _malwareThreatTypeOff;
    _Bool _unwantedSoftwareThreatTypeOff;
}

@property(readonly, nonatomic) _Bool unwantedSoftwareThreatTypeOff; // @synthesize unwantedSoftwareThreatTypeOff=_unwantedSoftwareThreatTypeOff;
@property(readonly, nonatomic) _Bool malwareThreatTypeOff; // @synthesize malwareThreatTypeOff=_malwareThreatTypeOff;
@property(readonly, nonatomic) _Bool socialEngineeringThreatTypeOff; // @synthesize socialEngineeringThreatTypeOff=_socialEngineeringThreatTypeOff;
@property(nonatomic) _Bool providerOff; // @synthesize providerOff=_providerOff;
- (void).cxx_destruct;
- (_Bool)isEqualToConfiguration:(id)arg1;
- (void)_parseConfiguration:(id)arg1;
- (id)_currentRegionCode;
- (void)_configureToBeOff;
- (void)_configureToUseDefaultValues;
- (id)initWithConfiguration:(id)arg1;
- (id)init;

@end

