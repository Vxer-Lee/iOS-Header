//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RecentsItem-Protocol.h"

@class NSString, SearchResult;

__attribute__((visibility("hidden")))
@interface CustomSearchResultHistoryItem : NSObject <RecentsItem>
{
    SearchResult *_customSearchResult;
}

@property(readonly, nonatomic) SearchResult *customSearchResult; // @synthesize customSearchResult=_customSearchResult;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double timestamp;
- (id)initWithSearchResult:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
