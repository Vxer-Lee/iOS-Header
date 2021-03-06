//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPMediaEntity, NSString;

@interface _MPMediaLibraryEntityChange : NSObject
{
    int _deletionType;
    MPMediaEntity *_entity;
    NSString *_anchor;
}

@property(readonly, nonatomic) int deletionType; // @synthesize deletionType=_deletionType;
@property(readonly, copy, nonatomic) NSString *anchor; // @synthesize anchor=_anchor;
@property(readonly, nonatomic) MPMediaEntity *entity; // @synthesize entity=_entity;
- (void).cxx_destruct;
- (id)initWithEntity:(id)arg1 anchor:(id)arg2 deletionType:(int)arg3;

@end

