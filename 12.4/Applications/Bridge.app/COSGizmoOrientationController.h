//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class NPSDomainAccessor, NPSManager;

@interface COSGizmoOrientationController : PSListController
{
    NPSDomainAccessor *_domainAccessor;
    NPSManager *_syncManager;
}

+ (id)wristChoice;
@property(retain, nonatomic) NPSManager *syncManager; // @synthesize syncManager=_syncManager;
@property(retain, nonatomic) NPSDomainAccessor *domainAccessor; // @synthesize domainAccessor=_domainAccessor;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)specifiers;
- (void)handleDidUnpair;
- (void)dealloc;
- (id)init;

@end
