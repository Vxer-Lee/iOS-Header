//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface RKMontrealModel : NSObject
{
    void *_model;
}

+ (id)pathForLanguage:(id)arg1;
+ (id)modelForLanguage:(id)arg1;
@property(readonly, nonatomic) void *model; // @synthesize model=_model;
- (void)reset;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end
