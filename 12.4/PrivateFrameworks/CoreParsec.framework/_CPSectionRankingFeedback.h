//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPProcessableFeedback-Protocol.h>
#import <CoreParsec/_CPSectionRankingFeedback-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _CPResultSectionForFeedback;

@interface _CPSectionRankingFeedback : PBCodable <_CPProcessableFeedback, _CPSectionRankingFeedback, NSSecureCoding>
{
    unsigned int _localSectionPosition;
    unsigned long long _timestamp;
    NSArray *_results;
    _CPResultSectionForFeedback *_section;
    double _personalizationScore;
}

@property(nonatomic) double personalizationScore; // @synthesize personalizationScore=_personalizationScore;
@property(nonatomic) unsigned int localSectionPosition; // @synthesize localSectionPosition=_localSectionPosition;
@property(retain, nonatomic) _CPResultSectionForFeedback *section; // @synthesize section=_section;
@property(copy, nonatomic) NSArray *results; // @synthesize results=_results;
@property(nonatomic) unsigned long long timestamp;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)resultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultsCount;
- (void)addResults:(id)arg1;
- (void)clearResults;
- (id)init;
- (id)initWithFacade:(id)arg1;
@property(readonly, nonatomic) _Bool requiresQueryId;
@property(readonly, nonatomic) id feedbackJSON;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
