//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebCore/WebScriptObject.h>

#import <WebKitLegacy/NSCopying-Protocol.h>

@class DOMStyleSheet;

@interface DOMObject : WebScriptObject <NSCopying>
{
    struct DOMObjectInternal *_internal;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
@property(readonly) DOMStyleSheet *sheet;

@end
