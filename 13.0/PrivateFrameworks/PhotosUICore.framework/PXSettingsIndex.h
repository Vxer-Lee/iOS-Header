//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PXSettingsIndex : NSObject
{
    NSArray *_entries;
}

+ (id)_entriesForSettingsController:(id)arg1 usingProgress:(id)arg2;
+ (id)createIndexForSettings:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSArray *entries; // @synthesize entries=_entries;
- (void).cxx_destruct;
- (id)searchForText:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (id)_initWithEntries:(id)arg1;
- (id)init;

@end
