//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface FPArchiveTemporaryFolder : NSObject
{
    NSURL *_url;
    _Bool _didStartAccessing;
    NSURL *_temporaryFolderURL;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)temporaryFolderURLGetError:(id *)arg1;
- (id)initWithURL:(id)arg1;
- (id)init;

@end
