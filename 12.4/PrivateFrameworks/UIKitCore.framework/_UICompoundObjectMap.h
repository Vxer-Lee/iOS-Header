//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UICompoundObjectMap : NSObject
{
    NSMutableDictionary *_mapTable;
}

+ (id)generateKeyForObject:(id)arg1 andProperty:(id)arg2;
+ (id)compoundObjectMap;
- (void).cxx_destruct;
- (void)performWithEach:(CDUnknownBlockType)arg1;
- (void)removeAllMappings;
- (void)setValue:(id)arg1 forObject:(id)arg2 andProperty:(id)arg3;
- (id)valueForObject:(id)arg1 andProperty:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)init;

@end
