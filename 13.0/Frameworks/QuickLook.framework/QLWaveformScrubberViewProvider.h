//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuickLook/PHVideoScrubberFilmstripViewProvider-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface QLWaveformScrubberViewProvider : NSObject <PHVideoScrubberFilmstripViewProvider>
{
}

+ (_Bool)generateWaveformForWidth:(double)arg1 asset:(id)arg2 updateHandler:(CDUnknownBlockType)arg3;
- (id)createFilmstripViewForVideoScrubberView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
