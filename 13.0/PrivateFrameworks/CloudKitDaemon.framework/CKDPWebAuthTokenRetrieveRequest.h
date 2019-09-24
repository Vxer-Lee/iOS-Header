//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKDPWebAuthTokenRetrieveRequest : PBRequest <NSCopying>
{
    NSString *_apiToken;
    _Bool _forceFetchToken;
    struct {
        unsigned int forceFetchToken:1;
    } _has;
}

+ (id)options;
@property(nonatomic) _Bool forceFetchToken; // @synthesize forceFetchToken=_forceFetchToken;
@property(retain, nonatomic) NSString *apiToken; // @synthesize apiToken=_apiToken;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasForceFetchToken;
@property(readonly, nonatomic) _Bool hasApiToken;

@end
