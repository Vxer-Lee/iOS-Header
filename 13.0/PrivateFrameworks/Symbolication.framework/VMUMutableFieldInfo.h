//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Symbolication/VMUFieldInfo.h>

@class NSString, VMUClassInfo;

@interface VMUMutableFieldInfo : VMUFieldInfo
{
}

- (void)addSubField:(id)arg1;
- (_Bool)replaceFieldRecursively:(id)arg1 withField:(id)arg2;
- (void)mutateTypeFieldsRecursivelyWithBlock:(CDUnknownBlockType)arg1 parentOffset:(unsigned int)arg2;
@property(retain, nonatomic) VMUClassInfo *destinationLayout; // @dynamic destinationLayout;
@property(nonatomic) unsigned int stride; // @dynamic stride;
@property(nonatomic) unsigned int scannableSize; // @dynamic scannableSize;
@property(nonatomic) unsigned int flags; // @dynamic flags;
@property(nonatomic) _Bool isCapture; // @dynamic isCapture;
@property(nonatomic) _Bool isByref; // @dynamic isByref;
- (void)setSize:(unsigned int)arg1;
- (void)setOffset:(unsigned int)arg1;
@property(nonatomic) unsigned int scanType; // @dynamic scanType;
- (void)setTypeName:(id)arg1;
@property(copy, nonatomic) NSString *ivarName; // @dynamic ivarName;

@end
