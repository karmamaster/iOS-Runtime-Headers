/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquitySwitchboardEntry : NSObject {
    unsigned int _activeStoreCount;
    int _finishLock;
    BOOL _finishedInitializingForStore;
    BOOL _finishedSetupForStore;
    PFUbiquitySetupAssistant *_finishingSetupAssistant;
    PFUbiquityFilePresenter *_fp;
    BOOL _hasScheduledFinishBlock;
    PFUbiquityFilePresenter *_localFP;
    NSString *_localPeerID;
    PFUbiquityLocation *_localRootLocation;
    PFUbiquitySwitchboardEntryMetadata *_metadata;
    PFUbiquityContainerMonitor *_monitor;
    NSObject<OS_dispatch_queue> *_privateQueue;
    NSMutableDictionary *_registeredCoordinators;
    NSString *_storeName;
    PFUbiquityLocation *_ubiquityRootLocation;
}

@property unsigned int activeStoreCount;
@property (readonly) PFUbiquityFilePresenter *filePresenter;
@property (readonly) PFUbiquitySetupAssistant *finishingSetupAssistant;
@property (readonly) PFUbiquityFilePresenter *localFilePresenter;
@property (nonatomic, readonly) NSString *localPeerID;
@property (readonly) PFUbiquityLocation *localRootLocation;
@property (nonatomic, retain) PFUbiquitySwitchboardEntryMetadata *metadata;
@property (readonly) PFUbiquityContainerMonitor *monitor;
@property (nonatomic, readonly) NSString *storeName;
@property (nonatomic, retain) PFUbiquityLocation *ubiquityRootLocation;

- (unsigned int)activeStoreCount;
- (void)afterDelay:(double)arg1 executeBlockOnGlobalConcurrentQueue:(id /* block */)arg2;
- (void)afterDelay:(double)arg1 executeBlockOnPrivateQueue:(id /* block */)arg2;
- (id)cacheWrapperForStoreName:(id)arg1;
- (void)containerIdentifierChanged:(id)arg1;
- (void)containerStateChanged:(id)arg1;
- (id)createSetOfActiveStoreNames;
- (id)createSetOfPersistentStoreCoordinatorsRegisteredForStoreName:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)entryWillBeRemovedFromSwitchboard;
- (void)executeBlockOnPrivateQueue:(id /* block */)arg1;
- (id)filePresenter;
- (void)filePresenterNoticedBaselineFileChange:(id)arg1;
- (void)filePresenterWasNotifiedTransactionLogs:(id)arg1;
- (BOOL)finishSetupForStore:(id)arg1 withSetupAssistant:(id)arg2 synchronously:(BOOL)arg3 error:(id*)arg4 finishBlock:(id /* block */)arg5;
- (id)finishingSetupAssistant;
- (id)init;
- (id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 ubiquityRootLocation:(id)arg3 andLocalRootLocation:(id)arg4;
- (id)localFilePresenter;
- (id)localPeerID;
- (id)localRootLocation;
- (id)metaForStoreName:(id)arg1;
- (id)metadata;
- (id)monitor;
- (void)monitorStateChanged:(id)arg1;
- (void)registerPersistentStore:(id)arg1 withStoreName:(id)arg2;
- (void)setActiveStoreCount:(unsigned int)arg1;
- (void)setMetadata:(id)arg1;
- (void)setUbiquityRootLocation:(id)arg1;
- (void)setupFinished;
- (id)storeName;
- (void)synchronouslyExecuteBlockOnPrivateQueue:(id /* block */)arg1;
- (id)ubiquityRootLocation;
- (void)unregisterPersistentStore:(id)arg1;
- (void)unregisterPersistentStoreCoordinator:(id)arg1;

@end
