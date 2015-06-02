/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIIPadSearchViewController : UIViewController <SKUIIPadSearchHeaderViewDelegate, SKUIItemCollectionDelegate, SKUIMetricsViewController, SKUISearchRelatedViewDelegate, SKUISearchResultGroupControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UIViewControllerRestoration> {
    SKUIClientContext *_clientContext;
    UICollectionView *_collectionView;
    <SKUISearchChildViewControllerDelegate> *_delegate;
    NSDictionary *_facetSelections;
    SKUIIPadSearchHeaderView *_headerView;
    NSMutableDictionary *_indexesByItemIndex;
    SKUIItemCollectionController *_itemCollectionController;
    NSMutableDictionary *_itemIndexesByIndex;
    SKUIMetricsController *_metricsController;
    SKUISearchPage *_page;
    NSString *_previousRelatedSearchTerm;
    SKUISearchRelatedView *_relatedView;
    NSArray *_searchFacets;
    SKUISearchResultGroupController *_searchResultGroupController;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUISearchChildViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDictionary *facetSelections;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) SKUIMetricsController *metricsController;
@property (nonatomic, readonly) NSString *previousRelatedSearchTerm;
@property (nonatomic, retain) NSArray *searchFacets;
@property (nonatomic, readonly) SKUISearchPage *searchPage;
@property (readonly) Class superclass;

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (void).cxx_destruct;
- (void)_addImpressionWithItemID:(long long)arg1 type:(id)arg2 index:(int)arg3;
- (id)_collectionView;
- (int)_indexForItemIndex:(int)arg1;
- (id)_itemCollectionController;
- (int)_itemIndexForIndex:(int)arg1;
- (void)_noResultsAction:(id)arg1;
- (void)_recordClickEvent:(id)arg1 withCell:(id)arg2;
- (void)_recordClickEventForEditorialAtIndex:(int)arg1;
- (void)_recordClickEventForItemAtIndex:(int)arg1;
- (void)_recordClickEventForItemOfferAtIndex:(int)arg1;
- (void)_reloadFacets;
- (void)_reloadOrientation:(int)arg1;
- (void)_reloadView;
- (void)_spellCorrectionAction:(id)arg1;
- (id)_visibleMetricsImpressionsString;
- (id)activeMetricsController;
- (id)clientContext;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)contentScrollView;
- (void)dealloc;
- (id)delegate;
- (id)facetSelections;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)itemCollectionController:(id)arg1 applyScreenshotImage:(id)arg2 toCellLayout:(id)arg3;
- (id)itemCollectionController:(id)arg1 cellLayoutForItemIndex:(int)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })itemCollectionController:(id)arg1 itemPageRangeForOffset:(struct CGPoint { float x1; float x2; })arg2;
- (id)itemCollectionController:(id)arg1 screenshotForItem:(id)arg2;
- (void)itemCollectionView:(id)arg1 didConfirmItemOfferForCell:(id)arg2;
- (void)loadView;
- (id)metricsController;
- (id)previousRelatedSearchTerm;
- (void)scrollToTop;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { float x1; float x2; })arg2 targetContentOffset:(inout struct CGPoint { float x1; float x2; }*)arg3;
- (id)searchFacets;
- (void)searchHeaderViewDidUpdateFacetSelections:(id)arg1 facetIndex:(int)arg2 listIndex:(int)arg3;
- (id)searchPage;
- (void)searchRelatedView:(id)arg1 didSelectRelatedQueryAtIndex:(int)arg2;
- (void)searchRelatedViewDidSelectBackButton:(id)arg1;
- (void)searchResultGroupController:(id)arg1 didLoadArtworkAtIndex:(unsigned int)arg2;
- (void)searchResultGroupController:(id)arg1 didLoadEntityAtIndexes:(id)arg2 removedEntityAtIndexes:(id)arg3;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFacetSelections:(id)arg1;
- (void)setMetricsController:(id)arg1;
- (void)setSearchFacets:(id)arg1;
- (void)setSearchPage:(id)arg1 previousRelatedSearchTerm:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })visibleItemRangeForItemCollectionController:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
