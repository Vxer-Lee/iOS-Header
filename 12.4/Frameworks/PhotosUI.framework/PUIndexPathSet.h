//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/NSCopying-Protocol.h>
#import <PhotosUI/NSMutableCopying-Protocol.h>

@interface PUIndexPathSet : NSObject <NSCopying, NSMutableCopying>
{
}

- (void)enumerateIndexPathsUsingBlock:(CDUnknownBlockType)arg1;
- (long long)count;
- (_Bool)containsIndexPath:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
