//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ActivitySharing/NSCopying-Protocol.h>

@interface ASCodableCloudKitRelationshipEvent : PBCodable <NSCopying>
{
    long long _anchor;
    double _date;
    long long _type;
    struct {
        unsigned int anchor:1;
        unsigned int date:1;
        unsigned int type:1;
    } _has;
}

@property(nonatomic) double date; // @synthesize date=_date;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long anchor; // @synthesize anchor=_anchor;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasDate;
@property(nonatomic) _Bool hasType;
@property(nonatomic) _Bool hasAnchor;

@end
