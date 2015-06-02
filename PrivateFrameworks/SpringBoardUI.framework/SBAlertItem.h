/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBAlertItem : NSObject <UIAlertViewDelegate> {
    UIAlertView *_alertSheet;
    BOOL _allowInCar;
    BOOL _allowInSetup;
    BOOL _allowMessageInCar;
    NSArray *_allowedBundleIDs;
    BOOL _didEverActivate;
    BOOL _didPlayPresentationSound;
    BOOL _ignoreIfAlreadyDisplaying;
    BOOL _orderOverSBAlert;
    BOOL _pendInSetupIfNotAllowed;
    BOOL _pendWhileKeyBagLocked;
    BOOL _preventLockOver;
}

@property (nonatomic) BOOL allowInCar;
@property (nonatomic) BOOL allowInSetup;
@property (nonatomic) BOOL allowMessageInCar;
@property (nonatomic, retain) NSArray *allowedBundleIDs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL ignoreIfAlreadyDisplaying;
@property (nonatomic) BOOL pendInSetupIfNotAllowed;
@property (nonatomic) BOOL pendWhileKeyBagLocked;
@property (readonly) Class superclass;

+ (id)_alertItemsController;
+ (void)activateAlertItem:(id)arg1;

- (BOOL)_didEverActivate;
- (BOOL)_dismissesOverlaysOnLockScreen;
- (void)_playPresentationSound;
- (id)alertController;
- (id)alertItemNotificationDate;
- (id)alertItemNotificationSender;
- (int)alertItemNotificationType;
- (int)alertPriority;
- (id)alertSheet;
- (Class)alertSheetClass;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (BOOL)allowAutoUnlock;
- (BOOL)allowInCar;
- (BOOL)allowInSetup;
- (BOOL)allowLockScreenDismissal;
- (BOOL)allowMenuButtonDismissal;
- (BOOL)allowMessageInCar;
- (id)allowedBundleIDs;
- (double)autoDismissInterval;
- (BOOL)behavesSuperModally;
- (void)buttonDismissed;
- (void)cleanPreviousConfiguration;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (void)dealloc;
- (void)didActivate;
- (void)didDeactivateForReason:(int)arg1;
- (void)didFailToActivate;
- (BOOL)didPlayPresentationSound;
- (void)dismiss;
- (void)dismiss:(int)arg1;
- (BOOL)dismissOnLock;
- (BOOL)dismissOnModalDisplayActivation;
- (BOOL)dismissesAutomatically;
- (BOOL)displayActionButtonOnLockScreen;
- (BOOL)forcesModalAlertAppearance;
- (BOOL)hasActiveKeyboardOnScreen;
- (BOOL)ignoreIfAlreadyDisplaying;
- (id)init;
- (BOOL)isCriticalAlert;
- (id)lockLabel;
- (void)noteVolumeOrLockPressed;
- (BOOL)pendInSetupIfNotAllowed;
- (BOOL)pendWhileKeyBagLocked;
- (void)performUnlockAction;
- (void)playPresentationSound;
- (id)prepareNewAlertSheetWithLockedState:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (BOOL)preventInterruption;
- (BOOL)preventLockOver;
- (BOOL)reappearsAfterLock;
- (BOOL)reappearsAfterUnlock;
- (void)screenWillUndim;
- (void)setAllowInCar:(BOOL)arg1;
- (void)setAllowInSetup:(BOOL)arg1;
- (void)setAllowMessageInCar:(BOOL)arg1;
- (void)setAllowedBundleIDs:(id)arg1;
- (void)setIgnoreIfAlreadyDisplaying:(BOOL)arg1;
- (void)setOrderOverSBAlert:(BOOL)arg1;
- (void)setPendInSetupIfNotAllowed:(BOOL)arg1;
- (void)setPendWhileKeyBagLocked:(BOOL)arg1;
- (void)setPreventLockOver:(BOOL)arg1;
- (id)shortLockLabel;
- (BOOL)shouldShowInEmergencyCall;
- (BOOL)shouldShowInLockScreen;
- (id)sound;
- (BOOL)togglesMediaControls;
- (BOOL)undimsScreen;
- (int)unlockSource;
- (BOOL)unlocksScreen;
- (void)willActivate;
- (void)willDeactivateForReason:(int)arg1;
- (void)willRelockForButtonPress:(BOOL)arg1;

@end
