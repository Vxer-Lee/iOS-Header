//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITextPosition.h>

__attribute__((visibility("hidden")))
@interface UIWebCaretRectTextPosition : UITextPosition
{
    struct CGRect _caretRect;
}

+ (id)textPositionWithCaretRect:(struct CGRect)arg1;
@property(readonly, nonatomic) struct CGRect caretRect; // @synthesize caretRect=_caretRect;
- (id)initWithCaretRect:(struct CGRect)arg1;

@end
