/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDPlayableContentViewController : UIViewController {
    NSString *_bundleID;
    BOOL _hasBrowsableContent;
    MCDBrowsableContentModel *_model;
    UINavigationController *_navigationController;
}

@property (nonatomic, readonly, copy) NSString *bundleID;

- (void).cxx_destruct;
- (void)_embedAppropriateViewController;
- (id)bundleID;
- (id)initWithBundleID:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)preferredFocusedItem;
- (void)refreshNavigationStackForLaunch:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;

@end
