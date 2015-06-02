/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@interface MusicGeniusOptInViewController : UIViewController <MPTermsViewControllerDelegate> {
    UILabel *_aboutGeniusLabel;
    UIView *_bottomSpacerView;
    HSCloudClient *_cloudClient;
    NSLayoutConstraint *_contentSizeHeightConstraint;
    UILabel *_continueUsingMusicLabel;
    UIImageView *_geniusImageView;
    UIButton *_geniusLearnMoreButton;
    UILabel *_geniusLegalLabel;
    UIButton *_geniusOptInButton;
    long long _geniusTermsVersion;
    BOOL _hasUpdateGeniusCompletionBlock;
    MPUIndeterminateProgressIndicatorView *_indeterminateProgressIndicator;
    NSURL *_learnMoreURL;
    MPUNotificationObserver *_preferredContentSizeDidChangeObserver;
    UIScrollView *_scrollView;
    int _state;
    UILabel *_stepOneBulletLabel;
    UIImageView *_stepOneCompleteImageView;
    UILabel *_stepOneDescriptionLabel;
    UILabel *_stepThreeBulletLabel;
    UIImageView *_stepThreeCompleteImageView;
    UILabel *_stepThreeDescriptionLabel;
    UILabel *_stepTwoBulletLabel;
    UIImageView *_stepTwoCompleteImageView;
    UILabel *_stepTwoDescriptionLabel;
    NSObject<OS_dispatch_source> *_updateStatusTimer;
    MPUContentSizeLayoutConstraint *_updatingAboutGeniusLabelBaselineContraint;
    NSLayoutConstraint *_updatingContinueUsingMusicLabelTopConstraint;
    MPUContentSizeLayoutConstraint *_updatingGeniusLearnMoreButtonBaselineContraint;
    NSLayoutConstraint *_updatingGeniusLegalLabelTopConstraint;
    MPUContentSizeLayoutConstraint *_updatingGeniusOptInButtonBaselineContraint;
    NSLayoutConstraint *_updatingIndeterminateProgressIndicatorWidthConstraint;
    NSLayoutConstraint *_updatingStepOneBulletLeadingToLeadingConstraint;
    NSLayoutConstraint *_updatingStepOneCompletedImageViewCenterYConstraint;
    MPUContentSizeLayoutConstraint *_updatingStepOneDescriptionLabelBaselineContraint;
    NSLayoutConstraint *_updatingStepThreeBulletLeadingToLeadingConstraint;
    NSLayoutConstraint *_updatingStepThreeCompletedImageViewCenterYConstraint;
    MPUContentSizeLayoutConstraint *_updatingStepThreeDescriptionLabelBaselineContraint;
    NSLayoutConstraint *_updatingStepTwoBulletLeadingToLeadingConstraint;
    NSLayoutConstraint *_updatingStepTwoCompletedImageViewCenterYConstraint;
    MPUContentSizeLayoutConstraint *_updatingStepTwoDescriptionLabelBaselineContraint;
    UIView *_widthConstrainingView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_animateToGeniusEnabledStateWithCompletionHandler:(id /* block */)arg1;
- (id /* block */)_completionBlock;
- (id)_createHorizontalSpacerViewInView:(id)arg1;
- (id)_createVerticalSpacerViewInView:(id)arg1;
- (void)_doneButtonPressed:(id)arg1;
- (void)_enableGenius;
- (void)_ensureCompletionHandlerIsAttached;
- (void)_ensureUpdateStatusTimerIsRunning;
- (void)_geniusLearnMoreButtonAction:(id)arg1;
- (void)_geniusOptInButtonAction:(id)arg1;
- (void)_optInToGenius;
- (void)_prepareForDisabledViews;
- (void)_prepareForEnabledViews;
- (void)_prepareIndeterminateProgressIndicatorForUse;
- (void)_setupViewsForGeniusDisabledIfNeeded;
- (void)_setupViewsForGeniusEnabledIfNeeded;
- (void)_showErrorAlert;
- (void)_updateConstraintsForContentSizeDidChangeNotification;
- (void)_updateGeniusState;
- (void)_updateLearnMoreButtonState;
- (void)_updateViewConstraintsForGeniusDisabled;
- (void)_updateViewConstraintsForGeniusEnabled;
- (void)_updateViewsForCurrentState;
- (id)contentScrollView;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (id)init;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (void)termsViewController:(id)arg1 acceptTermsAndConditions:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)termsViewController:(id)arg1 loadTermsAndConditionsWithCompletionHandler:(id /* block */)arg2;
- (void)termsViewControllerDidCancel:(id)arg1;
- (void)termsViewControllerShouldDismiss:(id)arg1;
- (void)updateViewConstraints;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
