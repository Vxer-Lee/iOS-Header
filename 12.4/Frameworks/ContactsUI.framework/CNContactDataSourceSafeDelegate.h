//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNContactDataSourceDelegate-Protocol.h>

@class NSString;
@protocol CNContactDataSourceDelegate;

__attribute__((visibility("hidden")))
@interface CNContactDataSourceSafeDelegate : NSObject <CNContactDataSourceDelegate>
{
    id <CNContactDataSourceDelegate> _delegate;
}

@property(nonatomic) __weak id <CNContactDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)contactDataSourceDidChange:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

