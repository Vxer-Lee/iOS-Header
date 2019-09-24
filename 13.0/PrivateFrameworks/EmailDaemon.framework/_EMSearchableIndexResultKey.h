//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexSet;
@protocol EDSearchableCriterion;

__attribute__((visibility("hidden")))
@interface _EMSearchableIndexResultKey : NSObject
{
    id <EDSearchableCriterion> _criterion;
    NSIndexSet *_mailboxIDs;
}

@property(copy, nonatomic) NSIndexSet *mailboxIDs; // @synthesize mailboxIDs=_mailboxIDs;
@property(retain, nonatomic) id <EDSearchableCriterion> criterion; // @synthesize criterion=_criterion;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end
