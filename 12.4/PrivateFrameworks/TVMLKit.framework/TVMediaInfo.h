//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVMLKit/NSCopying-Protocol.h>

@class NSArray, TVPlaylist, UIView;

@interface TVMediaInfo : NSObject <NSCopying>
{
    long long _intent;
    UIView *_contentView;
    NSArray *_imageProxies;
    TVPlaylist *_playlist;
    UIView *_overlayView;
}

@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) TVPlaylist *playlist; // @synthesize playlist=_playlist;
@property(copy, nonatomic) NSArray *imageProxies; // @synthesize imageProxies=_imageProxies;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) long long intent; // @synthesize intent=_intent;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
