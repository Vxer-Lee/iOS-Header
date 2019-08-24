//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LinkPresentation/LPPlayButton.h>

#import <LinkPresentation/LPMediaPlayer-Protocol.h>

@class AVPlayer, AVPlayerItem, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface LPiTunesPreviewPlayButton : LPPlayButton <LPMediaPlayer>
{
    NSURL *_previewURL;
    AVPlayerItem *_item;
    AVPlayer *_player;
    id _timeObserver;
    id _endObserver;
    long long _state;
}

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)buttonPressed:(id)arg1;
- (void)updateToState:(long long)arg1;
@property(readonly, nonatomic) _Bool shouldUnmuteWhenUserAdjustsVolume;
@property(readonly, nonatomic, getter=isFullScreen) _Bool fullScreen;
@property(readonly, nonatomic) _Bool usesSharedAudioSession;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
@property(readonly, nonatomic, getter=isMuted) _Bool muted;
@property(nonatomic, getter=isActive) _Bool active;
- (void)dealloc;
- (id)initWithPreviewURL:(id)arg1 style:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long lastInteractionTimestamp;
@property(readonly) Class superclass;
@property(readonly, nonatomic) double unobscuredAreaFraction;

@end
