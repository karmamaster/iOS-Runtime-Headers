/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIJSITunesStore : IKJSITunesStore <SKUIItemStateCenterObserver, SKUIJSITunesStore> {
    SKUIClientContext *_clientContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishPurchaseForOptions:(id)arg1 purchaseResponse:(id)arg2;
- (void)_purchaseRequestDidSucceedNotification:(id)arg1;
- (void)approveInPerson:(id)arg1 :(id)arg2;
- (void)attemptLocalAskToBuyApproval:(id)arg1;
- (void)buy:(id)arg1;
- (void)dealloc;
- (void)download:(id)arg1;
- (void)exit:(id)arg1;
- (void)findApps:(id)arg1 :(id)arg2 :(id)arg3;
- (void)findLibraryItems:(id)arg1 :(id)arg2 :(id)arg3;
- (void)getBookSample:(id)arg1;
- (id)initWithAppContext:(id)arg1 clientContext:(id)arg2;
- (void)itemStateCenterMediaLibrariesDidChange:(id)arg1;
- (void)launchICloudFamilySettings;
- (void)loadGratisContent:(id)arg1;
- (void)log:(id)arg1;
- (BOOL)resourceExists:(id)arg1;
- (void)sendOnPageResponseWithDocument:(id)arg1 data:(id)arg2 URLResponse:(id)arg3 performanceMetrics:(id)arg4;
- (BOOL)sendOnXEventWithDictionary:(id)arg1;
- (void)setPreviewOverlay:(id)arg1 :(id)arg2;

@end
