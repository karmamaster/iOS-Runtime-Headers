/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@interface CNFRegSigninLearnMoreView : UIView <PSHeaderFooterView> {
    UILabel *_appleIDLabel;
    CNFRegSplashSignInController *_controller;
    UIButton *_createNewButton;
    UIButton *_forgotIDButton;
    UIButton *_learnMoreButton;
    UITextField *_passwordField;
    UILabel *_passwordLabel;
    int _serviceType;
    UIButton *_signInButton;
    UIProgressIndicator *_signInSpinner;
    PSSpecifier *_specifier;
    UIImageView *_splashImageView;
    UILabel *_titleLabel;
    UserPassBox *_userPassBox;
    UITextField *_usernameField;
    UILabel *_verbiageLabel;
}

@property (nonatomic) CNFRegSplashSignInController *controller;
@property (nonatomic) int serviceType;

- (void)_learnMorePressed:(id)arg1;
- (id)_splashImage;
- (void)_textDidChange:(id)arg1;
- (void)_updateSignInButton;
- (id)appleIDLabel;
- (id)controller;
- (id)createNewButton;
- (void)dealloc;
- (id)forgotIDButton;
- (id)initWithSpecifier:(id)arg1;
- (void)layoutSubviews;
- (id)learnMoreButton;
- (id)passwordField;
- (id)passwordLabel;
- (id)passwordTextField;
- (float)preferredHeightForWidth:(float)arg1;
- (int)serviceType;
- (void)setController:(id)arg1;
- (void)setCreateNewButtonTarget:(id)arg1 selector:(SEL)arg2;
- (void)setFieldsEnabled:(BOOL)arg1;
- (void)setForgotIDButtonTarget:(id)arg1 selector:(SEL)arg2;
- (void)setServiceType:(int)arg1;
- (void)setSignInButtonTarget:(id)arg1 selector:(SEL)arg2;
- (id)signInButton;
- (id)signInSpinner;
- (id)splashImageView;
- (id)titleLabel;
- (id)userPassBox;
- (id)usernameField;
- (id)usernameTextField;
- (id)verbiageLabel;

@end
