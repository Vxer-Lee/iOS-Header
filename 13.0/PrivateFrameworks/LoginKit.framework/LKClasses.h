//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <LoginKit/LKClassProviding-Protocol.h>

@class NSArray, NSString;

@interface LKClasses : NSObject <LKClassProviding>
{
    NSArray *_classes;
}

@property(readonly, copy, nonatomic) NSArray *classes; // @synthesize classes=_classes;
- (void).cxx_destruct;
- (_Bool)isEqualToLKClasses:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithClassArray:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
