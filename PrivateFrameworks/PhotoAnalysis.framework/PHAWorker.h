/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAWorker : NSObject <PHAWorkerConfiguration> {
    <PHAAssetResourceDataLoading> * _dataLoader;
    PHAManager * _photoAnalysisManager;
    BOOL  _shutdownHasBeenCalled;
    NSObject<OS_dispatch_queue> * _userInitiatedRequestQueue;
    BOOL  _warmedUp;
}

@property (readonly) PHALibraryChangeListener *changeListener;
@property (nonatomic, retain) <PHAAssetResourceDataLoading> *dataLoader;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<OS_dispatch_queue> *executiveStateQueue;
@property (readonly) unsigned int hash;
@property (readonly) BOOL isEnabled;
@property (readonly) NSURL *persistentStorageDirectoryURL;
@property (readonly) PHAManager *photoAnalysisManager;
@property (readonly) PHPhotoLibrary *photoLibrary;
@property (getter=isQuiescent, readonly) BOOL quiescent;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *userInitiatedRequestQueue;
@property (getter=isWarmedUp, nonatomic) BOOL warmedUp;

+ (int)applicationDataFolderIdentifier;
+ (void)configureXPCConnection:(id)arg1;
+ (BOOL)runsExclusively;
+ (BOOL)wantsToReceiveXPCRequestsOnUserInitiatedRequestQueue;
+ (short)workerType;

- (void).cxx_destruct;
- (BOOL)allowCooldownForWorkerChange:(id)arg1;
- (void)assertUserInitiatedRequestQueue;
- (id)changeListener;
- (void)cooldown;
- (id)dataLoader;
- (void)dispatchAsyncToExecutiveStateQueue:(id /* block */)arg1;
- (void)dispatchAsyncToUserInitiatedRequestQueue:(id /* block */)arg1;
- (void)dispatchSyncToUserInitiatedRequestQueue:(id /* block */)arg1;
- (id)executiveStateQueue;
- (BOOL)hasAdditionalJobsForScenario:(unsigned int)arg1;
- (id)init;
- (id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2;
- (BOOL)isEnabled;
- (BOOL)isQuiescent;
- (BOOL)isWarmedUp;
- (id)libraryScopedWorkerPreferences;
- (id)libraryScopedWorkerPreferencesURL;
- (id)nextAdditionalJobWithScenario:(unsigned int)arg1;
- (id)persistentStorageDirectoryURL;
- (id)photoAnalysisManager;
- (id)photoLibrary;
- (void)setDataLoader:(id)arg1;
- (void)setLibraryScopedWorkerPreferencesValue:(id)arg1 forKey:(id)arg2;
- (void)setUserInitiatedRequestQueue:(id)arg1;
- (void)setWarmedUp:(BOOL)arg1;
- (BOOL)shouldCooldownForConstraintChange:(id)arg1;
- (BOOL)shouldWarmupForConstraintChange:(id)arg1;
- (void)shutdown;
- (BOOL)startAcknowledgeDeletionsJob:(id)arg1 error:(id*)arg2;
- (BOOL)startAnalysisJob:(id)arg1 error:(id*)arg2;
- (void)startup;
- (id)statusAsDictionary;
- (BOOL)stopAcknowledgeDeletionsJob:(id)arg1 error:(id*)arg2;
- (BOOL)stopAnalysisJob:(id)arg1 error:(id*)arg2;
- (void)updateLibraryScopedWorkerPreferencesWithEntriesFromDictionary:(id)arg1 keysToRemove:(id)arg2;
- (id)userInitiatedRequestQueue;
- (void)warmup;
- (BOOL)warmupBasedOnConstraintChanges;
- (BOOL)workerJobCausesCooldown:(id)arg1;

@end