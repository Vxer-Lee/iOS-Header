//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCopying-Protocol.h>

@class NSArray;

@interface RERelevanceValue : NSObject <NSCopying>
{
    unsigned long long _hash;
    _Bool _isHistoric;
    NSArray *_values;
}

@property(readonly, nonatomic) _Bool isHistoric; // @synthesize isHistoric=_isHistoric;
@property(readonly, nonatomic) NSArray *values; // @synthesize values=_values;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithValues:(id)arg1 isHistoric:(_Bool)arg2;
- (id)initWithValues:(id)arg1;

@end
