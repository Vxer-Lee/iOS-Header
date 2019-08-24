//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeUI/STTableCell.h>

@class NSLayoutConstraint, STHorizontallySegmentedView, STUsageGraphView, UILabel;

@interface STDevicePickupsSummaryCell : STTableCell
{
    UILabel *_averagePickupsLabel;
    STUsageGraphView *_graphView;
    STHorizontallySegmentedView *_pickupMetricsView;
    UILabel *_firstUsedAfterPickupLabel;
    NSLayoutConstraint *_bottomConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(readonly, nonatomic) UILabel *firstUsedAfterPickupLabel; // @synthesize firstUsedAfterPickupLabel=_firstUsedAfterPickupLabel;
@property(readonly, nonatomic) STHorizontallySegmentedView *pickupMetricsView; // @synthesize pickupMetricsView=_pickupMetricsView;
@property(readonly, nonatomic) STUsageGraphView *graphView; // @synthesize graphView=_graphView;
@property(readonly, nonatomic) UILabel *averagePickupsLabel; // @synthesize averagePickupsLabel=_averagePickupsLabel;
- (void).cxx_destruct;
- (void)setValue:(id)arg1;
- (void)_numberOfLinesDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end
