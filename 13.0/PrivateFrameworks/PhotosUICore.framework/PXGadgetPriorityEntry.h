//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol PXForYouRankable;

@interface PXGadgetPriorityEntry : NSObject
{
    id <PXForYouRankable> _rankable;
    NSDate *_cachedPriorityDate;
    long long _currentRank;
}

@property(nonatomic) long long currentRank; // @synthesize currentRank=_currentRank;
@property(retain, nonatomic) NSDate *cachedPriorityDate; // @synthesize cachedPriorityDate=_cachedPriorityDate;
@property(retain, nonatomic) id <PXForYouRankable> rankable; // @synthesize rankable=_rankable;
- (void).cxx_destruct;

@end
