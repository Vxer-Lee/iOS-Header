//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AAResponse.h>

@class FAFamilyCreditCard;

@interface FAFamilyPaymentInfoResponse : AAResponse
{
    FAFamilyCreditCard *_creditCard;
}

@property(retain, nonatomic) FAFamilyCreditCard *creditCard; // @synthesize creditCard=_creditCard;
- (void).cxx_destruct;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end
