//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPRequest.h>

@class MPModelRequest;

@interface MPModelShimRequest : MPRequest
{
    MPModelRequest *_modelRequest;
}

+ (Class)responseClass;
@property(retain, nonatomic) MPModelRequest *modelRequest; // @synthesize modelRequest=_modelRequest;
- (void).cxx_destruct;
- (id)middlewareClasses;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

