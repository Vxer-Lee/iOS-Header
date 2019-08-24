//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLookThumbnailing/QLTThumbnailRequest.h>

@class FPSandboxingURLWrapper;

@interface QLTFileThumbnailRequest : QLTThumbnailRequest
{
    FPSandboxingURLWrapper *_quicklookSandboxWrapper;
    FPSandboxingURLWrapper *_genericSandboxWrapper;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) FPSandboxingURLWrapper *genericSandboxWrapper; // @synthesize genericSandboxWrapper=_genericSandboxWrapper;
@property(readonly, nonatomic) FPSandboxingURLWrapper *quicklookSandboxWrapper; // @synthesize quicklookSandboxWrapper=_quicklookSandboxWrapper;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithFileAtURL:(id)arg1 size:(struct CGSize)arg2 minimumSize:(double)arg3 scale:(double)arg4 iconMode:(_Bool)arg5;
- (id)initWithFileAtURL:(id)arg1 size:(struct CGSize)arg2 minimumSize:(double)arg3 scale:(double)arg4 iconMode:(_Bool)arg5 error:(id *)arg6;
- (id)initWithFileAtURL:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 iconMode:(_Bool)arg4 error:(id *)arg5;
- (id)initWithFileAtURL:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 iconMode:(_Bool)arg4;

@end
