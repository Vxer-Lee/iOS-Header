//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface NavContainerBannerAction : NSObject <NSCopying>
{
    _Bool _hidden;
    NSString *_title;
    CDUnknownBlockType _actionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
