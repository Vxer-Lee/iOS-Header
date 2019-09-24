//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface TSUUnfairMutableDictionaryCache : NSObject
{
    struct os_unfair_lock_s _lock;
    NSString *_name;
    NSMutableDictionary *_cache;
}

@property(readonly, nonatomic) NSMutableDictionary *cache; // @synthesize cache=_cache;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)performSyncWriteWithUnderlyingDictionary:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeAllObjects;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectForKey:(id)arg1 andWait:(_Bool)arg2;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)p_didEnterBackground:(id)arg1;
- (void)p_didReceiveMemoryWarning:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)init;

@end
