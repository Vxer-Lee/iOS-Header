//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/NSObject-Protocol.h>

@class CNContactInlineActionsViewController, CNUIGeminiDataSource, NSString;

@protocol CNContactInlineActionsViewControllerDelegate <NSObject>

@optional
- (CNUIGeminiDataSource *)geminiDataSource;
- (void)contactInlineActionsViewController:(CNContactInlineActionsViewController *)arg1 willPerformActionOfType:(NSString *)arg2;
@end

