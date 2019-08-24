//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MetricsKit/MTEventFilter-Protocol.h>

@class JSContext, NSError, NSOperationQueue, NSString;

@interface MTJSContextEventFilter : NSObject <MTEventFilter>
{
    NSString *_script;
    NSString *_functionName;
    JSContext *_jsContext;
    NSError *_lastError;
    NSOperationQueue *_operationQueue;
}

@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSError *lastError; // @synthesize lastError=_lastError;
@property(retain, nonatomic) JSContext *jsContext; // @synthesize jsContext=_jsContext;
@property(retain, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
@property(retain, nonatomic) NSString *script; // @synthesize script=_script;
- (void).cxx_destruct;
- (id)apply:(id)arg1;
- (void)_applyFilter:(id)arg1 promise:(id)arg2;
- (id)initWithJSContext:(id)arg1 functionName:(id)arg2 operationQueue:(id)arg3;
- (id)initWithScript:(id)arg1 functionName:(id)arg2 operationQueue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
