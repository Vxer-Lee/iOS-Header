//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SignpostSupportMessageArgument : NSObject
{
    unsigned char _type;
    NSObject *_argumentObject;
}

@property(readonly, nonatomic) NSObject *argumentObject; // @synthesize argumentObject=_argumentObject;
@property(readonly, nonatomic) unsigned char type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithArgumentObject:(id)arg1;

@end
