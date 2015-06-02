/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface AVController : NSObject {
    struct AVControllerPrivate { id x1; id x2; id x3; id x4; int x5; float x6; float x7; int x8; BOOL x9; id x10; struct __CFString {} *x11; id x12; BOOL x13; BOOL x14; id x15; struct OpaqueFigVisualContext {} x16; id x17; struct __CFRunLoop {} x18; unsigned int x19; int x20; int x21; int x22; BOOL x23; BOOL x24; BOOL x25; BOOL x26; id x27; struct OpaqueFigPlayer {} x28; id x29; id x30; BOOL x31; id x32; BOOL x33; BOOL x34; BOOL x35; int x36; BOOL x37; } *_priv;
}

+ (id)avController;
+ (id)avControllerWithQueue:(id)arg1 error:(id*)arg2;
+ (id)compatibleAudioRouteForRoute:(id)arg1;
+ (id)convertFigTimeDictionaryToTimeIntervalWithKey:(id)arg1 stringURLToNSURLWithKey:(id)arg2 inDictionaries:(id)arg3;
+ (BOOL)isNetworkSupportedPath:(id)arg1;
+ (BOOL)isSupportedFileExtension:(id)arg1;
+ (BOOL)isSupportedMimeType:(id)arg1;
+ (void)setEnableNetworkMode:(BOOL)arg1;

- (id)_figPlayerNotifications;
- (BOOL)activate:(id*)arg1;
- (id)addNextFeederItemToQueue;
- (void)applyDesiredRepeatMode;
- (id)attributeForKey:(id)arg1;
- (void)avPlaybackQueueCurrentItemChangedNotification:(id)arg1;
- (BOOL)beginInterruption:(id*)arg1;
- (BOOL)beginRepeatGap;
- (id)bookmarkGroupIDForAVItem:(id)arg1;
- (double)bookmarkTimeForAVItem:(id)arg1;
- (BOOL)canBeginInterruption;
- (void)cancelAllCGImageRequests;
- (void)cancelContinueAfterRepeatGap;
- (void)checkQueueSpace;
- (void)continueAfterRepeatGap;
- (long)copyImageForTime:(struct __CVBuffer {}**)arg1 time:(const struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2;
- (struct OpaqueFigPlaybackItem { }*)createItemWithURL:(id)arg1 flags:(unsigned long)arg2 error:(int*)arg3;
- (struct OpaqueFigPlaybackItem { }*)currentFPItem;
- (id)currentItem;
- (void)currentItemHasChanged:(id)arg1;
- (void)currentItemWillChangeToItem:(id)arg1 oldItemCurrentTime:(double)arg2;
- (double)currentTime;
- (void)dealloc;
- (id)delegate;
- (void)dequeueDeadItem;
- (void)dequeueFirstItem;
- (void)endInterruptionWithStatus:(id)arg1;
- (void)ensurePlaybackQueueImmed;
- (int)eqPreset;
- (id)errorWithDescription:(id)arg1 code:(long)arg2;
- (void)feederInvalidatedWithCurrentItemMoved:(id)arg1;
- (void)feederRangeWasInserted:(id)arg1;
- (void)feederRangeWasRemoved:(id)arg1;
- (void)figPlayerNotificationHandler:(id)arg1;
- (void)fmpEffectiveVolumeDidChange;
- (void)fpItemNotification:(id)arg1 sender:(id)arg2;
- (struct CGImage { }*)grabCGImageAtTime:(double)arg1 withTimeOptions:(int)arg2 withImageOptions:(id)arg3 actualTime:(double*)arg4;
- (BOOL)havePlayedCurrentItem;
- (unsigned int)indexOfCurrentQueueFeederItem;
- (id)init;
- (id)initForStreaming;
- (id)initWithError:(id*)arg1;
- (id)initWithQueue:(id)arg1 error:(id*)arg2;
- (id)initWithQueue:(id)arg1 fmpType:(unsigned int)arg2 error:(id*)arg3;
- (BOOL)isCurrentItemReady;
- (BOOL)isNewImageAvailableForTime:(const struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg1 willNeverBeAvailable:(BOOL*)arg2;
- (BOOL)isValid;
- (void)itemHasFinishedPlayingNotification:(id)arg1;
- (id)lkLayer;
- (void)logPerformanceDataForCurrentItem;
- (void)makeCurrentItemReady;
- (void)makeError:(id*)arg1 withDescription:(id)arg2 code:(long)arg3;
- (BOOL)muted;
- (BOOL)okToNotifyFromThisThread;
- (id)outputQTESFilePath;
- (void)pause;
- (BOOL)play:(id*)arg1;
- (BOOL)playNextItem:(id*)arg1;
- (struct AVControllerPrivate { id x1; id x2; id x3; id x4; int x5; float x6; float x7; int x8; BOOL x9; id x10; struct __CFString {} *x11; id x12; BOOL x13; BOOL x14; id x15; struct OpaqueFigVisualContext {} x16; id x17; struct __CFRunLoop {} x18; unsigned int x19; int x20; int x21; int x22; BOOL x23; BOOL x24; BOOL x25; BOOL x26; id x27; struct OpaqueFigPlayer {} x28; id x29; id x30; BOOL x31; id x32; BOOL x33; BOOL x34; BOOL x35; int x36; BOOL x37; }*)privateStorage;
- (id)queue;
- (id)queueFeeder;
- (float)rate;
- (void)rateDidChangeToRate:(float)arg1;
- (void)registerTimeMarkerObserver:(id)arg1 forItem:(id)arg2 times:(id)arg3 context:(id)arg4;
- (void)removeObserver:(id)arg1 fromTMOArray:(id)arg2;
- (int)repeatMode;
- (void)requestAsyncCGImagesAtTimes:(id)arg1 requestIDs:(id)arg2 withTimeOptions:(int)arg3 withImageOptions:(id)arg4;
- (void)requestAsyncCGImagesAtTimes:(id)arg1 withTimeOptions:(int)arg2 withImageOptions:(id)arg3;
- (BOOL)resumePlayback:(double)arg1 error:(id*)arg2;
- (void)safeSubtitleCommandPosted:(void*)arg1;
- (void)scheduleQueueSpaceCheck;
- (void)scheduleUpdateTimeMarkerObservations;
- (void)seekToDate:(id)arg1;
- (void)setAVItemClass:(Class)arg1;
- (void)setApplyVideoTrackMatrix;
- (BOOL)setAttribute:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (void)setCurrentTime:(double)arg1;
- (void)setCurrentTime:(double)arg1 options:(int)arg2;
- (void)setDelegate:(id)arg1;
- (void)setEQPreset:(int)arg1;
- (BOOL)setIndexOfCurrentQueueFeederItem:(unsigned int)arg1 error:(id*)arg2;
- (void)setLayer:(id)arg1;
- (void)setMuted:(BOOL)arg1;
- (void)setOutputQTESFilePath:(id)arg1;
- (BOOL)setPickedRouteWithPassword:(id)arg1 withPassword:(id)arg2;
- (void)setQueue:(id)arg1;
- (void)setQueueFeeder:(id)arg1;
- (void)setQueueFeeder:(id)arg1 withIndex:(int)arg2;
- (BOOL)setRate:(float)arg1 error:(id*)arg2;
- (BOOL)setRepeatMode:(int)arg1;
- (void)setShouldDisplayClosedCaptions:(BOOL)arg1;
- (void)setSubtitleRecipient:(id)arg1;
- (void)setVibrationEnabled:(BOOL)arg1;
- (void)setVibrationPattern:(id)arg1;
- (void)setVisualContext:(struct OpaqueFigVisualContext { }*)arg1;
- (void)setVolume:(float)arg1;
- (BOOL)shouldBeginPlayingItem:(id)arg1 error:(id*)arg2;
- (BOOL)shouldDisplayClosedCaptions;
- (void)stepByCount:(int)arg1;
- (void)unregisterTimeMarkerObserver:(id)arg1 forItem:(id)arg2;
- (long)updateActionAtEnd;
- (void)updateTimeMarkerObservations;
- (BOOL)vibrationEnabled;
- (id)vibrationPattern;
- (struct OpaqueFigVisualContext { }*)visualContext;
- (float)volume;

@end
