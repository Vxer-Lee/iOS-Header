//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/PMLTransformerProtocol-Protocol.h>

@class NSArray, NSDictionary;

@interface SGStringLabellingTransformer : NSObject <PMLTransformerProtocol>
{
    NSArray *_methods;
    NSDictionary *_labelDictionary;
}

+ (id)withLabelStrings:(id)arg1;
- (void).cxx_destruct;
- (id)transform:(id)arg1;
- (id)initWithLabelStrings:(id)arg1;

@end
