//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IPCMessageObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface IPCSetNavigationVoiceVolumeMessage : IPCMessageObject
{
    NSString *_requestedVolume;
}

@property(copy, nonatomic) NSString *requestedVolume; // @synthesize requestedVolume=_requestedVolume;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryValue;
- (id)initWithDictionary:(id)arg1;

@end
