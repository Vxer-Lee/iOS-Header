//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface LPiTunesMediaOffer : NSObject
{
    _Bool _hasAudio;
    _Bool _hasVideo;
    _Bool _isEVOD;
    NSURL *_previewURL;
    NSString *_type;
}

+ (_Bool)isEVODForOffer:(id)arg1;
+ (id)typeForOffer:(id)arg1;
+ (id)previewURLForOffer:(id)arg1;
+ (_Bool)hasVideoForOffer:(id)arg1;
+ (_Bool)hasAudioForOffer:(id)arg1;
@property(readonly, nonatomic) _Bool isEVOD; // @synthesize isEVOD=_isEVOD;
@property(readonly, nonatomic) _Bool hasVideo; // @synthesize hasVideo=_hasVideo;
@property(readonly, nonatomic) _Bool hasAudio; // @synthesize hasAudio=_hasAudio;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSURL *previewURL; // @synthesize previewURL=_previewURL;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end
