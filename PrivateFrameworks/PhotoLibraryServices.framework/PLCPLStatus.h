/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCPLStatus : NSObject <CPLStatusDelegate> {
    CPLStatus *_cplStatus;
    <PLCPLStatusDelegate> *_delegate;
    BOOL _isCPLDataClassEnabled;
    BOOL _isCPLDataClassEnabledValid;
    unsigned int _numberOfImagesToDownload;
    unsigned int _numberOfImagesToUpload;
    unsigned int _numberOfPulledAssets;
    unsigned int _numberOfPushedAsset;
    unsigned int _numberOfVideosToDownload;
    unsigned int _numberOfVideosToUpload;
    NSProgress *_progress;
    id _progressSubscriber;
    double _syncProgress;
    unsigned int _syncProgressState;
    unsigned int _totalAssetsOnServer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PLCPLStatusDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL diskIsLowOnSpace;
@property (nonatomic, readonly, retain) NSDate *exitDeleteTime;
@property (nonatomic, readonly) BOOL hasExitedCPL;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isConnecting;
@property (nonatomic, readonly) BOOL isEnabled;
@property (nonatomic, readonly) BOOL isExceedingQuota;
@property (nonatomic, readonly) BOOL isPreparing;
@property (nonatomic, readonly) BOOL isSyncing;
@property (nonatomic, readonly, retain) NSDate *lastSuccessfulSyncDate;
@property (nonatomic, readonly) unsigned int numberOfImagesToDownload;
@property (nonatomic, readonly) unsigned int numberOfImagesToUpload;
@property (nonatomic, readonly) unsigned int numberOfPulledAssets;
@property (nonatomic, readonly) unsigned int numberOfPushedAsset;
@property (nonatomic, readonly) unsigned int numberOfVideosToDownload;
@property (nonatomic, readonly) unsigned int numberOfVideosToUpload;
@property (setter=_setProgress:, nonatomic, retain) NSProgress *progress;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double syncProgress;
@property (nonatomic, readonly) unsigned int totalAssetsOnServer;

+ (void)_prepareQueue;
+ (void)_setPulledItemsCount:(unsigned int)arg1;
+ (id)readPListWithFilename:(id)arg1;
+ (void)setDownloadCountsForImages:(unsigned int)arg1 videos:(unsigned int)arg2;
+ (void)setPushedAssetCount:(unsigned int)arg1;
+ (void)setUploadCountsForImages:(unsigned int)arg1 videos:(unsigned int)arg2;
+ (void)writeDict:(id)arg1 withFilename:(id)arg2;

- (void)_calculateNumberOfPulledAssets;
- (void)_calculateTotalAssetsOnServer;
- (BOOL)_loadDownloadCounts;
- (void)_loadPulledItemsCount;
- (BOOL)_loadUploadCounts;
- (void)_networkReachabilityChanged:(id)arg1;
- (void)_setProgress:(id)arg1;
- (void)_setSyncProgress:(double)arg1;
- (void)_setup;
- (void)_subscribeToProgress;
- (void)_teardown;
- (void)_unsubscribeFromProgress;
- (void)_updateSyncProgress;
- (void)accountStoreDidChange:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (BOOL)diskIsLowOnSpace;
- (unsigned int)diskSpaceLevel;
- (id)exitDeleteTime;
- (BOOL)hasExitedCPL;
- (id)init;
- (BOOL)isConnecting;
- (BOOL)isEnabled;
- (BOOL)isExceedingQuota;
- (BOOL)isPreparing;
- (BOOL)isSyncing;
- (id)lastSuccessfulSyncDate;
- (unsigned int)numberOfImagesToDownload;
- (unsigned int)numberOfImagesToUpload;
- (unsigned int)numberOfPulledAssets;
- (unsigned int)numberOfPushedAsset;
- (unsigned int)numberOfVideosToDownload;
- (unsigned int)numberOfVideosToUpload;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)progress;
- (void)setDelegate:(id)arg1;
- (void)statusDidChange:(id)arg1;
- (double)syncProgress;
- (unsigned int)totalAssetsOnServer;

@end
