//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEORPNavigationSettings : PBCodable <NSCopying>
{
    unsigned long long _distanceUnits;
    unsigned long long _maxAlternateRouteCount;
    NSString *_voiceLanguage;
    unsigned long long _voiceVolume;
    int _userPreferredTransportType;
    _Bool _beepBeforeInstruction;
    _Bool _muteSpeechOverride;
    _Bool _pauseSpokenAudio;
    _Bool _shouldUseGuidanceEventManager;
    _Bool _speechEnabled;
    struct {
        unsigned int has_distanceUnits:1;
        unsigned int has_maxAlternateRouteCount:1;
        unsigned int has_voiceVolume:1;
        unsigned int has_userPreferredTransportType:1;
        unsigned int has_beepBeforeInstruction:1;
        unsigned int has_muteSpeechOverride:1;
        unsigned int has_pauseSpokenAudio:1;
        unsigned int has_shouldUseGuidanceEventManager:1;
        unsigned int has_speechEnabled:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
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
- (int)StringAsUserPreferredTransportType:(id)arg1;
- (id)userPreferredTransportTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasUserPreferredTransportType;
@property(nonatomic) int userPreferredTransportType;
@property(nonatomic) _Bool hasShouldUseGuidanceEventManager;
@property(nonatomic) _Bool shouldUseGuidanceEventManager;
@property(retain, nonatomic) NSString *voiceLanguage;
@property(readonly, nonatomic) _Bool hasVoiceLanguage;
@property(nonatomic) _Bool hasBeepBeforeInstruction;
@property(nonatomic) _Bool beepBeforeInstruction;
@property(nonatomic) _Bool hasMaxAlternateRouteCount;
@property(nonatomic) unsigned long long maxAlternateRouteCount;
@property(nonatomic) _Bool hasSpeechEnabled;
@property(nonatomic) _Bool speechEnabled;
@property(nonatomic) _Bool hasMuteSpeechOverride;
@property(nonatomic) _Bool muteSpeechOverride;
@property(nonatomic) _Bool hasPauseSpokenAudio;
@property(nonatomic) _Bool pauseSpokenAudio;
@property(nonatomic) _Bool hasDistanceUnits;
@property(nonatomic) unsigned long long distanceUnits;
@property(nonatomic) _Bool hasVoiceVolume;
@property(nonatomic) unsigned long long voiceVolume;

@end
