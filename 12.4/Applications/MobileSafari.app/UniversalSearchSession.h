//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebUI/WBSParsecDSession.h>

@class WBSParsecDFeedbackDispatcher;

@interface UniversalSearchSession : WBSParsecDSession
{
}

+ (_Bool)shouldUseSearchFoundation;
+ (id)sharedSession;
- (void)session:(id)arg1 bag:(id)arg2 didLoadWithError:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) WBSParsecDFeedbackDispatcher *feedbackDispatcher; // @dynamic feedbackDispatcher;

@end
