//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaControls/NSObject-Protocol.h>

@class MediaControlsVolumeController;

@protocol MediaControlsVolumeControllerObserver <NSObject>
- (void)mediaControlsVolumeController:(MediaControlsVolumeController *)arg1 didUpdateSplitRoute:(_Bool)arg2;

@optional
- (void)mediaControlsVolumeController:(MediaControlsVolumeController *)arg1 didChangeVolumeAvailable:(_Bool)arg2 effectiveVolume:(float)arg3 forRoute:(unsigned long long)arg4;
@end
