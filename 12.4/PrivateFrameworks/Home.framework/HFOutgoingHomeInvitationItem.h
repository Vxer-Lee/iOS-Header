//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

#import <Home/HFHomeKitItemProtocol-Protocol.h>
#import <Home/NSCopying-Protocol.h>

@class HMOutgoingHomeInvitation, NSString;
@protocol HFHomeKitObject;

@interface HFOutgoingHomeInvitationItem : HFItem <HFHomeKitItemProtocol, NSCopying>
{
    HMOutgoingHomeInvitation *_outgoingInvitation;
}

@property(readonly, nonatomic) HMOutgoingHomeInvitation *outgoingInvitation; // @synthesize outgoingInvitation=_outgoingInvitation;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
- (id)initWithOutgoingInvitation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
