//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLitePredicate.h"

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface SQLiteCompoundPredicate : SQLitePredicate <NSCopying>
{
    NSString *_combinationOperation;
    NSArray *_predicates;
}

+ (id)predicateWithProperty:(id)arg1 values:(id)arg2 comparisonType:(long long)arg3;
+ (id)predicateMatchingAnyPredicates:(id)arg1;
+ (id)predicateMatchingAllPredicates:(id)arg1;
@property(readonly, nonatomic) NSArray *predicates; // @synthesize predicates=_predicates;
- (void).cxx_destruct;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;
- (id)SQLForEntityClass:(Class)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)applyBinding:(id)arg1 atIndex:(inout int *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

