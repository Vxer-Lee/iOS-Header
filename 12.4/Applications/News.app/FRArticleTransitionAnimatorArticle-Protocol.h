//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FRArticleTransitionAnimatorProtocol-Protocol.h"

@class FRArticleTransitionAnimator, SXVideoPlayerViewController, UIImage, UIView;

@protocol FRArticleTransitionAnimatorArticle <FRArticleTransitionAnimatorProtocol>
- (_Bool)componentViewIsVisibleForAnimator:(FRArticleTransitionAnimator *)arg1;
- (_Bool)componentViewHasExtraContentForAnimator:(FRArticleTransitionAnimator *)arg1;
- (_Bool)componentViewUsesThumbnailForAnimator:(FRArticleTransitionAnimator *)arg1;
- (_Bool)componentViewIsObscuredForAnimator:(FRArticleTransitionAnimator *)arg1;
- (UIView *)componentContentViewForAnimator:(FRArticleTransitionAnimator *)arg1;
- (UIView *)componentViewForAnimator:(FRArticleTransitionAnimator *)arg1;
- (struct CGRect)componentViewCropFrameForAnimator:(FRArticleTransitionAnimator *)arg1;
- (struct CGRect)componentContentFrameForAnimator:(FRArticleTransitionAnimator *)arg1;
- (struct CGRect)componentViewFrameForAnimator:(FRArticleTransitionAnimator *)arg1;
- (UIImage *)thumbnailForAnimator:(FRArticleTransitionAnimator *)arg1;

@optional
- (_Bool)transparentToolbarActiveForAnimator:(FRArticleTransitionAnimator *)arg1;
- (SXVideoPlayerViewController *)videoPlayerViewControllerForAnimator:(FRArticleTransitionAnimator *)arg1;
- (struct CGRect)animator:(FRArticleTransitionAnimator *)arg1 frameForVideoPlayerViewController:(SXVideoPlayerViewController *)arg2 makeVideoPlayerVisible:(_Bool)arg3;
@end
