//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UICanvasBasedObject-Protocol.h>

@class NSDictionary, NSString, UIWindowScene;

@interface UITextEffectsHostingInfo : NSObject <_UICanvasBasedObject>
{
    unsigned long long _hostedUseCount;
    UIWindowScene *_scene;
    NSDictionary *_perSceneOptions;
}

+ (id)hostingInfoForWindowScene:(id)arg1;
@property(retain, nonatomic) NSDictionary *perSceneOptions; // @synthesize perSceneOptions=_perSceneOptions;
@property(retain, nonatomic) UIWindowScene *scene; // @synthesize scene=_scene;
- (void).cxx_destruct;
@property(nonatomic) _Bool useHostedInstance;
@property(readonly) NSDictionary *_options;
@property(readonly) UIWindowScene *_intendedCanvas;
- (_Bool)_matchingOptions:(id)arg1;
- (id)_initWithCanvas:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
