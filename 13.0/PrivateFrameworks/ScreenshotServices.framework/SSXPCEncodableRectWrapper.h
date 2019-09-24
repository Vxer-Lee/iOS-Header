//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenshotServices/BSXPCCoding-Protocol.h>
#import <ScreenshotServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface SSXPCEncodableRectWrapper : NSObject <BSXPCCoding, NSSecureCoding>
{
    struct CGRect _rect;
}

+ (void)encodeRects:(id)arg1 inDictionary:(id)arg2 forKey:(id)arg3;
+ (id)encodedRectsInDictionary:(id)arg1 forKey:(id)arg2;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
