//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/BOXModel.h>

@class NSArray, NSString;

@interface BOXMetadataTemplate : BOXModel
{
    NSString *_scope;
    NSString *_displayName;
    NSArray *_fields;
}

@property(retain, nonatomic) NSArray *fields; // @synthesize fields=_fields;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *scope; // @synthesize scope=_scope;
- (void).cxx_destruct;
- (id)initWithJSON:(id)arg1;

@end

