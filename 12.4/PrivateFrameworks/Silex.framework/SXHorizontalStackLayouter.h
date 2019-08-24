//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXLayouter-Protocol.h>

@class NSString, SXContainerComponentBlueprint, SXLayouterFactory;
@protocol SXColumnCalculator, SXLayoutContextFactory, SXLayouterDelegate, SXUnitConverterFactory;

@interface SXHorizontalStackLayouter : NSObject <SXLayouter>
{
    id <SXLayouterDelegate> delegate;
    SXContainerComponentBlueprint *_containerComponentBlueprint;
    SXLayouterFactory *_layouterFactory;
    id <SXColumnCalculator> _columnCalculator;
    id <SXLayoutContextFactory> _layoutContextFactory;
    id <SXUnitConverterFactory> _unitConverterFactory;
}

@property(readonly, nonatomic) id <SXUnitConverterFactory> unitConverterFactory; // @synthesize unitConverterFactory=_unitConverterFactory;
@property(readonly, nonatomic) id <SXLayoutContextFactory> layoutContextFactory; // @synthesize layoutContextFactory=_layoutContextFactory;
@property(readonly, nonatomic) id <SXColumnCalculator> columnCalculator; // @synthesize columnCalculator=_columnCalculator;
@property(readonly, nonatomic) SXLayouterFactory *layouterFactory; // @synthesize layouterFactory=_layouterFactory;
@property(readonly, nonatomic) SXContainerComponentBlueprint *containerComponentBlueprint; // @synthesize containerComponentBlueprint=_containerComponentBlueprint;
@property(nonatomic) __weak id <SXLayouterDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (double)factorForAnchorAlingment:(long long)arg1;
- (id)childColumnLayoutForContainerComponentWidth:(double)arg1 componentWidth:(double)arg2 componentBlueprint:(id)arg3 columnLayout:(id)arg4 unitConverter:(id)arg5;
- (struct CGPoint)calculatePositionForComponentWithBlueprint:(id)arg1 layout:(id)arg2 unitConverter:(id)arg3 margin:(id)arg4 maximumY:(double)arg5 layoutBlueprint:(id)arg6;
- (struct CGSize)calculateSizeForContainerComponentWithBlueprint:(id)arg1 width:(double)arg2 layoutContext:(id)arg3 shouldContinue:(_Bool *)arg4;
- (struct CGSize)calculateSizeForComponentWithBlueprint:(id)arg1 width:(double)arg2 layoutContext:(id)arg3;
- (void)layoutBlueprint:(id)arg1 columnLayout:(id)arg2 shouldContinue:(_Bool *)arg3;
- (id)initWithContainerComponent:(id)arg1 layouterFactory:(id)arg2 columnCalculator:(id)arg3 layoutContextFactory:(id)arg4 unitConverterFactory:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
