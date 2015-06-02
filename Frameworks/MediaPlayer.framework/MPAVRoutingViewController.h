/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVRoutingViewController : UIViewController <MPAVRoutingControllerDelegate, MPAVRoutingTableViewCellDelegate, UITableViewDataSource, UITableViewDelegate> {
    int _airPlayPasswordAlertDidAppearToken;
    BOOL _airPlayPasswordAlertDidAppearTokenIsValid;
    int _airPlayPasswordAlertDidCancelToken;
    BOOL _allowMirroring;
    unsigned int _avItemType;
    NSArray *_cachedRoutes;
    BOOL _cachedShowAirPlayDebugButton;
    <MPAVRoutingViewControllerDelegate> *_delegate;
    BOOL _hasCachedAirPlayDebugButtonStatus;
    BOOL _needsDisplayedRoutesUpdate;
    MPAVRoutingController *_routingController;
    unsigned int _style;
    UIColor *_tableCellsBackgroundColor;
    UIColor *_tableCellsContentColor;
    UITableView *_tableView;
    MPWeakTimer *_updateTimer;
}

@property (nonatomic) BOOL allowMirroring;
@property (setter=setAVItemType:, nonatomic) unsigned int avItemType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MPAVRoutingViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) unsigned int style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned int)_debugButtonTableViewIndex;
- (id)_displayedRoutes;
- (float)_expandedCellHeight;
- (float)_normalCellHeight;
- (void)_pickRoute:(id)arg1;
- (unsigned int)_routeIndexForTableViewIndex:(unsigned int)arg1;
- (id)_routesWhereMirroringIsPreferred;
- (void)_serviceWillPresentAuthenticationPromptNotification:(id)arg1;
- (void)_setNeedsDisplayedRoutesUpdate;
- (void)_setTableCellsBackgroundColor:(id)arg1;
- (void)_setTableCellsContentColor:(id)arg1;
- (void)_setupUpdateTimerIfNecessary;
- (BOOL)_shouldShowAirPlayDebugButton;
- (BOOL)_shouldShowMirroringCellForRoute:(id)arg1;
- (void)_showAirPlayDebug;
- (id)_tableCellsBackgroundColor;
- (id)_tableCellsContentColor;
- (id)_tableView;
- (float)_tableViewHeightAccordingToDataSource;
- (unsigned int)_tableViewIndexForRouteIndex:(unsigned int)arg1;
- (void)_updateDisplayedRoutes;
- (BOOL)allowMirroring;
- (unsigned int)avItemType;
- (void)dealloc;
- (id)delegate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(unsigned int)arg1;
- (struct CGSize { float x1; float x2; })preferredContentSize;
- (void)routingCell:(id)arg1 mirroringSwitchValueDidChange:(BOOL)arg2;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)setAVItemType:(unsigned int)arg1;
- (void)setAllowMirroring:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (unsigned int)style;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
