//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface HMCameraClipDecryptionManager : NSObject
{
    NSData *_key;
}

@property(readonly, copy) NSData *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)dataFromEncryptedDataContext:(id)arg1;
- (id)initWithKey:(id)arg1;

@end

