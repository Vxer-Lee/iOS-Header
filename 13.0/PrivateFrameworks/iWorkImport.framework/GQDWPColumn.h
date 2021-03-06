//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GQDWPColumn : NSObject
{
    long long mIndex;
    float mWidth;
    float mSpacing;
    _Bool mHasSpacing;
}

+ (const struct StateSpec *)stateForReading;
- (float)spacing;
- (_Bool)hasSpacing;
- (float)width;
- (long long)index;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;

@end

