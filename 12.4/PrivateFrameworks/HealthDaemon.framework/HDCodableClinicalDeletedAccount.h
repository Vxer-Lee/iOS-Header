//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSData;

@interface HDCodableClinicalDeletedAccount : PBCodable <NSCopying>
{
    double _deletionDate;
    NSData *_syncIdentifier;
    struct {
        unsigned int deletionDate:1;
    } _has;
}

@property(nonatomic) double deletionDate; // @synthesize deletionDate=_deletionDate;
@property(retain, nonatomic) NSData *syncIdentifier; // @synthesize syncIdentifier=_syncIdentifier;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasDeletionDate;
@property(readonly, nonatomic) _Bool hasSyncIdentifier;

@end

