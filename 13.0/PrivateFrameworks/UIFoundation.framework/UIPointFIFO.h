//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface UIPointFIFO : NSObject
{
    UIPointFIFO *_nextFIFO;
}

@property(retain, nonatomic) UIPointFIFO *nextFIFO; // @synthesize nextFIFO=_nextFIFO;
- (void)clear;
- (void)flush;
- (void)addPoint: /* Error: Ran out of types for this method. */;
- (void)emitPoint: /* Error: Ran out of types for this method. */;
- (void)dealloc;
- (id)initWithFIFO:(id)arg1;

@end
