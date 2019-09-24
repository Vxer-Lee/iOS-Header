//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUErrorMessageFactory-Protocol.h>

@class FCNetworkReachability, NSString;

@interface NUErrorMessageFactory : NSObject <NUErrorMessageFactory>
{
    FCNetworkReachability *_networkReachability;
}

@property(readonly, nonatomic) FCNetworkReachability *networkReachability; // @synthesize networkReachability=_networkReachability;
- (void).cxx_destruct;
- (id)errorMessageForTitle:(id)arg1 subtitle:(id)arg2;
- (id)errorMessageForArticleViewWithOfflineReason:(long long)arg1;
- (id)errorMessageForArticleView;
- (id)initWithNetworkReachability:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
