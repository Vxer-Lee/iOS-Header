//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarPlaySupport/CPListDataSource-Protocol.h>
#import <CarPlaySupport/UITableViewDataSource-Protocol.h>

@class NSArray, NSString, UITableView;

@interface CPSDataSource : NSObject <CPListDataSource, UITableViewDataSource>
{
    UITableView *_tableView;
    long long _rowAnimation;
    CDUnknownBlockType _cellConfigureBlock;
    Class _cellClass;
}

@property(nonatomic) __weak Class cellClass; // @synthesize cellClass=_cellClass;
@property(copy, nonatomic) CDUnknownBlockType cellConfigureBlock; // @synthesize cellConfigureBlock=_cellConfigureBlock;
@property(nonatomic) long long rowAnimation; // @synthesize rowAnimation=_rowAnimation;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)reloadData;
- (void)deleteSectionsAtIndexes:(id)arg1;
- (void)insertSectionsAtIndexes:(id)arg1;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)reloadItemsAtIndexPaths:(id)arg1;
- (void)deleteItemsAtIndexPaths:(id)arg1;
- (void)insertItemsAtIndexPaths:(id)arg1;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(readonly, nonatomic) NSArray *items;
- (long long)numberOfItemsInSection:(long long)arg1;
@property(readonly, nonatomic) long long numberOfSections;
- (id)itemAtIndexPath:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
