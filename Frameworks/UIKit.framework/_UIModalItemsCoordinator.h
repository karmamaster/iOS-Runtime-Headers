/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIModalItemsCoordinator : NSObject {
    _UIModalItemHostingWindow *__hostingWindowForAlerts;
    _UIModalItemHostingWindow *__hostingWindowForSBAlerts;
    _UIModalItemAppViewController *__viewControllerForAlerts;
    _UIModalItemSBViewController *__viewControllerForSBAlerts;
    NSMapTable *_presentingSessionsMapTable;
    NSMapTable *_sessionForItemMapTable;
}

@property (nonatomic, retain) _UIModalItemHostingWindow *_hostingWindowForAlerts;
@property (nonatomic, retain) _UIModalItemHostingWindow *_hostingWindowForSBAlerts;
@property (nonatomic, retain) _UIModalItemAppViewController *_viewControllerForAlerts;
@property (nonatomic, retain) _UIModalItemSBViewController *_viewControllerForSBAlerts;
@property (nonatomic, retain) NSMapTable *presentingSessionsMapTable;
@property (nonatomic, retain) NSMapTable *sessionForItemMapTable;

+ (void)_desaturateUIForSB;
+ (void)_getRidOfViewControllerForAlerts;
+ (void)_getRidOfViewControllerForSBAlerts;
+ (void)_resaturateUIForSB;
+ (void)noteOrientationChangingTo:(int)arg1 animated:(BOOL)arg2;
+ (id)sharedModalItemsCoordinator;

- (void)_addItemToStack:(id)arg1 replacingItem:(id)arg2 forPresentingViewController:(id)arg3;
- (void)_dismissItem:(id)arg1 withTappedButtonIndex:(int)arg2 animated:(BOOL)arg3 notifyDelegate:(BOOL)arg4;
- (void)_getRidOfViewControllerForAlerts;
- (void)_getRidOfViewControllerForSBAlerts;
- (void)_hideModalItemsForType:(int)arg1 presentingViewController:(id)arg2 dimSpotlightView:(BOOL)arg3 animated:(BOOL)arg4;
- (void)_hidePresentingSessionForModalItem:(id)arg1 keepDimmingView:(BOOL)arg2 animated:(BOOL)arg3;
- (id)_hostingWindowForAlerts;
- (id)_hostingWindowForSBAlerts;
- (void)_notifyDelegateDidDismissItem:(id)arg1 withIndex:(int)arg2;
- (void)_notifyDelegateDidPresentItem:(id)arg1;
- (BOOL)_notifyDelegateModalItem:(id)arg1 tappedButtonAtIndex:(int)arg2;
- (void)_notifyDelegateWillDismissItem:(id)arg1 withIndex:(int)arg2;
- (void)_notifyDelegateWillPresentItem:(id)arg1;
- (void)_notifyDissmissedItem:(id)arg1;
- (void)_presentItem:(id)arg1 replacingItem:(id)arg2 inViewController:(id)arg3 animated:(BOOL)arg4;
- (id)_presentingSessionForViewController:(id)arg1 ofItemsType:(int)arg2;
- (id)_presentingViewControllerForAlertCompatibility;
- (id)_presentingViewControllerForAlertCompatibilityCreateIfNeeded:(BOOL)arg1;
- (id)_presentingViewControllerForSBCompatibility;
- (id)_rootViewControllerForModalItem:(id)arg1;
- (void)_showModalItemsForType:(int)arg1 presentingViewController:(id)arg2 undimSpotlightView:(BOOL)arg3 animated:(BOOL)arg4;
- (void)_showNextModalItemIfNecessaryAfterHidingItem:(id)arg1 showingItem:(id)arg2 animate:(BOOL)arg3;
- (void)_updateItem:(id)arg1 animated:(BOOL)arg2;
- (id)_viewControllerForAlerts;
- (id)_viewControllerForSBAlerts;
- (void)dealloc;
- (void)hideForSpringBoardAlert:(BOOL)arg1;
- (id)hostingViewControllerForViewController:(id)arg1 andModalItem:(id)arg2 create:(BOOL)arg3;
- (id)init;
- (void)noteOrientationChangingTo:(int)arg1 animated:(BOOL)arg2;
- (id)presentingSessionsMapTable;
- (id)presentingViewControllerForItem:(id)arg1 create:(BOOL)arg2;
- (id)sessionForItemMapTable;
- (void)setPresentingSessionsMapTable:(id)arg1;
- (void)setSessionForItemMapTable:(id)arg1;
- (void)set_hostingWindowForAlerts:(id)arg1;
- (void)set_hostingWindowForSBAlerts:(id)arg1;
- (void)set_viewControllerForAlerts:(id)arg1;
- (void)set_viewControllerForSBAlerts:(id)arg1;
- (void)showAfterSpringBoardAlert:(BOOL)arg1;

@end
