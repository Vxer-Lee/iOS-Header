//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TemplateKit/TLKVibrantLabel.h>

@interface TLKEmojiableVibrantLabel : TLKVibrantLabel
{
    TLKVibrantLabel *_overlayVibrantLabel;
}

@property(retain) TLKVibrantLabel *overlayVibrantLabel; // @synthesize overlayVibrantLabel=_overlayVibrantLabel;
- (void).cxx_destruct;
- (id)emojiLabelString;
- (id)nonEmojiLabelString;
- (void)updateWithRichText:(id)arg1;
- (void)layoutSubviews;
- (void)setStyle:(unsigned long long)arg1;

@end
