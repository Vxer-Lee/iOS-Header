//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PGAOINameShortener : NSObject
{
}

+ (id)s_aoiReplacementsDictionary;
+ (_Bool)isCountryWithAOISubstitutions:(id)arg1;
+ (void)_enumerateWordCombinationsForName:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (id)_shortenedAOIForName:(id)arg1;
+ (id)shortenedAOIForAOINode:(id)arg1;

@end
