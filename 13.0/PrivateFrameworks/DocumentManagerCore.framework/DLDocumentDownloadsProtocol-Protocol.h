//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class FPSandboxingURLWrapper, NSString;

@protocol DLDocumentDownloadsProtocol
- (void)importItemAtURLToDownloads:(FPSandboxingURLWrapper *)arg1 completionHandler:(void (^)(FPSandboxingURLWrapper *, NSError *))arg2;
- (void)upperCaseString:(NSString *)arg1 withReply:(void (^)(NSString *))arg2;
- (void)replacePlaceholder:(FPSandboxingURLWrapper *)arg1 withFinalFileURL:(FPSandboxingURLWrapper *)arg2 completionHandler:(void (^)(FPSandboxingURLWrapper *, NSError *))arg3;
- (void)importPlaceholderAtURLToDownloadsDirectory:(FPSandboxingURLWrapper *)arg1 completionHandler:(void (^)(FPSandboxingURLWrapper *, NSError *))arg2;
@end
