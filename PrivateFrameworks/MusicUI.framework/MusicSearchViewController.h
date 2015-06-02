/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@interface MusicSearchViewController : UIViewController <MusicSearchTableViewDelegate, UISearchDisplayDelegate, UITableViewDataSource, UITableViewDelegate> {
    SKUICircleProgressIndicator *_activityIndicatorView;
    NSMapTable *_calculatedHeightByTableViewRelatedClass;
    BOOL _canShowContinueSearch;
    UIButton *_continueSearchButton;
    <MusicSearchViewControllerDelegate> *_delegate;
    BOOL _isSearchInProgress;
    UILabel *_loadingLabel;
    UILabel *_noResultsLabel;
    NSMutableArray *_nonEmptySearchDataSources;
    UITraitCollection *_previousTraitCollection;
    NSArray *_searchDataSources;
    NSOperationQueue *_searchOperationQueue;
    NSString *_searchTerm;
    UITableView *_tableView;
    UIView *_tableViewBackgroundView;
    UIView *_tableViewDimmingView;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MusicSearchViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSString *searchTerm;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITableView *tableView;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_continueSearchAction:(id)arg1;
- (float)_heightForCellConfigurationClass:(Class)arg1 inTableView:(id)arg2;
- (void)_invalidateCalculatedHeights;
- (BOOL)_isSearchInProgress;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;
- (void)_musicDefaultsDidChangeNotification:(id)arg1;
- (id)_newSearchDataSources;
- (void)_performDefaultActionForSearchDataSource:(id)arg1 entity:(id)arg2;
- (void)_reloadData;
- (Class)_resultsTableViewClass;
- (Class)_searchCellConfigurationClassForSearchDataSource:(id)arg1;
- (void)_searchDataSourceDidInvalidateNotification:(id)arg1;
- (id)_searchSectionTitleForSearchDataSource:(id)arg1;
- (void)_storeRestrictionsDidChangeNotification:(id)arg1;
- (void)_tapGestureRecognizerAction:(id)arg1;
- (void)_updateResultsForSearchTerm:(id)arg1;
- (void)_updateVisibleHeadersState;
- (void)dealloc;
- (id)delegate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)musicSearchTableView:(id)arg1 traitCollectionDidChange:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)scrollViewDidScroll:(id)arg1;
- (void)searchDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayController:(id)arg1 willUnloadSearchResultsTableView:(id)arg2;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (id)searchTerm;
- (void)setDelegate:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3;
- (void)tableViewDidFinishReload:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
