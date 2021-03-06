//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PKMetalBuffer;
@protocol MTLBuffer;

@interface PKMetalStrokeRenderCacheBuffer : NSObject
{
    PKMetalBuffer *_buffer;
    unsigned long long _offset;
    unsigned long long _numVertices;
    struct CGRect _bounds;
}

@property(readonly, nonatomic) unsigned long long numVertices; // @synthesize numVertices=_numVertices;
@property(readonly, nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
- (void).cxx_destruct;
- (_Bool)lockPurgeableResourcesAddToSet:(id)arg1;
@property(readonly, nonatomic) id <MTLBuffer> vertexBuffer; // @dynamic vertexBuffer;
- (id)initWithBuffer:(id)arg1 offset:(unsigned long long)arg2 numVertices:(unsigned long long)arg3 bounds:(struct CGRect)arg4;
- (id)init;

@end

