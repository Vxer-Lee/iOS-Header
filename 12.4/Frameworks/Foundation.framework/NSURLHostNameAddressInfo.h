//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSURLHostNameAddressInfo : NSObject
{
    double timestamp;
    struct addrinfo *addressInfo;
}

+ (void)asyncResolveWithCallbackClient:(id)arg1;
+ (id)addressInfoForHost:(id)arg1;
- (void)dealloc;
- (double)_timestamp;
- (struct addrinfo *)addrinfo;
- (id)_initWithAddressInfo:(struct addrinfo *)arg1;

@end
