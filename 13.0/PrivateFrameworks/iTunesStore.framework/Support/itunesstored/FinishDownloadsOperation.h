//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class SSSQLitePredicate;

@interface FinishDownloadsOperation : ISOperation
{
    SSSQLitePredicate *_predicate;
}

- (void)run;
@property(readonly) SSSQLitePredicate *finishedDownloadPredicate;
- (void)dealloc;
- (id)initWithFinishedDownloadPredicate:(id)arg1;

@end

