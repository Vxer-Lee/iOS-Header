//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SASStartSpeechRequest.h>

@class NSString;

@interface SASStartStructuredDictationSpeechRequest : SASStartSpeechRequest
{
}

+ (id)startStructuredDictationSpeechRequestWithDictionary:(id)arg1 context:(id)arg2;
+ (id)startStructuredDictationSpeechRequest;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *structuredDictationType;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
