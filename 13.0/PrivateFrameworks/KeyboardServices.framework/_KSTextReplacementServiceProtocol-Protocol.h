//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <KeyboardServices/NSObject-Protocol.h>

@class NSArray, NSPredicate;

@protocol _KSTextReplacementServiceProtocol <NSObject>
- (void)queryTextReplacementsWithPredicate:(NSPredicate *)arg1 reply:(void (^)(NSArray *, _Bool))arg2;
- (void)queryTextReplacementEntriesWithReply:(void (^)(NSArray *, _Bool))arg1;
- (void)cancelPendingUpdatesWithReply:(void (^)(_Bool, NSError *))arg1;
- (void)requestSyncWithReply:(void (^)(_Bool))arg1;
- (void)removeAllEntries;
- (void)addEntries:(NSArray *)arg1 removeEntries:(NSArray *)arg2 withReply:(void (^)(_Bool, NSError *))arg3;
@end
