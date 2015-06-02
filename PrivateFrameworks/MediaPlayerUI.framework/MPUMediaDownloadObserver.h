/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUMediaDownloadObserver : NSObject {
    BOOL _hasPendingProgressHandlerExecution;
    BOOL _invalidated;
    BOOL _paused;
    long long _pid;
    id /* block */ _progressHandler;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) BOOL canCancel;
@property (getter=isCurrentlyPlayable, readonly) BOOL currentlyPlayable;
@property (readonly) double downloadProgress;
@property (getter=isPaused, readonly) BOOL paused;
@property (nonatomic, readonly) long long persistentID;
@property (copy) id /* block */ progressHandler;
@property (getter=isPurchasing, nonatomic, readonly) BOOL purchasing;
@property (nonatomic, readonly) double rawDownloadProgress;
@property (nonatomic, readonly) double rawDownloadTotal;
@property (getter=isRestoreDownload, readonly) BOOL restoreDownload;

+ (id)newObserverForMediaCollection:(id)arg1;
+ (id)newObserverForMediaItem:(id)arg1;
+ (id)newObserverForMediaItemPersistentID:(unsigned long long)arg1 isPendingSync:(BOOL)arg2 storeID:(long long)arg3;
+ (id)newObserverForStoreID:(long long)arg1;
+ (id)sharedITunesStoreDownloadManager;

- (void).cxx_destruct;
- (void)_onQueue_invalidate;
- (void)_onQueue_setShouldFireProgressHandler;
- (BOOL)canCancel;
- (void)cancelDownload;
- (void)dealloc;
- (double)downloadProgress;
- (id)init;
- (void)invalidate;
- (BOOL)isCurrentlyPlayable;
- (BOOL)isPaused;
- (BOOL)isPurchasing;
- (BOOL)isRestoreDownload;
- (void)pauseDownload;
- (long long)persistentID;
- (id /* block */)progressHandler;
- (double)rawDownloadProgress;
- (double)rawDownloadTotal;
- (void)resumeDownload;
- (void)setProgressHandler:(id /* block */)arg1;

@end
