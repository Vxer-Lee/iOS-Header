//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_nw_path;

@interface CPLNetworkState : NSObject
{
    NSObject<OS_nw_path> *_networkPath;
}

@property(readonly, nonatomic) NSObject<OS_nw_path> *networkPath; // @synthesize networkPath=_networkPath;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)redactedDescription;
- (id)description;
@property(readonly, nonatomic, getter=isConstrained) _Bool constrained;
@property(readonly, nonatomic, getter=isCellular) _Bool cellular;
@property(readonly, nonatomic, getter=isConnected) _Bool connected;
- (id)initWithNetworkPath:(id)arg1;

@end
