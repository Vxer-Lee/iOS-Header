//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RAPTablePart.h"

@class RAPReportComposerCommentSection, RAPReportComposerPhotosSection;

__attribute__((visibility("hidden")))
@interface RAPReportComposerCommentPart : RAPTablePart
{
    RAPReportComposerCommentSection *_commentSection;
    RAPReportComposerPhotosSection *_photoSection;
}

- (void).cxx_destruct;
- (void)dismissPhotoAlertController;
- (void)beginEditingCommentIfPossible;
- (id)initWithCommentQuestion:(id)arg1;

@end
