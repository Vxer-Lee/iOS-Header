//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTNotification.h>

@class RTScenarioTrigger;

@interface RTScenarioTriggerNotification : RTNotification
{
    RTScenarioTrigger *_scenarioTrigger;
}

@property(readonly, nonatomic) RTScenarioTrigger *scenarioTrigger; // @synthesize scenarioTrigger=_scenarioTrigger;
- (void).cxx_destruct;
- (id)initWithScenarioTrigger:(id)arg1;

@end

