//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOMapItemChildAction, GEOMapItemChildPlace;

@interface GEOMapItemChildItem : NSObject
{
    long long _childItemType;
    GEOMapItemChildPlace *_childItemPlace;
    GEOMapItemChildAction *_childItemAction;
}

@property(retain, nonatomic) GEOMapItemChildAction *childItemAction; // @synthesize childItemAction=_childItemAction;
@property(retain, nonatomic) GEOMapItemChildPlace *childItemPlace; // @synthesize childItemPlace=_childItemPlace;
@property(nonatomic) long long childItemType; // @synthesize childItemType=_childItemType;
- (void).cxx_destruct;
- (id)initWithChildPlace:(id)arg1;
- (id)initWithChildItem:(id)arg1;

@end
