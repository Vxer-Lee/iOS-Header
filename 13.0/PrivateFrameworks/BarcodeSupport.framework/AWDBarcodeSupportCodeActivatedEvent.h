//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BarcodeSupport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface AWDBarcodeSupportCodeActivatedEvent : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _appLinkActivationOpenStrategy;
    int _barcodeDataType;
    int _barcodeSourceType;
    int _barcodeURLType;
    int _clientType;
    struct {
        unsigned int timestamp:1;
        unsigned int appLinkActivationOpenStrategy:1;
        unsigned int barcodeDataType:1;
        unsigned int barcodeSourceType:1;
        unsigned int barcodeURLType:1;
        unsigned int clientType:1;
    } _has;
}

@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsBarcodeSourceType:(id)arg1;
- (id)barcodeSourceTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasBarcodeSourceType;
@property(nonatomic) int barcodeSourceType; // @synthesize barcodeSourceType=_barcodeSourceType;
- (int)StringAsAppLinkActivationOpenStrategy:(id)arg1;
- (id)appLinkActivationOpenStrategyAsString:(int)arg1;
@property(nonatomic) _Bool hasAppLinkActivationOpenStrategy;
@property(nonatomic) int appLinkActivationOpenStrategy; // @synthesize appLinkActivationOpenStrategy=_appLinkActivationOpenStrategy;
- (int)StringAsBarcodeURLType:(id)arg1;
- (id)barcodeURLTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasBarcodeURLType;
@property(nonatomic) int barcodeURLType; // @synthesize barcodeURLType=_barcodeURLType;
- (int)StringAsBarcodeDataType:(id)arg1;
- (id)barcodeDataTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasBarcodeDataType;
@property(nonatomic) int barcodeDataType; // @synthesize barcodeDataType=_barcodeDataType;
- (int)StringAsClientType:(id)arg1;
- (id)clientTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasClientType;
@property(nonatomic) int clientType; // @synthesize clientType=_clientType;
@property(nonatomic) _Bool hasTimestamp;

@end
