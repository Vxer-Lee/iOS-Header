//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NPSoftPaywallHeightProvider;

@interface FRSubscriptionPlacardCreator : NSObject
{
    NPSoftPaywallHeightProvider *_softPaywallHeightProvider;
}

@property(readonly, nonatomic) NPSoftPaywallHeightProvider *softPaywallHeightProvider; // @synthesize softPaywallHeightProvider=_softPaywallHeightProvider;
- (void).cxx_destruct;
- (id)layoutBlueprintForDiff:(id)arg1 blueprint:(id)arg2 appInterestController:(id)arg3 feed:(id)arg4 feedSettings:(id)arg5 context:(id)arg6;
- (id)initWithSoftPaywallHeightProvider:(id)arg1;

@end
