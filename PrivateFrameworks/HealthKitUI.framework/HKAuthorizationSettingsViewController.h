/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@interface HKAuthorizationSettingsViewController : UITableViewController <HKSwitchTableViewCellDelegate> {
    UIBarButtonItem *_cancelButtonItem;
    HKDataCategoryController *_dataCategoryController;
    <HKAuthorizationSettingsViewControllerDelegate> *_delegate;
    UIBarButtonItem *_doneButtonItem;
    HKHealthStore *_healthStore;
    NSString *_shareDescription;
    HKSource *_source;
    HKSourceAuthorizationController *_sourceAuthorizationController;
    int _style;
    NSString *_updateDescription;
}

@property (nonatomic, retain) UIBarButtonItem *cancelButtonItem;
@property (nonatomic, retain) HKDataCategoryController *dataCategoryController;
@property (nonatomic) <HKAuthorizationSettingsViewControllerDelegate> *delegate;
@property (nonatomic, retain) UIBarButtonItem *doneButtonItem;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, copy) NSString *shareDescription;
@property (nonatomic, retain) HKSource *source;
@property (nonatomic, retain) HKSourceAuthorizationController *sourceAuthorizationController;
@property (nonatomic, readonly) int style;
@property (nonatomic, copy) NSString *updateDescription;

- (void).cxx_destruct;
- (void)_addCancelAndDoneButtons;
- (void)_addHeaderView;
- (void)_addMessageLabelWithMessage:(id)arg1 size:(float)arg2;
- (int)_authorizationSectionForSection:(int)arg1;
- (id)_authorizationSettingCellForRowAtIndexPath:(id)arg1;
- (void)_configurationFailedWithError:(id)arg1;
- (void)_done:(id)arg1;
- (void)_finishWithError:(id)arg1;
- (BOOL)_isPrompting;
- (BOOL)_isTypeEnabledAtIndexPath:(id)arg1;
- (BOOL)_shouldDisplayReadingSection;
- (BOOL)_shouldDisplaySharingSection;
- (id)_typeForIndexPath:(id)arg1 section:(int*)arg2;
- (id)cancelButtonItem;
- (id)dataCategoryController;
- (id)delegate;
- (id)doneButtonItem;
- (id)healthStore;
- (id)init;
- (id)initWithHealthStore:(id)arg1 style:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)reloadAuthorizationSettings;
- (void)setCancelButtonItem:(id)arg1;
- (void)setDataCategoryController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDoneButtonItem:(id)arg1;
- (void)setShareDescription:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setSourceAuthorizationController:(id)arg1;
- (void)setUpdateDescription:(id)arg1;
- (id)shareDescription;
- (id)source;
- (id)sourceAuthorizationController;
- (int)style;
- (void)switchCellValueChanged:(id)arg1 value:(BOOL)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)updateDescription;
- (void)viewDidLoad;

@end
