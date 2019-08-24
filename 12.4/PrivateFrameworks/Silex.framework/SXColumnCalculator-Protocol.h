//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class SXColumnLayout;
@protocol SXDocumentLayout;

@protocol SXColumnCalculator <NSObject>
- (SXColumnLayout *)columnLayoutWithConstrainedViewportSize:(struct CGSize)arg1 viewportSize:(struct CGSize)arg2 additionalMargins:(double)arg3 documentLayout:(id <SXDocumentLayout>)arg4;
- (SXColumnLayout *)columnLayoutWithViewportSize:(struct CGSize)arg1 constrainedToWidth:(double)arg2 documentLayout:(id <SXDocumentLayout>)arg3;
@end
