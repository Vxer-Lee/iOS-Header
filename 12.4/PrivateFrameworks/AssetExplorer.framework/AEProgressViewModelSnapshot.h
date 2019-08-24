//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, PXIndexPathSet;

__attribute__((visibility("hidden")))
@interface AEProgressViewModelSnapshot : NSObject
{
    unsigned long long _correspondingDataSourceIdentifier;
    NSDictionary *__progressByIndexPath;
    PXIndexPathSet *__pathsWithProgress;
}

@property(readonly, nonatomic) PXIndexPathSet *_pathsWithProgress; // @synthesize _pathsWithProgress=__pathsWithProgress;
@property(readonly, nonatomic) NSDictionary *_progressByIndexPath; // @synthesize _progressByIndexPath=__progressByIndexPath;
@property(readonly, nonatomic) unsigned long long correspondingDataSourceIdentifier; // @synthesize correspondingDataSourceIdentifier=_correspondingDataSourceIdentifier;
- (void).cxx_destruct;
- (id)progressForIndexPath:(struct PXSimpleIndexPath)arg1;
- (_Bool)hasProgressForIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)initWithProgressByIndexPath:(id)arg1 dataSourceIdenfitier:(unsigned long long)arg2;

@end
