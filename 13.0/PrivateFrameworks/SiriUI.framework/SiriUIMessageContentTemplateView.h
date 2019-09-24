//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/SiriUIBaseTemplateView.h>

@protocol SiriUIMessageContentTemplateModel;

@interface SiriUIMessageContentTemplateView : SiriUIBaseTemplateView
{
    id _textBalloonView;
}

- (void).cxx_destruct;
- (struct CGSize)_textBalloonViewBoundingSize;
- (void)reloadData;
- (double)desiredHeight;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)layoutSubviews;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <SiriUIMessageContentTemplateModel> dataSource; // @dynamic dataSource;

@end
