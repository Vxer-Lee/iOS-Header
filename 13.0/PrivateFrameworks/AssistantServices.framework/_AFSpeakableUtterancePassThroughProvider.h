//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFSpeakableNamespaceProvider-Protocol.h>

@class NSString;

@interface _AFSpeakableUtterancePassThroughProvider : NSObject <AFSpeakableNamespaceProvider>
{
}

- (id)stringForExpression:(id)arg1 containsPrivacySensitiveContents:(_Bool *)arg2;
- (id)stringForExpression:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

