//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUICore/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol _SUICEditScriptData;

@protocol _SUICEditScriptData <NSObject>
+ (id <_SUICEditScriptData>)EditScriptDataWithArray:(NSArray *)arg1;
+ (id <_SUICEditScriptData>)EditScriptDataWithString:(NSString *)arg1 chunkSize:(long long)arg2;
- (long long)indexOfFirstDifferenceWithOtherData:(id <_SUICEditScriptData>)arg1 shouldReverseIterate:(_Bool)arg2 fallsOnWordBoundary:(_Bool *)arg3;
- (long long)characterIndexForItem:(long long)arg1;
- (long long)lengthOfItem:(long long)arg1;
- (NSString *)stringValue;
- (NSString *)stringAtIndex:(long long)arg1;
- (long long)length;
@end
