//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIAlertControllerDescriptor : NSObject
{
    _Bool _hasHeaderContentViewController;
    _Bool _hasTitle;
    _Bool _hasMessage;
    _Bool _hasContentViewController;
    _Bool _applicationIsFullscreen;
    long long _numberOfActions;
    struct UIEdgeInsets _containerViewSafeAreaInsets;
}

@property struct UIEdgeInsets containerViewSafeAreaInsets; // @synthesize containerViewSafeAreaInsets=_containerViewSafeAreaInsets;
@property _Bool applicationIsFullscreen; // @synthesize applicationIsFullscreen=_applicationIsFullscreen;
@property long long numberOfActions; // @synthesize numberOfActions=_numberOfActions;
@property _Bool hasContentViewController; // @synthesize hasContentViewController=_hasContentViewController;
@property _Bool hasMessage; // @synthesize hasMessage=_hasMessage;
@property _Bool hasTitle; // @synthesize hasTitle=_hasTitle;
@property _Bool hasHeaderContentViewController; // @synthesize hasHeaderContentViewController=_hasHeaderContentViewController;
- (_Bool)isEqual:(id)arg1;

@end

