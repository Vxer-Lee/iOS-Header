//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDSFoundation/IDSCKDatabaseOperation.h>

@interface IDSCKModifyRecordsOperation : IDSCKDatabaseOperation
{
    CDUnknownBlockType _modifyRecordsCompletionBlock;
    long long _savePolicy;
}

+ (id)alloc;
+ (Class)__class;
@property(nonatomic) long long savePolicy; // @synthesize savePolicy=_savePolicy;
@property(copy, nonatomic) CDUnknownBlockType modifyRecordsCompletionBlock; // @synthesize modifyRecordsCompletionBlock=_modifyRecordsCompletionBlock;
- (void).cxx_destruct;

@end
