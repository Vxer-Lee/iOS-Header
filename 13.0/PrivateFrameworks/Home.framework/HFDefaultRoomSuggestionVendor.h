//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFRoomSuggestionVendor-Protocol.h>

@class NSSet, NSString, NSURL;

@interface HFDefaultRoomSuggestionVendor : NSObject <HFRoomSuggestionVendor>
{
    NSSet *_roomSuggestions;
    NSURL *_roomSuggestionsPlistURL;
}

+ (id)homeAppSuggestionVendor;
+ (id)TVAccessorySuggestionVendor;
@property(readonly, nonatomic) NSURL *roomSuggestionsPlistURL; // @synthesize roomSuggestionsPlistURL=_roomSuggestionsPlistURL;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSSet *roomSuggestions; // @synthesize roomSuggestions=_roomSuggestions;
- (id)prioritizedRoomSuggestions;
- (id)init;
- (id)initWithRoomSuggestionsPlistURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
