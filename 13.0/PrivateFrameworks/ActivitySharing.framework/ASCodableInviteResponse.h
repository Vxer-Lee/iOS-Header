//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ActivitySharing/NSCopying-Protocol.h>

@class ASCodableActivityDataPreview, ASCodableShareLocations, NSString;

@interface ASCodableInviteResponse : PBCodable <NSCopying>
{
    ASCodableActivityDataPreview *_activityDataPreview;
    NSString *_handshakeToken;
    NSString *_inviteeBuildNumber;
    NSString *_inviteeCloudKitAddress;
    ASCodableShareLocations *_inviteeShareLocations;
    unsigned int _inviteeVersion;
    int _responseCode;
    struct {
        unsigned int inviteeVersion:1;
        unsigned int responseCode:1;
    } _has;
}

@property(retain, nonatomic) ASCodableActivityDataPreview *activityDataPreview; // @synthesize activityDataPreview=_activityDataPreview;
@property(nonatomic) unsigned int inviteeVersion; // @synthesize inviteeVersion=_inviteeVersion;
@property(retain, nonatomic) NSString *inviteeBuildNumber; // @synthesize inviteeBuildNumber=_inviteeBuildNumber;
@property(retain, nonatomic) ASCodableShareLocations *inviteeShareLocations; // @synthesize inviteeShareLocations=_inviteeShareLocations;
@property(retain, nonatomic) NSString *inviteeCloudKitAddress; // @synthesize inviteeCloudKitAddress=_inviteeCloudKitAddress;
@property(nonatomic) int responseCode; // @synthesize responseCode=_responseCode;
@property(retain, nonatomic) NSString *handshakeToken; // @synthesize handshakeToken=_handshakeToken;
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
@property(readonly, nonatomic) _Bool hasActivityDataPreview;
@property(nonatomic) _Bool hasInviteeVersion;
@property(readonly, nonatomic) _Bool hasInviteeBuildNumber;
@property(readonly, nonatomic) _Bool hasInviteeShareLocations;
@property(readonly, nonatomic) _Bool hasInviteeCloudKitAddress;
@property(nonatomic) _Bool hasResponseCode;
@property(readonly, nonatomic) _Bool hasHandshakeToken;

@end
