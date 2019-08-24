//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaSocial/NSCopying-Protocol.h>

@class NSError;

@interface MSCLAudioPlayerStatus : NSObject <NSCopying>
{
    double _currentTime;
    double _duration;
    NSError *_error;
    long long _state;
}

@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
