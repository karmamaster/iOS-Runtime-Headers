/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface RUSignInViewController : UIViewController <UIGestureRecognizerDelegate, UITextFieldDelegate> {
    int _accountChangeIgnoreCount;
    SKUICircleProgressIndicator *_activityIndicatorView;
    UITextField *_appleIDTextField;
    UILabel *_appleIDTitleLabel;
    UIBarButtonItem *_cancelBarButtonItem;
    UIButton *_continueButton;
    UIButton *_createAccountButton;
    <RUSignInViewControllerDelegate> *_delegate;
    UITapGestureRecognizer *_dismissGestureRecognizer;
    MPUShapeView *_entryContentView;
    UIButton *_forgotPasswordButton;
    BOOL _isAuthenticating;
    BOOL _isLoading;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _keyboardFrame;
    UILabel *_loadingLabel;
    UITextField *_passwordTextField;
    UILabel *_passwordTitleLabel;
    UILabel *_titleLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RUSignInViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_accountStoreDidChangeNotification:(id)arg1;
- (void)_beginIgnoringAccountChanges;
- (void)_cancelAction:(id)arg1;
- (void)_continueAction:(id)arg1;
- (void)_createAccountAction:(id)arg1;
- (void)_dismissKeyboardAction:(id)arg1;
- (void)_endIgnoringAccountChanges;
- (void)_forgotPasswordAction:(id)arg1;
- (void)_keyboardWillChangeFrameNotification:(id)arg1;
- (void)_keyboardWillHideNotification:(id)arg1;
- (void)_setLoading:(BOOL)arg1;
- (void)_textFieldDidChangeAction:(id)arg1;
- (void)_updateAccountRelatedControls;
- (void)_updateContinueButtonVisibilityAnimated:(BOOL)arg1;
- (void)dealloc;
- (id)delegate;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)resetFakeLoadingState;
- (void)setDelegate:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
