//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PencilKit/NSObject-Protocol.h>

@class NSSet, UIEvent, UITouch;

@protocol PKDrawingGestureTarget <NSObject>
- (void)drawingEstimatedPropertiesUpdated:(NSSet *)arg1;
- (void)drawingCancelled;
- (void)drawingEnded:(UITouch *)arg1;
- (void)drawingMoved:(UITouch *)arg1 withEvent:(UIEvent *)arg2;
- (void)drawingBegan:(UITouch *)arg1;

@optional
- (_Bool)drawingShouldBegin:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
@end
