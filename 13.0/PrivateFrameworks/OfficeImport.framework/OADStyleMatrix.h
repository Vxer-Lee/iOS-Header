//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface OADStyleMatrix : NSObject
{
    NSString *mName;
    NSMutableArray *mFills;
    NSMutableArray *mStrokes;
    NSMutableArray *mEffects;
    NSMutableArray *mBgFills;
}

+ (id)objectInArray:(id)arg1 withPossiblyOutOfRangeIndex:(unsigned long long)arg2 defaultValue:(id)arg3;
@property(copy, nonatomic) NSString *name; // @synthesize name=mName;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEmpty;
- (void)validateStyleMatrix;
- (void)padArray:(id)arg1 withContentsOfArray:(id)arg2;
- (id)bgFillAtIndex:(unsigned long long)arg1;
- (unsigned long long)bgFillCount;
- (void)addBgFill:(id)arg1;
- (id)effectsAtIndex:(unsigned long long)arg1 color:(id)arg2;
- (id)effectsAtIndex:(unsigned long long)arg1;
- (unsigned long long)effectsCount;
- (void)addEffects:(id)arg1;
- (id)strokeAtIndex:(unsigned long long)arg1 color:(id)arg2;
- (id)strokeAtIndex:(unsigned long long)arg1;
- (unsigned long long)strokeCount;
- (void)addStroke:(id)arg1;
- (id)fillAtIndex:(unsigned long long)arg1 color:(id)arg2;
- (id)fillAtIndex:(unsigned long long)arg1;
- (unsigned long long)fillCount;
- (void)addFill:(id)arg1;
- (id)init;

@end
