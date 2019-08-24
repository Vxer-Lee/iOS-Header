//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface SYDWriteTracker : NSObject
{
    _Bool _enabled;
    NSMutableDictionary *_clientsByIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) NSMutableDictionary *clientsByIdentifier; // @synthesize clientsByIdentifier=_clientsByIdentifier;
- (void).cxx_destruct;
- (id)plistRepresentation;
- (id)reset;
- (id)disable;
- (void)enable;
- (void)wroteBytes:(unsigned long long)arg1 forIdentifier:(id)arg2;
- (id)initWithPlistRepresentation:(id)arg1;
- (id)init;

@end
