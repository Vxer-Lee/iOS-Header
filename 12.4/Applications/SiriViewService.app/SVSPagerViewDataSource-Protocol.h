//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SVSPagerView, UIView;

@protocol SVSPagerViewDataSource <NSObject>
- (UIView *)pagerView:(SVSPagerView *)arg1 pageViewAtIndex:(long long)arg2;
- (long long)numberOfPageViewsInPagerView:(SVSPagerView *)arg1;
@end
