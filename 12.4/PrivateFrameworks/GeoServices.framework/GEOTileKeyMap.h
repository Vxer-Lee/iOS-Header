//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GEOTileKeyMap : NSObject
{
    long long _type;
    void *_map;
}

- (unsigned long long)count;
- (void)removeObjectForKey:(const struct _GEOTileKey *)arg1;
- (void)setObject:(id)arg1 forKey:(const struct _GEOTileKey *)arg2;
- (id)objectForKey:(const struct _GEOTileKey *)arg1;
- (id)contentsDescription;
- (void)reserveCapacity:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithMapType:(long long)arg1;
- (id)init;

@end

