//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSOperationQueue, SKUIDonationConfiguration, SKUIDonationViewController, SKUIGiftCharity;

@interface SKUIDonationStepViewController : UIViewController
{
    SKUIGiftCharity *_charity;
    SKUIDonationConfiguration *_configuration;
    NSOperationQueue *_operationQueue;
}

@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) SKUIDonationConfiguration *donationConfiguration; // @synthesize donationConfiguration=_configuration;
@property(readonly, nonatomic) SKUIGiftCharity *charity; // @synthesize charity=_charity;
- (void).cxx_destruct;
@property(readonly, nonatomic) SKUIDonationViewController *donationViewController;
- (id)initWithCharity:(id)arg1 configuration:(id)arg2;

@end
