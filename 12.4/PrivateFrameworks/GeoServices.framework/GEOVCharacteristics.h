//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOVCharacteristics : PBCodable <NSCopying>
{
    NSMutableArray *_pointCharacteristics;
}

@property(retain, nonatomic) NSMutableArray *pointCharacteristics; // @synthesize pointCharacteristics=_pointCharacteristics;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)pointCharacteristicAtIndex:(unsigned long long)arg1;
- (unsigned long long)pointCharacteristicsCount;
- (void)addPointCharacteristic:(id)arg1;
- (void)clearPointCharacteristics;

@end
