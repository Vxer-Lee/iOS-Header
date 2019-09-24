//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarDaemon/CADOperationGroup.h>

#import <CalendarDaemon/CADInternalInterface-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CADInternalOperationGroup : CADOperationGroup <CADInternalInterface>
{
}

+ (_Bool)requiresEventOrReminderAccess;
+ (_Bool)requiresReminderAccess;
+ (_Bool)requiresEventAccess;
- (void)CADInternalForceStatCollection:(CDUnknownBlockType)arg1;
- (_Bool)_internalAccessGranted;
- (_Bool)accessGrantedToPerformSelector:(SEL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
