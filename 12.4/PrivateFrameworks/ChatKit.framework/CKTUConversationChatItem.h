//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKBalloonChatItem.h>

@class NSUUID;

@interface CKTUConversationChatItem : CKBalloonChatItem
{
}

@property(readonly, nonatomic) __weak NSUUID *tuConversationUUID;
@property(readonly, nonatomic) BOOL color;
- (id)time;
- (void)configureBalloonView:(id)arg1;
- (_Bool)isFromMe;
- (_Bool)shouldCacheSize;
- (Class)balloonViewClass;

@end

