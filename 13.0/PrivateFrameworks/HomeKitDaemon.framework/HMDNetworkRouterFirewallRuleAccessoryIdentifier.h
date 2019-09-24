//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class HMFVersion, NSString;

@interface HMDNetworkRouterFirewallRuleAccessoryIdentifier : HMFObject <NSCopying>
{
    NSString *_productGroup;
    NSString *_productNumber;
    HMFVersion *_firmwareVersion;
}

+ (id)createWithProductData:(id)arg1 firmwareVersion:(id)arg2;
+ (id)identifierFromRecordID:(id)arg1;
@property(readonly, nonatomic) HMFVersion *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property(readonly, nonatomic) NSString *productNumber; // @synthesize productNumber=_productNumber;
@property(readonly, nonatomic) NSString *productGroup; // @synthesize productGroup=_productGroup;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3;
- (id)cloudKitRecordID;
@property(readonly, nonatomic) NSString *cloudKitRecordName;
@property(readonly, nonatomic) NSString *cloudKitZoneName;

@end
