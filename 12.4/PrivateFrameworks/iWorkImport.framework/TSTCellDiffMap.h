//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class NSMutableArray, TSTCellUIDList;

__attribute__((visibility("hidden")))
@interface TSTCellDiffMap : TSPObject <NSCopying>
{
    vector_38b190b0 _cellIDs;
    _Bool _uidBased;
    TSTCellUIDList *_cellUIDList;
    NSMutableArray *_mutableDiffList;
}

+ (id)cellDiffMapWithContext:(id)arg1;
@property(nonatomic, getter=isUIDBased) _Bool uidBased; // @synthesize uidBased=_uidBased;
@property(retain, nonatomic) NSMutableArray *mutableDiffList; // @synthesize mutableDiffList=_mutableDiffList;
@property(retain, nonatomic) TSTCellUIDList *cellUIDList; // @synthesize cellUIDList=_cellUIDList;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)p_copyAndAddCellDiff:(id)arg1 andCellUID:(struct TSTCellUID)arg2;
- (void)enumerateCellIDElementsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateElementsUsingBlock:(CDUnknownBlockType)arg1;
- (id)cellDiffMapByRemovingColumns:(const vector_4dc5f307 *)arg1;
- (id)cellDiffMapByRemovingRows:(const vector_4dc5f307 *)arg1;
- (id)cellDiffMapByIntersectingUIDs:(const vector_4dc5f307 *)arg1 inRows:(_Bool)arg2;
- (const vector_38b190b0 *)cellIDs;
- (void)p_resolveCellIDsToUUIDsByTableInfo:(id)arg1;
- (id)uuidBasedCellDiffMapByTableInfo:(id)arg1;
- (id)pruneCellDiffMapAgainstTable:(id)arg1 behavior:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)pruneCellDiffMapAgainstTable:(id)arg1 behavior:(unsigned long long)arg2;
- (void)addCellDiff:(id)arg1 andCellID:(struct TSUCellCoord)arg2;
- (void)addCellDiff:(id)arg1 andCellUID:(struct TSTCellUID)arg2;
@property(readonly, nonatomic) unsigned long long count;
- (void)dealloc;
- (id)initWithContext:(id)arg1 cellDiffArray:(id)arg2 cellUIDList:(id)arg3 uidBased:(_Bool)arg4;
- (id)initWithContext:(id)arg1 cellDiff:(id)arg2 cellUIDList:(id)arg3;
- (id)initWithContext:(id)arg1;

@end
