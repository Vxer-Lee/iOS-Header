//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SiriCoreConnectionType : NSObject
{
    long long _technology;
}

- (unsigned long long)aggregatorConnectionType;
- (long long)diagnosticConnectionType;
- (_Bool)canUseWiFiDirectly;
- (_Bool)isEdge;
- (_Bool)isWWAN;
- (long long)technology;
- (id)description;
- (id)initWithTechnology:(long long)arg1;

@end

