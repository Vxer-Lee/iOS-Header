//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/NSObject-Protocol.h>

@class NSFileWrapper, NSString, SBFFileCache;

@protocol SBFFileCacheStore <NSObject>
- (void)removeAllFileWrappersForFileCache:(SBFFileCache *)arg1;
- (void)fileCache:(SBFFileCache *)arg1 removeFileWrapperNamed:(NSString *)arg2;
- (NSFileWrapper *)fileCache:(SBFFileCache *)arg1 loadFileWrapperNamed:(NSString *)arg2;
- (void)fileCache:(SBFFileCache *)arg1 storeFileWrapper:(NSFileWrapper *)arg2;
@end
