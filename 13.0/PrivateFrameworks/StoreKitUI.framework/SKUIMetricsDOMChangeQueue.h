//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SKUIMetricsDOMChangeQueue : NSObject
{
    NSMutableArray *_storage;
}

- (void).cxx_destruct;
- (id)oldestPendingChange;
- (void)addPendingChange:(id)arg1;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (id)init;

@end
