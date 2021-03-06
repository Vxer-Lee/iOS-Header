//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCACAccountPayloadHandler.h"

#import "ASPolicyPreflighterDelegate-Protocol.h"
#import "DAValidityCheckConsumer-Protocol.h"

@class ACAccountCredential, ASAccount, DAAccount, NSData, NSDictionary, NSError, NSObject, NSString;
@protocol OS_dispatch_semaphore;

@interface MCNewEASAccountPayloadHandler : MCACAccountPayloadHandler <DAValidityCheckConsumer, ASPolicyPreflighterDelegate>
{
    NSObject<OS_dispatch_semaphore> *_validationSema;
    _Bool _validationComplete;
    NSError *_validationError;
    NSObject<OS_dispatch_semaphore> *_preflightSema;
    _Bool _policyPreflightComplete;
    NSError *_policyPreflightError;
    NSDictionary *_policyPreflightFeatures;
    NSData *_embeddedCertificatePersistentID;
    ASAccount *_account;
    DAAccount *_setAsideDAAccount;
    ACAccountCredential *_setAsideAccountCredential;
}

@property(retain, nonatomic) ACAccountCredential *setAsideAccountCredential; // @synthesize setAsideAccountCredential=_setAsideAccountCredential;
@property(retain, nonatomic) DAAccount *setAsideDAAccount; // @synthesize setAsideDAAccount=_setAsideDAAccount;
- (void).cxx_destruct;
- (void)preflighter:(id)arg1 error:(id)arg2;
- (void)preflighterAccountOnlyRemoteWipeRequestResponseAcknowledged:(id)arg1;
- (void)preflighterAccountOnlyRemoteWipeRequested:(id)arg1;
- (void)preflighterRemoteWipeRequestResponseAcknowledged:(id)arg1;
- (void)preflighterRemoteWipeRequested:(id)arg1;
- (void)preflighter:(id)arg1 successWithMCFeatures:(id)arg2 perAccountPolicies:(id)arg3 policyKey:(id)arg4;
- (void)preflighter:(id)arg1 needsComplianceWithMCFeatures:(id)arg2 perAccountPolicies:(id)arg3;
- (void)preflighterSuccessWithoutPolicyUpdate:(id)arg1;
- (void)remove;
- (void)unsetAside;
- (void)setAsideWithInstaller:(id)arg1;
- (_Bool)isInstalled;
- (id)accountTypeIdentifiers;
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;
- (void)unstageFromInstallationWithInstaller:(id)arg1;
- (_Bool)stageForInstallationWithInstaller:(id)arg1 interactionClient:(id)arg2 outError:(id *)arg3;
- (id)_getClientRestrictionsFromServerCertificatePersistentID:(id)arg1 SMIMESigningIdentityPersistentID:(id)arg2 SMIMEEncryptionIdentityPersistentID:(id)arg3 outError:(id *)arg4;
- (void)_preflightWithPreflighter:(id)arg1;
- (id)_errorFromPolicyPreflightError:(id)arg1;
- (_Bool)preflightUserInputResponses:(id)arg1 outError:(id *)arg2;
- (_Bool)_isConfiguredWithSCEP;
- (id)_installTimePersistentIDForIdentityCertificateOutError:(id *)arg1;
- (id)_preflightTimePersistentIDForIdentityCertificateUserInputResponses:(id)arg1 outError:(id *)arg2;
- (void)_preflightWithAccount:(id)arg1;
- (void)account:(id)arg1 isValid:(_Bool)arg2 validationError:(id)arg3;
- (id)_errorFromValidationError:(id)arg1;
- (id)_accountFromPayloadWithUserInputResponses:(id)arg1 identityPersistentID:(id)arg2 SMIMESigningIdentityPersistentID:(id)arg3 SMIMEEncryptionIdentityPersistentID:(id)arg4;
- (id)unhashedAccountIdentifier;
- (void)setUserInputResponses:(id)arg1;
- (id)userInputFields;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

