//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

@interface GEOVersionManifest : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_serviceVersions;
}

+ (Class)serviceVersionType;
@property(retain, nonatomic) NSMutableArray *serviceVersions; // @synthesize serviceVersions=_serviceVersions;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)serviceVersionAtIndex:(unsigned long long)arg1;
- (unsigned long long)serviceVersionsCount;
- (void)addServiceVersion:(id)arg1;
- (void)clearServiceVersions;

@end

