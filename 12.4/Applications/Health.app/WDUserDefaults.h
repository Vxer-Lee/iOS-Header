//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKHealthStore;

@interface WDUserDefaults : NSObject
{
    HKHealthStore *_healthStore;
}

@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
- (void).cxx_destruct;
- (void)valueForKey:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithHealthStore:(id)arg1;

@end
