//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VUIUpNextRequestManager : NSObject
{
    NSMutableDictionary *_ongoingCanonicalIDOperationDictionary;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *ongoingCanonicalIDOperationDictionary; // @synthesize ongoingCanonicalIDOperationDictionary=_ongoingCanonicalIDOperationDictionary;
- (void).cxx_destruct;
- (void)sendRequestForCanonicalID:(id)arg1 action:(unsigned long long)arg2;
- (id)init;
- (id)_init;

@end
