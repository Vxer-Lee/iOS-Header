//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MRDAirPlayRemoteControlService, NSInputStream, NSOutputStream;

@protocol MRDAirPlayRemoteControlServiceDelegate <NSObject>
- (void)airPlayRemoteControlService:(MRDAirPlayRemoteControlService *)arg1 didAcceptConnectionWithInputStream:(NSInputStream *)arg2 outputStream:(NSOutputStream *)arg3;
@end
