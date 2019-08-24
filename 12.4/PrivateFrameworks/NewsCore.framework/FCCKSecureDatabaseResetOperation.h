//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCKPrivateDatabase;

@interface FCCKSecureDatabaseResetOperation : FCOperation
{
    _Bool _deleteZones;
    _Bool _restoreSecureSentinel;
    _Bool _restoreZoneContents;
    FCCKPrivateDatabase *_database;
    CDUnknownBlockType _resetCompletionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType resetCompletionHandler; // @synthesize resetCompletionHandler=_resetCompletionHandler;
@property(nonatomic) _Bool restoreZoneContents; // @synthesize restoreZoneContents=_restoreZoneContents;
@property(nonatomic) _Bool restoreSecureSentinel; // @synthesize restoreSecureSentinel=_restoreSecureSentinel;
@property(nonatomic) _Bool deleteZones; // @synthesize deleteZones=_deleteZones;
@property(retain, nonatomic) FCCKPrivateDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (id)_rawRecordsToSave;
- (id)_rawZonesToRecreate;
- (id)_rawZoneIDsToDelete;
- (id)_restoreZoneContents;
- (id)_restoreSecureSentinel;
- (id)_recreateZones;
- (id)_deleteZones;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;
- (id)init;

@end
