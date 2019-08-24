//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/NSObject-Protocol.h>

@class VideosExtrasImageBrowserViewController;

@protocol VideosExtrasImageBrowserViewControllerDataSource <NSObject>
- (void)imageBrowserViewController:(VideosExtrasImageBrowserViewController *)arg1 loadDescriptionAtIndex:(unsigned long long)arg2 withCompletionHandler:(void (^)(NSAttributedString *))arg3;
- (void)imageBrowserViewController:(VideosExtrasImageBrowserViewController *)arg1 loadSubtitleAtIndex:(unsigned long long)arg2 withCompletionHandler:(void (^)(NSAttributedString *))arg3;
- (void)imageBrowserViewController:(VideosExtrasImageBrowserViewController *)arg1 loadTitleAtIndex:(unsigned long long)arg2 withCompletionHandler:(void (^)(NSAttributedString *))arg3;
- (void)imageBrowserViewController:(VideosExtrasImageBrowserViewController *)arg1 loadImageAtIndex:(unsigned long long)arg2 withCompletionHandler:(void (^)(UIImage *))arg3;
- (unsigned long long)numberOfImagesForBrowserViewController:(VideosExtrasImageBrowserViewController *)arg1;
@end
