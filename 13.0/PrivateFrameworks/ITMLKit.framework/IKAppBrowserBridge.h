//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/IKDOMFeature-Protocol.h>

@class IKAppContext, NSString;
@protocol IKAppBrowser;

@interface IKAppBrowserBridge : NSObject <IKDOMFeature>
{
    double _cornerRadius;
    double _interitemSpacing;
    IKAppContext *_appContext;
    NSString *_featureName;
    id <IKAppBrowser> _appBrowser;
    struct UIEdgeInsets _maskInset;
}

+ (id)makeFeatureJSObjectForFeature:(id)arg1;
@property(nonatomic) __weak id <IKAppBrowser> appBrowser; // @synthesize appBrowser=_appBrowser;
@property(readonly, copy, nonatomic) NSString *featureName; // @synthesize featureName=_featureName;
@property(readonly, nonatomic) __weak IKAppContext *appContext; // @synthesize appContext=_appContext;
@property(nonatomic) struct UIEdgeInsets maskInset; // @synthesize maskInset=_maskInset;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (void).cxx_destruct;
- (void)present;
- (id)initWithDOMNode:(id)arg1 featureName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
