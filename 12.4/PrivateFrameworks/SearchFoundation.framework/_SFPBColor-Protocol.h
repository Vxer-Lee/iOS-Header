//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, _SFPBGraphicalFloat;

@protocol _SFPBColor <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(retain, nonatomic) _SFPBGraphicalFloat *alphaComponent;
@property(retain, nonatomic) _SFPBGraphicalFloat *blueComponent;
@property(retain, nonatomic) _SFPBGraphicalFloat *greenComponent;
@property(retain, nonatomic) _SFPBGraphicalFloat *redComponent;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end
