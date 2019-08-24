//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TUConversationMediaControllerDataSourceDelegate-Protocol.h>

@class NSString;
@protocol TUConversationManagerDataSource, TUConversationMediaControllerDelegate;

@interface TUConversationMediaController : NSObject <TUConversationMediaControllerDataSourceDelegate>
{
    id <TUConversationMediaControllerDelegate> _delegate;
    id <TUConversationManagerDataSource> _dataSource;
}

@property(readonly, nonatomic) id <TUConversationManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <TUConversationMediaControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)mediaPrioritiesChangeForConversation:(id)arg1;
- (void)updateConversationWithUUID:(id)arg1 participantPresentationContexts:(id)arg2;
- (id)initWithConversationDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
