//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NRConnectivitySubscriber : NSObject
{
    _Bool _connected;
    unsigned long long _dropoutCounter;
}

+ (_Bool)getDropoutCounter:(unsigned long long *)arg1;
@property(nonatomic) unsigned long long dropoutCounter; // @synthesize dropoutCounter=_dropoutCounter;
@property(nonatomic) _Bool connected; // @synthesize connected=_connected;
- (void)_readConnectivityStatus;
- (id)init;

@end

