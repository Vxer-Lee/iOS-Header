//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class NSString, TSCHChartEditor, TSCHSelectionPath, TSCHTextEditing;

@protocol TSCHSupportsTextEditing <NSObject>
- (double)frameHeightChangeForPath:(TSCHSelectionPath *)arg1;
- (void)useEditedString:(NSString *)arg1;
- (TSCHTextEditing *)textEditorForSelectionPath:(TSCHSelectionPath *)arg1 chartEditor:(TSCHChartEditor *)arg2;
- (struct CGRect)frameForEditingTextForSelectionPath:(TSCHSelectionPath *)arg1;
- (_Bool)canEditTextForSelectionPath:(TSCHSelectionPath *)arg1;
@end
