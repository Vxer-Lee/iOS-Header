//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@protocol INImageProxyInjecting;

@interface INImageProxyInjectionOperation : NSOperation
{
    _Bool _isFinished;
    _Bool _isExecuting;
    id <INImageProxyInjecting> _injector;
    CDUnknownBlockType _imageProxyRequestBlock;
    CDUnknownBlockType _copyReturnBlock;
}

@property(copy, nonatomic) CDUnknownBlockType copyReturnBlock; // @synthesize copyReturnBlock=_copyReturnBlock;
@property(copy, nonatomic) CDUnknownBlockType imageProxyRequestBlock; // @synthesize imageProxyRequestBlock=_imageProxyRequestBlock;
@property(retain, nonatomic) id <INImageProxyInjecting> injector; // @synthesize injector=_injector;
- (_Bool)isExecuting;
- (_Bool)isFinished;
- (void).cxx_destruct;
- (_Bool)isAsynchronous;
- (void)start;

@end

