//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableString, NSURL;

@interface HMCameraClipVideoHLSPlaylistGenerator : NSObject
{
    NSMutableString *_hlsPlaylistString;
    NSURL *_url;
}

+ (id)_hlsPlaylistEncryptionMethodNameForScheme:(unsigned long long)arg1;
@property(readonly, copy) NSURL *url; // @synthesize url=_url;
@property(readonly) NSMutableString *hlsPlaylistString; // @synthesize hlsPlaylistString=_hlsPlaylistString;
- (void).cxx_destruct;
- (void)finish;
- (void)addSegments:(id)arg1;
- (void)addSegment:(id)arg1;
@property(readonly, copy) NSData *hlsPlaylist;
- (id)initWithClip:(id)arg1 url:(id)arg2;

@end
