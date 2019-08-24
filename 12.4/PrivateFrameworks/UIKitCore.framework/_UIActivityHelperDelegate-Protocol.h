//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, NSString, _UIActivityHelper, _UIActivityMatchingContext;

@protocol _UIActivityHelperDelegate <NSObject>
- (_Bool)activityHelper:(_UIActivityHelper *)arg1 matchingWithContext:(_UIActivityMatchingContext *)arg2 shouldIncludeSystemActivityType:(NSString *)arg3;

@optional
- (NSArray *)activityHelper:(_UIActivityHelper *)arg1 activitiesForActivityType:(NSString *)arg2 matchingContext:(_UIActivityMatchingContext *)arg3;
@end
