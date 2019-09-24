//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNPhotoPickerActionsViewControllerLayout-Protocol.h>

__attribute__((visibility("hidden")))
@interface CNPhotoPickerActionsViewControllerLayout : NSObject <CNPhotoPickerActionsViewControllerLayout>
{
    long long _buttonCount;
    struct CGSize _containerSize;
    struct UIEdgeInsets _edgeInsets;
}

+ (double)heightForButtonsViewWithButtonCount:(long long)arg1;
+ (double)buttonHeight;
@property(readonly, nonatomic) long long buttonCount; // @synthesize buttonCount=_buttonCount;
@property(readonly, nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(readonly, nonatomic) struct CGSize containerSize; // @synthesize containerSize=_containerSize;
@property(readonly, nonatomic) struct CGRect imageContainerViewFrame;
@property(readonly, nonatomic) struct CGRect actionButtonsViewFrame;
- (struct CGRect)actionButtonsViewFrameForButtonCount:(long long)arg1;
- (id)initWithContainerSize:(struct CGSize)arg1 insets:(struct UIEdgeInsets)arg2 buttonCount:(long long)arg3;

@end
