//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceMemos/MPAVRoutingControllerDelegate-Protocol.h>

@class RCAudioSessionRoutingMPAVRoutingController;

@protocol RCAudioSessionRoutingMPAVRoutingControllerDelegate <MPAVRoutingControllerDelegate>
- (void)routingController:(RCAudioSessionRoutingMPAVRoutingController *)arg1 didChangeAirPlayMirrorDestinationToActive:(_Bool)arg2;
- (void)routingController:(RCAudioSessionRoutingMPAVRoutingController *)arg1 willChangeCategoryActiveStateToActive:(_Bool)arg2;
@end
