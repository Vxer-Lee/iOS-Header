//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface SiriCoreErrorInfo : NSObject
{
    _Bool _isPeerConnectionError;
    _Bool _isPeerNotNearbyError;
    NSError *_error;
}

@property(nonatomic) _Bool isPeerNotNearbyError; // @synthesize isPeerNotNearbyError=_isPeerNotNearbyError;
@property(nonatomic) _Bool isPeerConnectionError; // @synthesize isPeerConnectionError=_isPeerConnectionError;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;

@end
