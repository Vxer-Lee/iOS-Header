//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PushMessageConsumer-Protocol.h"

@class NSString;

@interface PushDiagnostic : NSObject <PushMessageConsumer>
{
}

- (void)pushService:(id)arg1 didReceiveMessage:(id)arg2;
- (id)initWithService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
