//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface FCPersonalizationURLDomainMapping : NSObject
{
    double _averageSafariVisitsPerDay;
    NSDictionary *_paths;
}

@property(retain, nonatomic) NSDictionary *paths; // @synthesize paths=_paths;
@property(nonatomic) double averageSafariVisitsPerDay; // @synthesize averageSafariVisitsPerDay=_averageSafariVisitsPerDay;
- (void).cxx_destruct;
- (id)tagsForPath:(id)arg1;
- (id)initWithPBURLMappingDomain:(id)arg1;

@end
