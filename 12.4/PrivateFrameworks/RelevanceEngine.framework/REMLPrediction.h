//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCopying-Protocol.h>

@interface REMLPrediction : NSObject <NSCopying>
{
    float _actionProbability;
    float _appActionProbability;
    float _mean;
    float _variance;
    float _probability;
    float _pessimistic;
}

+ (id)predictionWithProbability:(float)arg1 mean:(float)arg2 variance:(float)arg3 pessimistic:(float)arg4;
@property(readonly, nonatomic) float pessimistic; // @synthesize pessimistic=_pessimistic;
@property(readonly, nonatomic) float probability; // @synthesize probability=_probability;
@property(readonly, nonatomic) float variance; // @synthesize variance=_variance;
@property(readonly, nonatomic) float mean; // @synthesize mean=_mean;
@property(nonatomic) float appActionProbability;
@property(nonatomic) float actionProbability;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
