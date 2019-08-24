//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoPassKit/NPKPaymentProvisioningFlowControllerDelegate-Protocol.h>

@class NPKPaymentProvisioningFlowController, NSString;

@interface NPKPaymentProvisioningFlowTest : NSObject <NPKPaymentProvisioningFlowControllerDelegate>
{
    NPKPaymentProvisioningFlowController *_flowController;
}

@property(retain, nonatomic) NPKPaymentProvisioningFlowController *flowController; // @synthesize flowController=_flowController;
- (void).cxx_destruct;
- (void)_handleProvisioningResultStepWithContext:(id)arg1;
- (void)_handleProvisioningProgressStepWithContext:(id)arg1;
- (void)_handleTermsAndConditionsStepWithContext:(id)arg1;
- (void)_handleManualEntryStepWithContext:(id)arg1;
- (void)_handleRemoteCredentialsStepWithContext:(id)arg1;
- (void)_handleWelcomeStepWithContext:(id)arg1;
- (void)_handlePreconditionsStep;
- (void)paymentProvisioningFlowController:(id)arg1 didTransitionFromStep:(unsigned long long)arg2 toStep:(unsigned long long)arg3 withContext:(id)arg4;
- (void)startTest;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
