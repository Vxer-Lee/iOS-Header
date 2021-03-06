//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableArray;

@interface PKCloudRecordArray : NSObject <NSSecureCoding>
{
    NSMutableArray *_cloudRecords;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (void)addValuesFromCloudRecordArray:(id)arg1;
- (id)allRecordNames;
- (id)allItems;
@property(readonly, nonatomic) NSArray *cloudRecords;
- (void)addCloudRecord:(id)arg1;
- (id)_descriptionWithDetailedOutput:(_Bool)arg1 includeItem:(_Bool)arg2;
- (id)description;
- (id)descriptionWithItem:(_Bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)filteredCloudRecordArrayWithPredicate:(id)arg1;
- (id)init;

@end

