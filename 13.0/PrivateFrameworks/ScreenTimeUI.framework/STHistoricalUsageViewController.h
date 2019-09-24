//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ScreenTimeUI/UIPageViewControllerDataSource-Protocol.h>
#import <ScreenTimeUI/UIPageViewControllerDelegate-Protocol.h>

@class NSLayoutConstraint, NSObject, NSString, STUsageGraphViewController, STUsageSummaryTitleView, UIPageViewController, UIView;
@protocol STUsageDetailsViewModelCoordinator;

__attribute__((visibility("hidden")))
@interface STHistoricalUsageViewController : UIViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate>
{
    NSObject<STUsageDetailsViewModelCoordinator> *_coordinator;
    STUsageSummaryTitleView *_titleView;
    long long _currentViewMode;
    unsigned long long _type;
    double _graphHeight;
    STUsageGraphViewController *_selectedWeekGraphViewController;
    STUsageGraphViewController *_selectedDayGraphViewController;
    UIPageViewController *_weekGraphPageViewController;
    UIPageViewController *_dayGraphPageViewController;
    UIView *_weekGraphContainerView;
    UIView *_dayGraphContainerView;
    NSLayoutConstraint *_weekGraphContainerHeightConstraint;
    NSLayoutConstraint *_dayGraphContainerHeightConstraint;
    double _maximumYAxisLabelWidth;
}

+ (id)historicalUsageViewControllerOfType:(unsigned long long)arg1 graphHeight:(double)arg2;
@property(nonatomic) double maximumYAxisLabelWidth; // @synthesize maximumYAxisLabelWidth=_maximumYAxisLabelWidth;
@property(retain) NSLayoutConstraint *dayGraphContainerHeightConstraint; // @synthesize dayGraphContainerHeightConstraint=_dayGraphContainerHeightConstraint;
@property(retain) NSLayoutConstraint *weekGraphContainerHeightConstraint; // @synthesize weekGraphContainerHeightConstraint=_weekGraphContainerHeightConstraint;
@property(retain) UIView *dayGraphContainerView; // @synthesize dayGraphContainerView=_dayGraphContainerView;
@property(retain) UIView *weekGraphContainerView; // @synthesize weekGraphContainerView=_weekGraphContainerView;
@property(retain) UIPageViewController *dayGraphPageViewController; // @synthesize dayGraphPageViewController=_dayGraphPageViewController;
@property(retain) UIPageViewController *weekGraphPageViewController; // @synthesize weekGraphPageViewController=_weekGraphPageViewController;
@property(retain) STUsageGraphViewController *selectedDayGraphViewController; // @synthesize selectedDayGraphViewController=_selectedDayGraphViewController;
@property(retain, nonatomic) STUsageGraphViewController *selectedWeekGraphViewController; // @synthesize selectedWeekGraphViewController=_selectedWeekGraphViewController;
@property(readonly) double graphHeight; // @synthesize graphHeight=_graphHeight;
@property(readonly) unsigned long long type; // @synthesize type=_type;
@property long long currentViewMode; // @synthesize currentViewMode=_currentViewMode;
@property(retain) STUsageSummaryTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) NSObject<STUsageDetailsViewModelCoordinator> *coordinator; // @synthesize coordinator=_coordinator;
- (void).cxx_destruct;
- (id)_dataSetFromUsageReport:(id)arg1;
- (id)_dayGraphViewControllerForDay:(unsigned long long)arg1 week:(unsigned long long)arg2 usageReport:(id)arg3;
- (id)_weekGraphViewControllerForWeek:(unsigned long long)arg1 usageReport:(id)arg2;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;
- (id)_nextGraphViewControllerForPageViewController:(id)arg1 currentGraphViewController:(id)arg2 direction:(long long)arg3;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)_selectedBarViewDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)_selectedDayUsageReportDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)_selectedWeekUsageReportDidChange:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
