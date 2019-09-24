//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNObserver-Protocol.h>

@class NSString;
@protocol CNObserver, _CNAmbObserverDelegate;

@interface _CNAmbObserver : NSObject <CNObserver>
{
    id <CNObserver> _observer;
    id <_CNAmbObserverDelegate> _delegate;
    _Bool _isWinner;
}

- (void).cxx_destruct;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidComplete;
- (void)observerDidReceiveResult:(id)arg1;
- (void)declareWinner;
- (id)initWithObserver:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
