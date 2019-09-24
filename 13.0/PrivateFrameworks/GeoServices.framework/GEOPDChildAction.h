//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDChildActionDirections, GEOPDChildActionFlyover, GEOPDChildActionSearch, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDChildAction : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    PBUnknownFields *_unknownFields;
    GEOPDChildActionDirections *_childActionDirections;
    GEOPDChildActionFlyover *_childActionFlyover;
    GEOPDChildActionSearch *_childActionSearch;
    int _childActionType;
    struct {
        unsigned int has_childActionType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_childActionDirections:1;
        unsigned int read_childActionFlyover:1;
        unsigned int read_childActionSearch:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_childActionDirections:1;
        unsigned int wrote_childActionFlyover:1;
        unsigned int wrote_childActionSearch:1;
        unsigned int wrote_childActionType:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEOPDChildActionSearch *childActionSearch;
@property(readonly, nonatomic) _Bool hasChildActionSearch;
- (void)_readChildActionSearch;
@property(retain, nonatomic) GEOPDChildActionFlyover *childActionFlyover;
@property(readonly, nonatomic) _Bool hasChildActionFlyover;
- (void)_readChildActionFlyover;
@property(retain, nonatomic) GEOPDChildActionDirections *childActionDirections;
@property(readonly, nonatomic) _Bool hasChildActionDirections;
- (void)_readChildActionDirections;
- (int)StringAsChildActionType:(id)arg1;
- (id)childActionTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasChildActionType;
@property(nonatomic) int childActionType;

@end
