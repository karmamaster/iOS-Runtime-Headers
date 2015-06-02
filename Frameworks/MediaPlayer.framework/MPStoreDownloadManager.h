/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreDownloadManager : NSObject <SSDownloadManagerObserver, SSPurchaseManagerDelegate, UIAlertViewDelegate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableArray *_blockObservers;
    UIAlertView *_cellularDownloadAlertView;
    NSMutableArray *_cellularDownloadRequestCompletionHandlers;
    NSMapTable *_downloadIdentifiersToDownloads;
    SSDownloadManager *_downloadManager;
    NSMutableArray *_downloads;
    NSMapTable *_downloadsToObservers;
    NSMapTable *_libraryIdentifiersToDownloads;
    NSHashTable *_observersForAllDownloads;
    SSPurchaseManager *_purchaseManager;
    NSMapTable *_storeIdentifiersToDownloads;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *downloads;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_addPurchaseFinishedHandler:(id /* block */)arg1 forDownloads:(id)arg2;
- (void)_dismissAndCleanupCellularDownloadAlertViewWithResult:(int)arg1;
- (id)_existingDownloadForSSDownload:(id)arg1;
- (id)_init;
- (void)_matchCellularRestrictedDidChangeNotification:(id)arg1;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (id)_observersForAllDownloads;
- (id)_observersForDownload:(id)arg1;
- (void)_onQueue_addDownloadToMapTables:(id)arg1;
- (id)_onQueue_findStoreDownloadWithSSDownload:(id)arg1 SSPurchase:(id)arg2;
- (BOOL)_onQueue_hasExistingDownloadForStoreDownload:(id)arg1;
- (void)_onQueue_removeDownloadFromMapTables:(id)arg1;
- (void)_registerBlockObserver:(id)arg1;
- (void)_sendDownloadsDidChangeToObserversWithAddedDownloads:(id)arg1 removedDownloads:(id)arg2;
- (void)_sendDownloadsDidFinishPurchasesToObserversForDownloads:(id)arg1;
- (void)_sendDownloadsDidFinishToObserversForDownloads:(id)arg1 notifyDownloadManager:(BOOL)arg2 completionHandler:(id /* block */)arg3;
- (void)_sendDownloadsDidProgressToObserversForDownloads:(id)arg1;
- (void)_unregisterBlockObserver:(id)arg1;
- (void)_updateDownloadsWithAdditions:(id)arg1 removals:(id)arg2;
- (void)_updateMediaItemPropertiesForFinishedStoreDownload:(id)arg1 SSDownload:(id)arg2;
- (void)addDownloads:(id)arg1;
- (void)addFinishHandler:(id /* block */)arg1 forDownloads:(id)arg2;
- (void)addObserver:(id)arg1 forDownloads:(id)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)cancelDownloads:(id)arg1;
- (void)dealloc;
- (id)downloadForDownloadPersistentIdentifier:(long long)arg1;
- (id)downloadForMediaItem:(id)arg1;
- (id)downloadForMediaItemPersistentID:(unsigned long long)arg1;
- (id)downloadForStoreID:(long long)arg1;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (id)downloads;
- (id)init;
- (void)pauseDownloads:(id)arg1;
- (void)prioritizeDownloads:(id)arg1;
- (void)purchaseManager:(id)arg1 didFinishPurchasesWithResponses:(id)arg2;
- (void)removeObserver:(id)arg1 forDownloads:(id)arg2;
- (void)requestPermissionToDownloadWithType:(int)arg1 completionHandler:(id /* block */)arg2;
- (void)resumeDownloads:(id)arg1;

@end
