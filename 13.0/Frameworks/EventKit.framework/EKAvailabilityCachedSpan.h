//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EKAvailabilitySpan, NSDate;

__attribute__((visibility("hidden")))
@interface EKAvailabilityCachedSpan : NSObject
{
    NSDate *_creationDate;
    EKAvailabilitySpan *_span;
}

@property(retain, nonatomic) EKAvailabilitySpan *span; // @synthesize span=_span;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSpan:(id)arg1;

@end

