//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _UIStatesFeedbackGenerator;

@interface _UITapticEngine : NSObject
{
    _Bool _feedbackActivated;
    _UIStatesFeedbackGenerator *_feedbackGenerator;
}

@property(nonatomic) _Bool feedbackActivated; // @synthesize feedbackActivated=_feedbackActivated;
@property(retain, nonatomic) _UIStatesFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
- (void).cxx_destruct;
- (id)_stateForFeedback:(long long)arg1;
- (void)actuateFeedback:(long long)arg1;
- (void)endUsingFeedback:(long long)arg1;
- (void)prepareUsingFeedback:(long long)arg1;
- (id)init;

@end
