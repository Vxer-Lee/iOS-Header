//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CAMFormattingManager : NSObject
{
    _Bool _wantsCustomKerning;
    _Bool _supportsVerticalText;
}

+ (id)sharedManager;
@property(readonly, nonatomic) _Bool supportsVerticalText; // @synthesize supportsVerticalText=_supportsVerticalText;
@property(readonly, nonatomic) _Bool wantsCustomKerning; // @synthesize wantsCustomKerning=_wantsCustomKerning;
- (id)init;
- (void)_commonCAMFormattingManagerInitialization;

@end

