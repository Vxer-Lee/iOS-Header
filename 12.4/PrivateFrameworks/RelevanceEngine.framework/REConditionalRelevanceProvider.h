//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RERelevanceProvider.h>

@class RERelevanceCondition;

@interface REConditionalRelevanceProvider : RERelevanceProvider
{
    RERelevanceCondition *_condition;
}

- (void).cxx_destruct;
- (float)_evaluateCondition;
@property(readonly, nonatomic) RERelevanceCondition *condition;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)_hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRelevanceCondition:(id)arg1;

@end
