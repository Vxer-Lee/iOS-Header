//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NLLexiconCompletion : NSObject
{
    unsigned int _tokenID;
    double _score;
}

- (double)score;
- (unsigned int)tokenID;
- (id)description;
- (id)initWithTokenID:(unsigned int)arg1 score:(double)arg2;

@end
