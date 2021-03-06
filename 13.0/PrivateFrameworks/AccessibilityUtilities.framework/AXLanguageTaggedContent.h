//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableOrderedSet, NSMutableString, NSString;

@interface AXLanguageTaggedContent : NSObject
{
    NSArray *_currentDialects;
    struct _NSRange _currentChunk;
    _Bool _predictedByTagger;
    void *_nlTagger;
    _Bool _tagged;
    NSMutableArray *_tags;
    NSMutableOrderedSet *_unpredictedAmbiguousLangMaps;
    NSString *_userPreferredLangID;
    NSMutableOrderedSet *_predictedSecondaryLangMaps;
    NSMutableString *_contentString;
}

@property(retain, nonatomic) NSArray *currentDialects; // @synthesize currentDialects=_currentDialects;
@property(retain, nonatomic) NSMutableString *contentString; // @synthesize contentString=_contentString;
@property(retain, nonatomic) NSMutableOrderedSet *predictedSecondaryLangMaps; // @synthesize predictedSecondaryLangMaps=_predictedSecondaryLangMaps;
@property(copy, nonatomic) NSString *userPreferredLangID; // @synthesize userPreferredLangID=_userPreferredLangID;
@property(retain, nonatomic) NSMutableOrderedSet *unpredictedAmbiguousLangMaps; // @synthesize unpredictedAmbiguousLangMaps=_unpredictedAmbiguousLangMaps;
@property(nonatomic, getter=isTagged) _Bool tagged; // @synthesize tagged=_tagged;
@property(retain, nonatomic) NSMutableArray *tags; // @synthesize tags=_tags;
- (void).cxx_destruct;
- (void)updateTagsForLocalePrefChange;
- (id)primaryUnambiguousDialect;
- (id)primaryAmbiguousDialect;
- (void)_addTag;
- (void)_manuallyProcessContentWithRange:(struct _NSRange)arg1;
- (_Bool)hasOnlyNonWesternLangMaps;
- (_Bool)hasOnlyWesternLangMaps;
- (id)ambiguousLangMaps;
- (id)unambiguousLangMaps;
- (id)significantAmbiguousLangMapsForUserKeyboards;
- (id)significantAmbiguousLangMaps;
- (_Bool)langMapIsSignificant:(id)arg1;
- (_Bool)_isStringCombinationOfCommonAndEmoji:(id)arg1;
- (void)tagContent;
- (_Bool)_addLanguageTagForCurrentChunk;
- (_Bool)_addLanguageTagForDateIfNecessary;
- (id)_overrideLanguageDetection:(id)arg1;
- (CDStruct_3a8d9e70 *)_languageHintsEvenlyDistributedWithProbability:(float)arg1 excludingHints:(id)arg2;
- (id)_allLangIDs;
- (int)langIDforLangCode:(id)arg1;
- (id)langCodeForlangId:(int)arg1;
- (void)enumeratePredictedTags:(CDUnknownBlockType)arg1;
- (void)enumerateUnpredictedTags:(CDUnknownBlockType)arg1;
- (void)appendLanguageTaggedContent:(id)arg1;
@property(readonly, nonatomic) NSString *content;
- (id)description;
- (void)dealloc;
- (id)initWithContent:(id)arg1;

@end

