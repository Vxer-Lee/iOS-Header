//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedElement-Protocol.h>

@class FCFeedRefreshSession, NSString;

@interface FCFeedViewportGap : NSObject <FCFeedElement>
{
    NSString *_identifier;
    FCFeedRefreshSession *_refreshSession;
}

+ (id)gapFromPBGap:(id)arg1;
+ (id)pbGapFromGap:(id)arg1 refreshSession:(id)arg2 sharedStringIndex:(id)arg3;
@property(readonly, nonatomic) FCFeedRefreshSession *refreshSession; // @synthesize refreshSession=_refreshSession;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)copyWithRefreshSession:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isGap;
@property(readonly, nonatomic) long long feedElementType;
- (id)initWithRefreshSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
