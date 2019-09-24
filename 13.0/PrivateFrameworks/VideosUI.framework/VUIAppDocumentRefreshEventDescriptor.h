//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUIAppDocumentUpdateEventDescriptor.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIAppDocumentRefreshEventDescriptor : VUIAppDocumentUpdateEventDescriptor
{
    unsigned long long _delayInSeconds;
    NSString *_name;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long delayInSeconds; // @synthesize delayInSeconds=_delayInSeconds;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDelayInSeconds:(unsigned long long)arg1 name:(id)arg2;
- (id)initWithEventType:(unsigned long long)arg1;

@end
