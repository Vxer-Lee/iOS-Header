//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

@interface TLAlertContext : NSObject
{
    _Bool _beingInterrupted;
    long long _playbackBackEnd;
    NSObject<OS_dispatch_source> *_timeoutTimerSource;
}

@property(nonatomic, getter=isBeingInterrupted) _Bool beingInterrupted; // @synthesize beingInterrupted=_beingInterrupted;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimerSource; // @synthesize timeoutTimerSource=_timeoutTimerSource;
@property(nonatomic) long long playbackBackEnd; // @synthesize playbackBackEnd=_playbackBackEnd;
- (void).cxx_destruct;

@end
