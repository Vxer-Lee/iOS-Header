//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/FPOperation.h>

@class CSSearchableIndex, NSString;

__attribute__((visibility("hidden")))
@interface FPXFetchClientStateOperation : FPOperation
{
    CSSearchableIndex *_index;
    NSString *_indexName;
}

+ (id)_currentIndexerVersion;
- (void).cxx_destruct;
- (void)main;
- (void)_fetchClientState;
- (void)_handleFetchedClientState:(id)arg1 error:(id)arg2;
- (void)_markClientStateResetDone;
- (_Bool)_clientStateResetNeeded;
- (id)initWithIndex:(id)arg1 indexName:(id)arg2;

@end

