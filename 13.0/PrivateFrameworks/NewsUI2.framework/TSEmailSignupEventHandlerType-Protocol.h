//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol TSEmailSignupEventHandlerTypeDelegate;

@protocol TSEmailSignupEventHandlerType
- (void)viewAppeared;
- (void)emailSignUpViewControllerNotNowButtonTapped;
- (void)emailSignUpViewControllerSignUpButtonTapped;
@property(nonatomic, retain) id <TSEmailSignupEventHandlerTypeDelegate> delegate;
@end
