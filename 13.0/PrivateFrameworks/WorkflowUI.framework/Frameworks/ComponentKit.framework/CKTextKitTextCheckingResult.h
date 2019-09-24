//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSTextCheckingResult.h>

@class CKTextKitEntityAttribute;

@interface CKTextKitTextCheckingResult : NSTextCheckingResult
{
    struct _NSRange _rangeOverride;
    unsigned long long _resultTypeOverride;
    CKTextKitEntityAttribute *_entityAttribute;
}

@property(readonly, nonatomic) CKTextKitEntityAttribute *entityAttribute; // @synthesize entityAttribute=_entityAttribute;
- (void).cxx_destruct;
- (struct _NSRange)range;
- (unsigned long long)resultType;
- (id)initWithType:(unsigned long long)arg1 entityAttribute:(id)arg2 range:(struct _NSRange)arg3;

@end
