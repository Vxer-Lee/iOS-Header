//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SilexVideo/NSObject-Protocol.h>

@protocol SVInteractionContext;

@protocol SVInteractionObserving <NSObject>
- (void)didHandleInteractionWithContext:(id <SVInteractionContext>)arg1;
- (void)willHandleInteractionWithContext:(id <SVInteractionContext>)arg1;
@end
