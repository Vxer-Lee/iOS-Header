//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HMDServiceNameComponents : HMFObject
{
    NSString *_rawServiceName;
    NSString *_serviceName;
    NSString *_roomName;
    NSString *_format;
}

+ (id)componentsWithRawServiceName:(id)arg1 rawRoomName:(id)arg2 localizedFormat:(id)arg3;
+ (id)componentsWithRawServiceName:(id)arg1 rawRoomName:(id)arg2;
@property(retain, nonatomic) NSString *format; // @synthesize format=_format;
@property(retain, nonatomic) NSString *roomName; // @synthesize roomName=_roomName;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(retain, nonatomic) NSString *rawServiceName; // @synthesize rawServiceName=_rawServiceName;
- (void).cxx_destruct;
- (id)composedName;
- (id)initWithRawServiceName:(id)arg1 rawRoomName:(id)arg2 localizedFormat:(id)arg3;

@end
