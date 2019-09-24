//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface CALNNotificationAction : NSObject
{
    NSString *_identifier;
    NSString *_title;
    NSURL *_url;
}

+ (id)actionWithIdentifier:(id)arg1 title:(id)arg2 url:(id)arg3;
+ (id)actionWithIdentifier:(id)arg1 title:(id)arg2;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqualToAction:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 url:(id)arg3;

@end
