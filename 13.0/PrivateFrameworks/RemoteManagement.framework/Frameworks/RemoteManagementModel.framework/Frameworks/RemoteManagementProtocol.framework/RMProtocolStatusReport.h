//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSArray;

@interface RMProtocolStatusReport : RMModelPayloadBase
{
    NSArray *_requestItems;
}

+ (id)requestWithItems:(id)arg1;
+ (id)loadData:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;
+ (id)loadArray:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;
@property(copy, nonatomic) NSArray *requestItems; // @synthesize requestItems=_requestItems;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithType:(short)arg1;
- (_Bool)loadPayload:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;
- (id)serializeAsDataWithType:(short)arg1 error:(id *)arg2;
- (id)serializeItemsWithType:(short)arg1;
- (_Bool)loadItems:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;

@end

