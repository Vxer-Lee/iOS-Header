//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/ICAttachmentModel.h>

@interface ICAttachmentInlineDrawingModel : ICAttachmentModel
{
}

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;
- (id)correctedHardlinkURLFileExtensionForExtention:(id)arg1;
- (_Bool)canConvertToHTMLForSharing;
- (id)attributesForSharingHTMLWithTagName:(id *)arg1 textContent:(id *)arg2;
- (id)searchableTextContentInNote;
- (id)additionalIndexableTextContentInNote;
- (id)standaloneTitleForNote;
- (_Bool)providesStandaloneTitleForNote;
- (_Bool)hasPreviews;
- (_Bool)shouldShowInContentInfoText;

@end
