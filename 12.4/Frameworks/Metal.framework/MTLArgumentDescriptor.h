//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Metal/NSCopying-Protocol.h>

@interface MTLArgumentDescriptor : NSObject <NSCopying>
{
}

+ (id)argumentDescriptor;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(nonatomic) unsigned long long access; // @dynamic access;
@property(nonatomic) unsigned long long arrayLength; // @dynamic arrayLength;
@property(nonatomic) unsigned long long constantBlockAlignment; // @dynamic constantBlockAlignment;
@property(nonatomic) unsigned long long dataType; // @dynamic dataType;
@property(nonatomic) unsigned long long index; // @dynamic index;
@property(nonatomic) unsigned long long textureType; // @dynamic textureType;

@end
