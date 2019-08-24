//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCDependencyReader.h>

@class NSMutableDictionary;

@interface MCDependencyManager : MCDependencyReader
{
    NSMutableDictionary *_memberQueueSystemOrphansDict;
    NSMutableDictionary *_memberQueueUserOrphansDict;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableDictionary *memberQueueUserOrphansDict; // @synthesize memberQueueUserOrphansDict=_memberQueueUserOrphansDict;
@property(retain, nonatomic) NSMutableDictionary *memberQueueSystemOrphansDict; // @synthesize memberQueueSystemOrphansDict=_memberQueueSystemOrphansDict;
- (void).cxx_destruct;
- (void)removeDependent:(id)arg1 fromParent:(id)arg2 inDomain:(id)arg3 reciprocalDomain:(id)arg4 fromSystem:(_Bool)arg5 user:(_Bool)arg6;
- (void)removeDependent:(id)arg1 fromParent:(id)arg2 inDomain:(id)arg3 reciprocalDomain:(id)arg4;
- (void)addDependent:(id)arg1 ofParent:(id)arg2 inDomain:(id)arg3 reciprocalDomain:(id)arg4 toSystem:(_Bool)arg5 user:(_Bool)arg6;
- (void)addDependent:(id)arg1 ofParent:(id)arg2 inDomain:(id)arg3 reciprocalDomain:(id)arg4;
- (void)memberQueueRemoveDependent:(id)arg1 fromParent:(id)arg2 inDomain:(id)arg3 fromSystem:(_Bool)arg4 user:(_Bool)arg5;
- (void)memberQueueRemoveDependent:(id)arg1 fromParent:(id)arg2 inDomain:(id)arg3;
- (void)removeDependent:(id)arg1 fromParent:(id)arg2 inDomain:(id)arg3 fromSystem:(_Bool)arg4 user:(_Bool)arg5;
- (void)removeDependent:(id)arg1 fromParent:(id)arg2 inDomain:(id)arg3;
- (void)memberQueueAddDependent:(id)arg1 toParent:(id)arg2 inDomain:(id)arg3 toSystem:(_Bool)arg4 user:(_Bool)arg5;
- (void)memberQueueAddDependent:(id)arg1 toParent:(id)arg2 inDomain:(id)arg3;
- (void)addDependent:(id)arg1 ofParent:(id)arg2 inDomain:(id)arg3 toSystem:(_Bool)arg4 user:(_Bool)arg5;
- (void)addDependent:(id)arg1 ofParent:(id)arg2 inDomain:(id)arg3;
- (id)memberQueueOrphanedParentsInUserDomain:(id)arg1;
- (id)memberQueueOrphanedParentsInSystemDomain:(id)arg1;
- (id)orphanedParentsForUserDomain:(id)arg1;
- (id)orphanedParentsForSystemDomain:(id)arg1;
- (id)orphanedParentsForDomain:(id)arg1;
- (void)memberQueueRemoveOrphanParent:(id)arg1 inDomain:(id)arg2 fromSystem:(_Bool)arg3 user:(_Bool)arg4;
- (void)memberQueueAddOrphanParent:(id)arg1 inDomain:(id)arg2 toSystem:(_Bool)arg3 user:(_Bool)arg4;
- (void)commitChangesCompletion:(CDUnknownBlockType)arg1;
- (void)commitChanges;
- (id)_init;
- (id)init;

@end
