//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/QLPXNumberFilter.h>

__attribute__((visibility("hidden")))
@interface QLPXInitialHysteresisNumberFilter : QLPXNumberFilter
{
    _Bool _didReachThreshold;
    double _offset;
    double _hysteresis;
}

@property(nonatomic) double hysteresis; // @synthesize hysteresis=_hysteresis;
@property(readonly, nonatomic) double outputDerivative;
- (double)updatedOutput;

@end

