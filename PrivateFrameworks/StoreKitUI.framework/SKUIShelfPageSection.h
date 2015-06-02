/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIShelfPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIViewElementSlideshowDelegate, UICollectionViewDataSource, UICollectionViewDelegate> {
    SKUIViewElementLayoutContext *_cellLayoutContext;
    int _lastNeedsMoreCount;
    int _lockupType;
    BOOL _needsLayout;
    BOOL _needsReload;
    BOOL _rendersWithPerspective;
    UICollectionView *_shelfCollectionView;
    SKUIShelfLayoutData *_shelfLayoutData;
    SKUIShelfViewElement *_shelfViewElement;
    SKUIViewElementSlideshowController *_slideshowController;
    NSArray *_viewElements;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) SKUIShelfPageComponent *pageComponent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (Class)_cellClassForLockup:(id)arg1;
- (Class)_cellClassForViewElement:(id)arg1;
- (float)_columnSpacingForViewElements:(id)arg1;
- (id)_dequeueCellForLockup:(id)arg1 collectionView:(id)arg2 indexPath:(id)arg3;
- (int)_lockupTypeForLockup:(id)arg1;
- (void)_performDefaultSelectActionForViewElement:(id)arg1;
- (float)_perspectiveHeightForContentSize:(float)arg1;
- (void)_reloadShelfLayoutData;
- (void)_reloadViewElementProperties;
- (id)_shelfCollectionView;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (int)applyUpdateType:(int)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)backgroundColorForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { float x1; float x2; })cellSizeForIndexPath:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didConfirmButtonElement:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 layout:(id)arg2 willApplyLayoutAttributes:(id)arg3;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (void)dealloc;
- (void)deselectItemsAnimated:(BOOL)arg1;
- (void)getModalSourceViewForViewElement:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)initWithPageComponent:(id)arg1;
- (void)invalidateCachedLayoutInformation;
- (int)numberOfCells;
- (void)prefetchResourcesWithReason:(int)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })sectionContentInset;
- (BOOL)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(BOOL)arg3;
- (void)viewElementSlideshowWillDismiss:(id)arg1;
- (void)willAppearInContext:(id)arg1;

@end
