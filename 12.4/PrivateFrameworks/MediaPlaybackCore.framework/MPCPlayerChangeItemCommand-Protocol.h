//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/MPCPlayerCommand-Protocol.h>

@class MPCPlayerCommandRequest, MPCPlayerResponseItem, MPCPlayerResponseSection;

@protocol MPCPlayerChangeItemCommand <MPCPlayerCommand>
- (MPCPlayerCommandRequest *)changeToItem:(MPCPlayerResponseItem *)arg1;
- (MPCPlayerCommandRequest *)changeToSection:(MPCPlayerResponseSection *)arg1;
- (MPCPlayerCommandRequest *)nextChapter;
- (MPCPlayerCommandRequest *)nextSection;
- (MPCPlayerCommandRequest *)nextItem;
- (MPCPlayerCommandRequest *)previousChapter;
- (MPCPlayerCommandRequest *)previousSection;
- (MPCPlayerCommandRequest *)previousItemDeferringToPlaybackQueuePosition;
- (MPCPlayerCommandRequest *)previousItem;
@end

