//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IconServices/ISIconResourceLocator.h>

#import <IconServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface ISIconTypeResourceLocator : ISIconResourceLocator <NSSecureCoding>
{
    NSString *_type;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)allowLocalizedIcon;
- (id)preferedResourceName;
- (id)bundleIdentifier;
- (id)resourceDirectoryURL;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithType:(id)arg1;

@end
