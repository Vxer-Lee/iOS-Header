//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIKBRenderFactoryiPhone.h>

@class UIKBRenderFactory;

__attribute__((visibility("hidden")))
@interface UIKBRenderFactory_Composite : UIKBRenderFactoryiPhone
{
    UIKBRenderFactory *_overlayFactory;
}

- (_Bool)isTallPopup;
- (double)popupFontSize;
- (struct CGPoint)popupSymbolTextOffset;
- (struct CGPoint)variantAnnotationTextOffset;
- (struct CGPoint)variantSymbolTextOffset;
- (struct UIEdgeInsets)variantSymbolFrameInsets;
- (struct UIEdgeInsets)variantPaddedFrameInsets;
- (struct UIEdgeInsets)wideShadowPopupMenuInsets;
- (struct UIEdgeInsets)wideShadowPaddleInsets;
- (void)dealloc;
- (id)initWithRenderingContext:(id)arg1 skipLayoutSegments:(_Bool)arg2;
- (Class)_overlayFactoryClass;

@end
