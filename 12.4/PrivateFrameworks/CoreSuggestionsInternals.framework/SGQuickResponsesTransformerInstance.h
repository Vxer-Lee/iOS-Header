//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsInternals/SGTransformerInstance.h>

@class NSArray, _PASRng;
@protocol PMLTransformerProtocol;

@interface SGQuickResponsesTransformerInstance : SGTransformerInstance
{
    _PASRng *_rngSampling;
    NSArray *_methods;
    NSArray *_labels;
    double _positiveSamplingRate;
    double _negativeSamplingRate;
    unsigned long long _vectorLength;
    id <PMLTransformerProtocol> _labeller;
    struct _NSRange _characterNGramRange;
    struct _NSRange _tokenNGramRange;
}

@property(retain, nonatomic) id <PMLTransformerProtocol> labeller; // @synthesize labeller=_labeller;
@property(nonatomic) struct _NSRange tokenNGramRange; // @synthesize tokenNGramRange=_tokenNGramRange;
@property(nonatomic) struct _NSRange characterNGramRange; // @synthesize characterNGramRange=_characterNGramRange;
@property(nonatomic) unsigned long long vectorLength; // @synthesize vectorLength=_vectorLength;
@property(nonatomic) double negativeSamplingRate; // @synthesize negativeSamplingRate=_negativeSamplingRate;
@property(nonatomic) double positiveSamplingRate; // @synthesize positiveSamplingRate=_positiveSamplingRate;
@property(retain, nonatomic) NSArray *labels; // @synthesize labels=_labels;
@property(retain, nonatomic) NSArray *methods; // @synthesize methods=_methods;
- (void).cxx_destruct;
- (_Bool)shouldSampleForLabel:(id)arg1;
- (id)labelOf:(id)arg1;
- (id)sessionDescriptor;
- (id)initWithLanguage:(id)arg1 withDictionary:(id)arg2 withSeed:(unsigned long long)arg3;
- (id)initWithLanguage:(id)arg1;

@end
