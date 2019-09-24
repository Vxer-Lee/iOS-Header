//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNAutocompleteSearch-Protocol.h>

@class CLSDataStore, NSString;

@interface CNAutocompleteLocalExtensionSearch : NSObject <CNAutocompleteSearch>
{
    CLSDataStore *_dataStore;
}

@property(readonly, nonatomic) CLSDataStore *dataStore; // @synthesize dataStore=_dataStore;
- (void).cxx_destruct;
- (id)fetchContactsForFetchRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)executeRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithDataStore:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
