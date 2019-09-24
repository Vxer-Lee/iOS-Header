//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/NSXMLParserDelegate-Protocol.h>

@class NSData, NSMutableString, NSString, NSXMLParser, WPXMLRPCDecoderDelegate;

@interface WPXMLRPCDecoder : NSObject <NSXMLParserDelegate>
{
    NSXMLParser *_parser;
    WPXMLRPCDecoderDelegate *_delegate;
    _Bool _isFault;
    NSData *_body;
    NSData *_originalData;
    id _object;
    NSMutableString *_methodName;
}

- (void).cxx_destruct;
- (id)object;
- (id)error;
- (id)faultString;
- (long long)faultCode;
- (_Bool)isFault;
- (void)abortParsing;
- (void)parse;
- (id)initWithData:(id)arg1;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
