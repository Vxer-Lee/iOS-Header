//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface AVWeakObservableCallbackCancellationHelper : NSObject
{
    NSMutableArray *_callbackRegistrations;
}

- (void)cancelAllCallbacks;
- (void)addCallbackToCancel:(id)arg1;
- (void)dealloc;
- (id)init;

@end

