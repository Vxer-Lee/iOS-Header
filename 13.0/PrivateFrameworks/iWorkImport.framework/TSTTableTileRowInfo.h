//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSTTableTileRowInfo : NSObject
{
    struct TSTTableTileRowBuffer _currentData;
    struct TSTTableTileRowBuffer _preBNCData;
    unsigned short _maxColumnIndex;
    _Bool _maxColumnIndexValid;
    unsigned char _storageVersion;
    struct os_unfair_lock_s _unfairLock;
    unsigned int _tileRowIndex;
    unsigned long long _cellCount;
}

+ (id)rowInfoFromArchive:(const struct TileRowInfo *)arg1;
+ (id)rowInfoWithTileRowIndex:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned long long cellCount; // @synthesize cellCount=_cellCount;
@property(nonatomic) unsigned int tileRowIndex; // @synthesize tileRowIndex=_tileRowIndex;
- (id)description;
- (_Bool)validateWithResult:(id *)arg1;
- (void)validate;
@property(readonly, nonatomic) _Bool bncStorageBufferExists;
@property(readonly, nonatomic) unsigned short maxColumnIndex;
- (void)_recalculateMaxColumnIndex;
- (_Bool)searchCellStorageRefAtColumnIndex:(unsigned short)arg1 searchMask:(unsigned long long)arg2;
- (void)enumerateStoragesInColumnRange:(struct _NSRange)arg1 getPreBNC:(_Bool)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)enumerateStoragesInColumnRange:(struct _NSRange)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)moveColumnsFromIndex:(unsigned short)arg1 toIndex:(unsigned short)arg2 count:(unsigned int)arg3;
- (void)removeColumnsAtIndex:(unsigned short)arg1 count:(unsigned int)arg2;
- (void)insertColumnsAtIndex:(unsigned short)arg1 count:(unsigned int)arg2;
- (long long)setCell:(id)arg1 atIndex:(unsigned short)arg2 formatKeys:(CDStruct_c8ca99d5 *)arg3;
- (void)_removeCellAtIndex:(unsigned short)arg1;
- (void)_insertCell:(id)arg1 atIndex:(unsigned short)arg2 formatKeys:(CDStruct_c8ca99d5 *)arg3;
- (void)_replaceCellAtIndex:(unsigned short)arg1 withCell:(id)arg2 formatKeys:(CDStruct_c8ca99d5 *)arg3;
- (unsigned short)cellIndexAtOrBeforeIndex:(unsigned short)arg1;
- (unsigned short)cellIndexAtOrAfterIndex:(unsigned short)arg1;
- (struct TSTCellStorage *)preBNCStorageRefAtIndex:(unsigned short)arg1;
- (struct TSTCellStorage *)cellStorageRefAtIndex:(unsigned short)arg1;
- (void)encodeToArchive:(struct TileRowInfo *)arg1 archiver:(id)arg2;
- (id)initFromArchive:(const struct TileRowInfo *)arg1;
- (void)dealloc;
- (id)initWithTileRowIndex:(unsigned int)arg1;
- (void)unlockForConcurrentAccess;
- (void)lockForConcurrentAccess;
- (vector_73284f0b)accumulateCurrentCellsConcurrentlyAtColumns:(vector_5e7df3d8 *)arg1 usingCellCreationBlock:(CDUnknownBlockType)arg2;

@end
