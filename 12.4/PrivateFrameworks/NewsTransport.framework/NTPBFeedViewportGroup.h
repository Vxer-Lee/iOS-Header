//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NSString, NTPBColor, NTPBColorGradient, NTPBDate, NTPBDiscoverMoreVideosInfo;

@interface NTPBFeedViewportGroup : PBCodable <NSCopying>
{
    unsigned long long _mergeID;
    unsigned long long _options;
    NTPBColorGradient *_backgroundGradient;
    NTPBColor *_cardBackgroundColor;
    NTPBDate *_creationDate;
    int _ctaTextRef;
    NTPBDiscoverMoreVideosInfo *_discoverMoreVideosInfo;
    NTPBDate *_editionFeedEndDate;
    NTPBDate *_editionFeedStartDate;
    NTPBDate *_editionKeyDate;
    int _eyebrowTextRef;
    NSMutableArray *_headlines;
    NSString *_identifier;
    NSMutableArray *_issueIDs;
    int _l2TagIDRef;
    NSString *_magazineGroupIdentifier;
    NTPBColorGradient *_sauceGradient;
    int _sourceIdentifierRef;
    int _subtitleRef;
    NTPBColor *_titleColor;
    int _titleRef;
    int _type;
    NSMutableArray *_videoPlaylistHeadlines;
    _Bool _isFirstFromEdition;
    struct {
        unsigned int mergeID:1;
        unsigned int options:1;
        unsigned int ctaTextRef:1;
        unsigned int eyebrowTextRef:1;
        unsigned int l2TagIDRef:1;
        unsigned int sourceIdentifierRef:1;
        unsigned int subtitleRef:1;
        unsigned int titleRef:1;
        unsigned int type:1;
        unsigned int isFirstFromEdition:1;
    } _has;
}

+ (Class)issueIDsType;
+ (Class)videoPlaylistHeadlinesType;
+ (Class)headlinesType;
@property(retain, nonatomic) NTPBColor *cardBackgroundColor; // @synthesize cardBackgroundColor=_cardBackgroundColor;
@property(retain, nonatomic) NTPBColorGradient *sauceGradient; // @synthesize sauceGradient=_sauceGradient;
@property(nonatomic) int ctaTextRef; // @synthesize ctaTextRef=_ctaTextRef;
@property(nonatomic) int eyebrowTextRef; // @synthesize eyebrowTextRef=_eyebrowTextRef;
@property(retain, nonatomic) NSString *magazineGroupIdentifier; // @synthesize magazineGroupIdentifier=_magazineGroupIdentifier;
@property(retain, nonatomic) NSMutableArray *issueIDs; // @synthesize issueIDs=_issueIDs;
@property(retain, nonatomic) NSMutableArray *videoPlaylistHeadlines; // @synthesize videoPlaylistHeadlines=_videoPlaylistHeadlines;
@property(retain, nonatomic) NTPBDiscoverMoreVideosInfo *discoverMoreVideosInfo; // @synthesize discoverMoreVideosInfo=_discoverMoreVideosInfo;
@property(nonatomic) _Bool isFirstFromEdition; // @synthesize isFirstFromEdition=_isFirstFromEdition;
@property(retain, nonatomic) NTPBDate *editionFeedEndDate; // @synthesize editionFeedEndDate=_editionFeedEndDate;
@property(retain, nonatomic) NTPBDate *editionFeedStartDate; // @synthesize editionFeedStartDate=_editionFeedStartDate;
@property(retain, nonatomic) NTPBDate *editionKeyDate; // @synthesize editionKeyDate=_editionKeyDate;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) unsigned long long mergeID; // @synthesize mergeID=_mergeID;
@property(retain, nonatomic) NSMutableArray *headlines; // @synthesize headlines=_headlines;
@property(nonatomic) int l2TagIDRef; // @synthesize l2TagIDRef=_l2TagIDRef;
@property(retain, nonatomic) NTPBColorGradient *backgroundGradient; // @synthesize backgroundGradient=_backgroundGradient;
@property(retain, nonatomic) NTPBColor *titleColor; // @synthesize titleColor=_titleColor;
@property(nonatomic) int subtitleRef; // @synthesize subtitleRef=_subtitleRef;
@property(nonatomic) int titleRef; // @synthesize titleRef=_titleRef;
@property(retain, nonatomic) NTPBDate *creationDate; // @synthesize creationDate=_creationDate;
@property(nonatomic) int sourceIdentifierRef; // @synthesize sourceIdentifierRef=_sourceIdentifierRef;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasCardBackgroundColor;
@property(readonly, nonatomic) _Bool hasSauceGradient;
@property(nonatomic) _Bool hasCtaTextRef;
@property(nonatomic) _Bool hasEyebrowTextRef;
@property(readonly, nonatomic) _Bool hasMagazineGroupIdentifier;
- (id)issueIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)issueIDsCount;
- (void)addIssueIDs:(id)arg1;
- (void)clearIssueIDs;
- (id)videoPlaylistHeadlinesAtIndex:(unsigned long long)arg1;
- (unsigned long long)videoPlaylistHeadlinesCount;
- (void)addVideoPlaylistHeadlines:(id)arg1;
- (void)clearVideoPlaylistHeadlines;
@property(readonly, nonatomic) _Bool hasDiscoverMoreVideosInfo;
@property(nonatomic) _Bool hasIsFirstFromEdition;
@property(readonly, nonatomic) _Bool hasEditionFeedEndDate;
@property(readonly, nonatomic) _Bool hasEditionFeedStartDate;
@property(readonly, nonatomic) _Bool hasEditionKeyDate;
@property(nonatomic) _Bool hasOptions;
@property(nonatomic) _Bool hasMergeID;
- (id)headlinesAtIndex:(unsigned long long)arg1;
- (unsigned long long)headlinesCount;
- (void)addHeadlines:(id)arg1;
- (void)clearHeadlines;
@property(nonatomic) _Bool hasL2TagIDRef;
@property(readonly, nonatomic) _Bool hasBackgroundGradient;
@property(readonly, nonatomic) _Bool hasTitleColor;
@property(nonatomic) _Bool hasSubtitleRef;
@property(nonatomic) _Bool hasTitleRef;
@property(readonly, nonatomic) _Bool hasCreationDate;
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) _Bool hasSourceIdentifierRef;
@property(readonly, nonatomic) _Bool hasIdentifier;
- (void)dealloc;

@end
