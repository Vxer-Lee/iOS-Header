//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/IKJSDOMXPathExpression-Protocol.h>

@interface IKDOMXPathExpression : IKJSObject <IKJSDOMXPathExpression>
{
    CDUnknownBlockType _evaluatingBlock;
}

@property(copy, nonatomic) CDUnknownBlockType evaluatingBlock; // @synthesize evaluatingBlock=_evaluatingBlock;
- (void).cxx_destruct;
- (id)evaluate:(id)arg1:(long long)arg2:(id)arg3;
- (id)initWithAppContext:(id)arg1 evaluatingBlock:(CDUnknownBlockType)arg2;

@end
