/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIBrowseItemPageSection : SKUIStorePageSection

@property (nonatomic, readonly) SKUIBrowseItemComponent *pageComponent;

- (id)_imageForImageViewElement:(id)arg1 styleColor:(id)arg2;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { float x1; float x2; })cellSizeForIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (id)initWithPageComponent:(id)arg1;
- (int)numberOfCells;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })sectionContentInset;
- (void)willAppearInContext:(id)arg1;

@end
