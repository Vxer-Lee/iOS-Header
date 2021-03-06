//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ComponentKit/CKCompositeComponent.h>

@class WFModuleModel;
@protocol WFComponentNavigationContext;

@interface WFModuleHeadingComponent : CKCompositeComponent
{
    WFModuleModel *_model;
    id <WFComponentNavigationContext> _navigationContext;
}

+ (id)newWithModel:(id)arg1 navigationContext:(id)arg2;
@property(readonly, nonatomic) __weak id <WFComponentNavigationContext> navigationContext; // @synthesize navigationContext=_navigationContext;
@property(readonly, nonatomic) WFModuleModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)removeButtonTapped:(id)arg1;
- (void)settingsButtonTapped;
- (void)titleComponentTapped:(id)arg1;

@end

