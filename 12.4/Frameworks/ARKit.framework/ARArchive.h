//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface ARArchive : NSObject
{
    NSMutableDictionary *_dataByPath;
}

- (void).cxx_destruct;
- (_Bool)_readDataForEntry:(struct archive_entry *)arg1 archive:(struct archive *)arg2;
- (_Bool)_loadArchiveFromURL:(id)arg1 error:(id *)arg2;
- (_Bool)writeToURL:(id)arg1 error:(id *)arg2;
- (id)dataForResourceAtPath:(id)arg1;
- (id)dataForResource:(id)arg1 withExtension:(id)arg2;
- (void)addData:(id)arg1 withPath:(id)arg2;
- (void)addData:(id)arg1 withFilename:(id)arg2 extension:(id)arg3;
@property(readonly, copy, nonatomic) NSArray *filePaths;
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;
- (id)init;

@end
