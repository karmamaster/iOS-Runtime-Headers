/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUISearchResultGroupController : NSObject {
    NSMutableDictionary *_appBundleArtworkByIndexPaths;
    NSMutableArray *_appBundleArtworkIndexPathsToLoad;
    NSMutableIndexSet *_appBundleChildrenIndexesToLoad;
    NSMutableDictionary *_artworksByIndex;
    SKUIClientContext *_clientContext;
    <SKUISearchResultGroupControllerDelegate> *_delegate;
    NSMutableIndexSet *_editorialArtworkIndexesToLoad;
    NSMutableIndexSet *_editorialIndexesToLoad;
    NSMutableDictionary *_itemArtworkContextsBySize;
    NSMutableIndexSet *_itemIndexesToLoad;
    NSIndexSet *_onScreenIndexes;
    NSOperationQueue *_operationQueue;
    NSMutableIndexSet *_removedIndexes;
    SKUISearchResultGroup *_resultGroup;
}

@property (nonatomic, readonly) SKUIClientContext *clientContext;
@property (nonatomic) <SKUISearchResultGroupControllerDelegate> *delegate;
@property (nonatomic, readonly) int numberOfEntities;

- (void).cxx_destruct;
- (id)_editorialAtIndex:(unsigned int)arg1;
- (id)_identifierAtIndex:(unsigned int)arg1;
- (id)_itemArtworkContextForCount:(int)arg1;
- (id)_itemAtIndex:(unsigned int)arg1;
- (void)_loadArtworkAtIndex:(unsigned int)arg1;
- (void)_loadEditorialAtIndex:(unsigned int)arg1;
- (void)_loadItemArtworkAtIndexPath:(id)arg1;
- (void)_loadItemsAtIndexes:(id)arg1 childrenAtIndexes:(id)arg2;
- (void)_loadMore;
- (void)_reloadIndexesToLoad;
- (void)_setArtworkResponse:(id)arg1 error:(id)arg2 forIndex:(unsigned int)arg3;
- (void)_setEditorialResponse:(id)arg1 error:(id)arg2 forIndex:(unsigned int)arg3;
- (void)_setItemArtworkResponse:(id)arg1 error:(id)arg2 forIndexPath:(id)arg3;
- (void)_setItemResponse:(id)arg1 error:(id)arg2 forIndexes:(id)arg3 childrenAtIndexes:(id)arg4;
- (id)clientContext;
- (void)dealloc;
- (id)delegate;
- (id)editorialArtworkAtIndex:(unsigned int)arg1;
- (id)editorialAtIndex:(unsigned int)arg1;
- (id)entityAtIndex:(unsigned int)arg1;
- (int)entityTypeAtIndex:(int)arg1;
- (id)identifierAtIndex:(unsigned int)arg1;
- (id)initWithSearchResultGroup:(id)arg1 clientContext:(id)arg2;
- (id)itemArtworkAtIndex:(unsigned int)arg1 subindex:(unsigned int)arg2;
- (id)itemAtIndex:(unsigned int)arg1;
- (int)numberOfEntities;
- (void)setDelegate:(id)arg1;
- (void)updateForVisibleIndexes:(id)arg1;

@end
