//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class RAPQuestion, RAPReport, UIBarButtonItem;

@protocol RAPReportViewControllerProtocol <NSObject>
@property(readonly, copy, nonatomic) CDUnknownBlockType completion;
@property(readonly, nonatomic) UIBarButtonItem *sendButtonItem;
@property(readonly, nonatomic) RAPReport *report;
- (void)_send;
- (void)invokeCompletionWithOutcome:(long long)arg1;
- (id)initWithReport:(RAPReport *)arg1 question:(RAPQuestion *)arg2 completion:(void (^)(id, long long))arg3;
@end
