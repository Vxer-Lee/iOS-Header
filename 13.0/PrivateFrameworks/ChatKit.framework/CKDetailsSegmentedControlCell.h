//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKDetailsCell.h>

#import <ChatKit/CKDetailsCell-Protocol.h>

@class NSString, UISegmentedControl;

__attribute__((visibility("hidden")))
@interface CKDetailsSegmentedControlCell : CKDetailsCell <CKDetailsCell>
{
    UISegmentedControl *_segmentedControl;
}

+ (_Bool)shouldHighlight;
+ (id)reuseIdentifier;
@property(retain, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
- (void).cxx_destruct;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
