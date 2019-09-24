//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Transparency/GPBMessage.h>

#import <Transparency/TransparencyVerifiable-Protocol.h>

@class MapHead, NSData, Signature, TransparencySignatureVerifier;

@interface SignedMapHead : GPBMessage <TransparencyVerifiable>
{
}

+ (id)descriptor;
- (_Bool)verifyWithError:(id *)arg1;
@property(readonly) MapHead *parsedMapHead;
@property(retain) TransparencySignatureVerifier *verifier;

// Remaining properties
@property(nonatomic) _Bool hasSignature; // @dynamic hasSignature;
@property(copy, nonatomic) NSData *mapHead; // @dynamic mapHead;
@property(retain, nonatomic) Signature *signature; // @dynamic signature;

@end
