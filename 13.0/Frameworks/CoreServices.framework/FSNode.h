//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreServices/NSCopying-Protocol.h>
#import <CoreServices/NSSecureCoding-Protocol.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface FSNode : NSObject <NSCopying, NSSecureCoding>
{
    NSURL *_url;
    unsigned long long _cacheExpiration;
    unsigned int _isDirectory:2;
    unsigned int _hasReferringAliasNode:1;
    unsigned int _canUseFileCache:1;
    unsigned int _isInitialized:1;
}

+ (_Bool)supportsSecureCoding;
+ (id)_resolvedNodeFromAliasFile:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;
+ (id)_resolvedURLFromAliasFile:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;
+ (id)rootVolumeNode;
+ (_Bool)canReadMetadataOfURL:(id)arg1 fromSandboxWithAuditToken:(const CDStruct_4c969caf *)arg2;
+ (_Bool)canWriteURL:(id)arg1 fromSandboxWithAuditToken:(const CDStruct_4c969caf *)arg2;
+ (_Bool)canReadURL:(id)arg1 fromSandboxWithAuditToken:(const CDStruct_4c969caf *)arg2;
+ (_Bool)canAccessURL:(id)arg1 fromSandboxWithAuditToken:(const CDStruct_4c969caf *)arg2 operation:(const char *)arg3;
+ (_Bool)getFileSystemRepresentation:(char [1024])arg1 forBookmarkData:(id)arg2;
+ (_Bool)isBookmarkDataFull:(id)arg1;
+ (_Bool)getVolumeIdentifier:(unsigned long long *)arg1 forBookmarkData:(id)arg2 error:(id *)arg3;
+ (id)nameForBookmarkData:(id)arg1 error:(id *)arg2;
+ (id)pathForBookmarkData:(id)arg1 error:(id *)arg2;
+ (unsigned char)compareBookmarkData:(id)arg1 toBookmarkData:(id)arg2;
+ (id)injectSimulatorRootIntoBookmarkData:(id)arg1;
+ (id)removeSimulatorRootFromBookmarkData:(id)arg1;
+ (id)simulatorRootPath;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)redactedDescription;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)prepareForReuse;
- (id)initWithURL:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;
- (id)initTemporaryNodeOnVolume:(id)arg1 flags:(unsigned int)arg2 fileDescriptor:(int *)arg3 error:(id *)arg4;
- (id)initWithConfigurationString:(int)arg1 flags:(unsigned int)arg2 error:(id *)arg3;
- (id)initWithDirectory:(unsigned long long)arg1 inDomain:(unsigned long long)arg2 lastPathComponent:(id)arg3 createIntermediateDirectories:(_Bool)arg4 flags:(unsigned int)arg5 error:(id *)arg6;
- (id)initWithFileSystemRepresentation:(const char *)arg1 flags:(unsigned int)arg2 error:(id *)arg3;
- (id)initWithPath:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;
- (_Bool)checkResourceIsReachableAndReturnError:(id *)arg1;
- (void)setTemporaryResourceValue:(id)arg1 forKey:(id)arg2;
- (_Bool)getTemporaryResourceValue:(id *)arg1 forKey:(id)arg2;
- (_Bool)setResourceValue:(id)arg1 forKey:(id)arg2 options:(unsigned char)arg3 error:(id *)arg4;
- (_Bool)getResourceValue:(id *)arg1 forKey:(id)arg2 options:(unsigned char)arg3 error:(id *)arg4;
- (void)clearURLPropertyCacheIfStale;
@property(readonly, nonatomic) NSURL *URL;
- (id)temporaryDirectoryNodeWithFlags:(unsigned int)arg1 error:(id *)arg2;
- (id)resolvedNodeWithFlags:(unsigned int)arg1 error:(id *)arg2;
- (void)setReferringAliasNode:(id)arg1;
@property(readonly, nonatomic) FSNode *referringAliasNode;
- (id)diskImageURLWithFlags:(unsigned int)arg1 error:(id *)arg2;
- (id)volumeNodeWithFlags:(unsigned int)arg1 error:(id *)arg2;
- (id)childNodeWithRelativePath:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;
@property(readonly, nonatomic) _Bool hasHiddenExtension;
@property(readonly, nonatomic, getter=isHidden) _Bool hidden;
@property(readonly, nonatomic, getter=isRegularFile) _Bool regularFile;
@property(readonly, nonatomic) _Bool hasPackageBit;
@property(readonly, nonatomic, getter=isAliasFile) _Bool aliasFile;
@property(readonly, nonatomic, getter=isSymbolicLink) _Bool symbolicLink;
@property(readonly, nonatomic, getter=isResolvable) _Bool resolvable;
@property(readonly, nonatomic, getter=isExecutable) _Bool executable;
@property(readonly, nonatomic, getter=isBusyDirectory) _Bool busyDirectory;
@property(readonly, nonatomic, getter=isDirectory) _Bool directory;
- (_Bool)getIsDirectory_NoIO:(_Bool *)arg1;
- (id)extensionWithError:(id *)arg1;
- (id)nameWithError:(id *)arg1;
- (id)canonicalPathWithError:(id *)arg1;
- (id)pathWithError:(id *)arg1;
- (_Bool)getFileSystemRepresentation:(char [1024])arg1 error:(id *)arg2;
- (id)canonical:(_Bool)arg1 pathWithError:(id *)arg2;
@property(readonly, nonatomic, getter=isOnLocalVolume) _Bool onLocalVolume;
@property(readonly, nonatomic, getter=isOnDiskImage) _Bool onDiskImage;
- (_Bool)getVolumeIdentifier:(unsigned long long *)arg1 error:(id *)arg2;
@property(readonly, nonatomic, getter=isMountTrigger) _Bool mountTrigger;
@property(readonly, nonatomic, getter=isVolume) _Bool volume;
- (_Bool)getOwnerUID:(unsigned int *)arg1 error:(id *)arg2;
- (_Bool)getFileIdentifier:(unsigned long long *)arg1 error:(id *)arg2;
- (_Bool)getInodeNumber:(unsigned long long *)arg1 error:(id *)arg2;
- (_Bool)getDeviceNumber:(int *)arg1 error:(id *)arg2;
- (id)bundleIdentifierWithContext:(struct LSContext *)arg1 error:(id *)arg2;
- (id)bundleIdentifierWithError:(id *)arg1;
- (id)bundleInfoDictionaryWithError:(id *)arg1;
- (struct __CFBundle *)CFBundleWithError:(id *)arg1;
- (_Bool)getWriterBundleIdentifier:(id *)arg1 error:(id *)arg2;
- (_Bool)getHFSType:(unsigned int *)arg1 creator:(unsigned int *)arg2 error:(id *)arg3;
- (_Bool)getLength:(unsigned long long *)arg1 error:(id *)arg2;
- (_Bool)getContentModificationDate:(double *)arg1 error:(id *)arg2;
- (_Bool)getCreationDate:(double *)arg1 error:(id *)arg2;
- (_Bool)setFinderInfo:(const CDUnion_739f5cf2 *)arg1 error:(id *)arg2;
- (_Bool)getFinderInfo:(CDUnion_739f5cf2 *)arg1 error:(id *)arg2;
- (_Bool)canReadMetadataFromSandboxWithAuditToken:(const CDStruct_4c969caf *)arg1;
- (_Bool)canWriteFromSandboxWithAuditToken:(const CDStruct_4c969caf *)arg1;
- (_Bool)canReadFromSandboxWithAuditToken:(const CDStruct_4c969caf *)arg1;
- (_Bool)setExtendedAttribute:(id)arg1 name:(id)arg2 options:(int)arg3 error:(id *)arg4;
- (id)extendedAttributeWithName:(id)arg1 options:(int)arg2 error:(id *)arg3;
- (id)initByResolvingBookmarkData:(id)arg1 relativeToNode:(id)arg2 bookmarkDataIsStale:(_Bool *)arg3 error:(id *)arg4;
- (id)initByResolvingBookmarkData:(id)arg1 options:(unsigned long long)arg2 relativeToNode:(id)arg3 bookmarkDataIsStale:(_Bool *)arg4 error:(id *)arg5;
- (id)bookmarkDataWithOptions:(unsigned long long)arg1 relativeToNode:(id)arg2 error:(id *)arg3;
- (id)bookmarkDataRelativeToNode:(id)arg1 error:(id *)arg2;

@end
