//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class _INPBFileDataAttachment, _INPBURLValue;

@protocol _INPBSendMessageAttachment <NSObject>
@property(readonly, nonatomic) unsigned long long whichDatasource;
@property(readonly, nonatomic) _Bool hasFileURL;
@property(retain, nonatomic) _INPBURLValue *fileURL;
@property(readonly, nonatomic) _Bool hasFile;
@property(retain, nonatomic) _INPBFileDataAttachment *file;
@property(readonly, nonatomic) _Bool hasCurrentLocation;
@property(nonatomic) _Bool currentLocation;
@end
