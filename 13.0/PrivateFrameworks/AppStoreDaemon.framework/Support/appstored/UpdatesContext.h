//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, XPCRequestToken;

@interface UpdatesContext : NSObject
{
    _Bool _includeMetrics;
    _Bool _isVPPLookup;
    _Bool _userInitiated;
    CDUnknownBlockType _callbackHandler;
    long long _reason;
    XPCRequestToken *_requestToken;
    NSMutableSet *_offloadedBundleIDs;
    NSMutableSet *_perDeviceBundleIDs;
}

+ (id)contextWithReason:(long long)arg1;
@property(readonly) NSMutableSet *perDeviceBundleIDs; // @synthesize perDeviceBundleIDs=_perDeviceBundleIDs;
@property(readonly) NSMutableSet *offloadedBundleIDs; // @synthesize offloadedBundleIDs=_offloadedBundleIDs;
@property _Bool userInitiated; // @synthesize userInitiated=_userInitiated;
@property(retain) XPCRequestToken *requestToken; // @synthesize requestToken=_requestToken;
@property long long reason; // @synthesize reason=_reason;
@property _Bool isVPPLookup; // @synthesize isVPPLookup=_isVPPLookup;
@property _Bool includeMetrics; // @synthesize includeMetrics=_includeMetrics;
@property(copy, nonatomic) CDUnknownBlockType callbackHandler; // @synthesize callbackHandler=_callbackHandler;
- (void).cxx_destruct;
@property(readonly) _Bool shouldPerformUpdates;
@property(readonly) _Bool isBackgroundRequest;
- (id)humanReadableReason;
- (id)init;

@end
