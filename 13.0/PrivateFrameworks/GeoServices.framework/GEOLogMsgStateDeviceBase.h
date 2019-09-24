//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOLogMsgStateDeviceBase : PBCodable <NSCopying>
{
    int _deviceBatteryState;
    int _deviceInterfaceOrientation;
    _Bool _deviceInVehicle;
    struct {
        unsigned int has_deviceBatteryState:1;
        unsigned int has_deviceInterfaceOrientation:1;
        unsigned int has_deviceInVehicle:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
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
@property(nonatomic) _Bool hasDeviceInVehicle;
@property(nonatomic) _Bool deviceInVehicle;
- (int)StringAsDeviceBatteryState:(id)arg1;
- (id)deviceBatteryStateAsString:(int)arg1;
@property(nonatomic) _Bool hasDeviceBatteryState;
@property(nonatomic) int deviceBatteryState;
- (int)StringAsDeviceInterfaceOrientation:(id)arg1;
- (id)deviceInterfaceOrientationAsString:(int)arg1;
@property(nonatomic) _Bool hasDeviceInterfaceOrientation;
@property(nonatomic) int deviceInterfaceOrientation;

@end
