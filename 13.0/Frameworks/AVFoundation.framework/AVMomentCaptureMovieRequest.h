//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVMomentCaptureMovie, AVMomentCaptureMovieRecordingResolvedSettings, AVMomentCaptureMovieRecordingSettings, AVMomentCaptureSettings, AVWeakReferencingDelegateStorage;

__attribute__((visibility("hidden")))
@interface AVMomentCaptureMovieRequest : NSObject
{
    AVWeakReferencingDelegateStorage *_delegateStorage;
    AVMomentCaptureSettings *_momentCaptureSettings;
    AVMomentCaptureMovieRecordingSettings *_unresolvedSettings;
    AVMomentCaptureMovieRecordingResolvedSettings *_resolvedSettings;
    unsigned int _firedCallbackFlags;
    AVMomentCaptureMovie *movie;
    AVMomentCaptureMovie *spatialOverCaptureMovie;
    unsigned long long _expectedMovieCount;
    AVMomentCaptureMovie *_movie;
    AVMomentCaptureMovie *_spatialOverCaptureMovie;
}

+ (id)requestWithDelegate:(id)arg1 movieRecordingSettings:(id)arg2 momentSettings:(id)arg3;
@property(retain, nonatomic) AVMomentCaptureMovie *spatialOverCaptureMovie; // @synthesize spatialOverCaptureMovie=_spatialOverCaptureMovie;
@property(retain, nonatomic) AVMomentCaptureMovie *movie; // @synthesize movie=_movie;
@property(nonatomic) unsigned int firedCallbackFlags; // @synthesize firedCallbackFlags=_firedCallbackFlags;
@property(readonly, nonatomic) unsigned long long expectedMovieCount; // @synthesize expectedMovieCount=_expectedMovieCount;
@property(readonly) AVMomentCaptureSettings *momentCaptureSettings; // @synthesize momentCaptureSettings=_momentCaptureSettings;
@property(readonly) AVMomentCaptureMovieRecordingSettings *unresolvedSettings; // @synthesize unresolvedSettings=_unresolvedSettings;
@property(readonly) AVWeakReferencingDelegateStorage *delegateStorage; // @synthesize delegateStorage=_delegateStorage;
@property(retain, nonatomic) AVMomentCaptureMovieRecordingResolvedSettings *resolvedSettings;
- (void)dealloc;
- (id)_initWithDelegate:(id)arg1 movieRecordingSettings:(id)arg2 momentSettings:(id)arg3;

@end
