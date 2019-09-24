//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VisualTestKit/VTKColorDifferenceStrategy-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VTKEuclideanStrategy : NSObject <VTKColorDifferenceStrategy>
{
}

- (double)differenceBetweenColor:(id)arg1 andColor:(id)arg2;
@property(readonly, nonatomic) double tolerance;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
