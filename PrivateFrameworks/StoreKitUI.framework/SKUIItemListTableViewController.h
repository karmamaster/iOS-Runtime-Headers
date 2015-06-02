/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIItemListTableViewController : UITableViewController <SKUIItemCollectionDelegate> {
    SKUIItemArtworkContext *_artworkContext;
    SKUIClientContext *_clientContext;
    <SKUIItemListTableDelegate> *_delegate;
    BOOL _delegateWantsCanRemove;
    BOOL _delegateWantsDidRemove;
    BOOL _delegateWantsWillDisplay;
    BOOL _didLoadMore;
    NSMutableIndexSet *_hiddenIconIndexSet;
    struct CGSize { 
        float width; 
        float height; 
    } _imageBoundingSize;
    SKUIItemCollectionController *_itemCollectionController;
    SKUIItemList *_itemList;
    SSVLoadURLOperation *_loadMoreOperation;
    BOOL _loadsMoreItems;
    NSOperationQueue *_operationQueue;
    BOOL _requestedLoadMore;
    float _rowHeight;
    int _selectionStyle;
    int _separatorStyle;
    BOOL _suspended;
    SKUIUber *_uber;
}

@property (nonatomic, retain) SKUIItemArtworkContext *artworkContext;
@property (nonatomic, retain) SKUIResourceLoader *artworkLoader;
@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIItemListTableDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) SKUIStyledImageDataConsumer *iconDataConsumer;
@property (nonatomic) struct CGSize { float x1; float x2; } imageBoundingSize;
@property (nonatomic, retain) SKUIItemList *itemList;
@property (nonatomic) BOOL loadsMoreItems;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (nonatomic) float rowHeight;
@property (nonatomic) int selectionStyle;
@property (nonatomic) int separatorStyle;
@property (readonly) Class superclass;
@property (getter=isSuspended, nonatomic) BOOL suspended;
@property (nonatomic, retain) SKUIUber *uber;
@property (nonatomic, readonly) NSString *visibleMetricsImpressions;

- (void).cxx_destruct;
- (void)_finishLoadMoreOperationWithItems:(id)arg1 error:(id)arg2;
- (id)_itemCollectionController;
- (id)_itemListCellForTableView:(id)arg1 indexPath:(id)arg2;
- (id)_loadMoreCellForTableView:(id)arg1 indexPath:(id)arg2;
- (void)_loadRemainingItemsWithPriority:(int)arg1;
- (void)addItems:(id)arg1;
- (id)artworkContext;
- (id)artworkLoader;
- (id)clientContext;
- (void)dealloc;
- (id)delegate;
- (void)deleteRowsAtIndexPaths:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForItemAtIndex:(int)arg1;
- (id)iconDataConsumer;
- (struct CGSize { float x1; float x2; })imageBoundingSize;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)isSuspended;
- (id)itemCollectionController:(id)arg1 cellLayoutForItemIndex:(int)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })itemCollectionController:(id)arg1 itemPageRangeForOffset:(struct CGPoint { float x1; float x2; })arg2;
- (id)itemList;
- (void)itemTableView:(id)arg1 didConfirmItemOfferForTableViewCell:(id)arg2;
- (void)itemTableView:(id)arg1 didRemoveCell:(id)arg2;
- (void)loadNextPageOfArtworkWithReason:(int)arg1;
- (void)loadView;
- (BOOL)loadsMoreItems;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)operationQueue;
- (id)popIconImageViewForItemAtIndex:(int)arg1;
- (float)rowHeight;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { float x1; float x2; })arg2 targetContentOffset:(inout struct CGPoint { float x1; float x2; }*)arg3;
- (int)selectionStyle;
- (int)separatorStyle;
- (void)setArtworkContext:(id)arg1;
- (void)setArtworkLoader:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIconDataConsumer:(id)arg1;
- (void)setImageBoundingSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setItemArtworkContext:(id)arg1;
- (void)setItemCellClass:(Class)arg1;
- (void)setItemList:(id)arg1;
- (void)setLoadsMoreItems:(BOOL)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setRowHeight:(float)arg1;
- (void)setSelectionStyle:(int)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setSuspended:(BOOL)arg1;
- (void)setUber:(id)arg1;
- (BOOL)shouldCacheAheadWhenIdleForItemCollectionController:(id)arg1;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)uber;
- (void)unhideIcons;
- (void)viewDidAppear:(BOOL)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })visibleItemRangeForItemCollectionController:(id)arg1;
- (id)visibleMetricsImpressions;

@end
