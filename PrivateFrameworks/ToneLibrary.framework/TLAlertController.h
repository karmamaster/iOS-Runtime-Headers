/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLAlertController : NSObject {
    TLAccessQueue *_accessQueue;
    NSMutableDictionary *_alertsBySoundIDs;
    TLAlert *_repeatedlyPlayingAlert;
}

@property (setter=_setAccessQueue:, retain) TLAccessQueue *_accessQueue;
@property (setter=_setAlertsBySoundIDs:, nonatomic, retain) NSMutableDictionary *_alertsBySoundIDs;
@property (nonatomic, readonly) BOOL _hasVibratorCapability;
@property (setter=_setRepeatedlyPlayingAlert:, nonatomic, retain) TLAlert *_repeatedlyPlayingAlert;

+ (id)sharedAlertController;

- (id)_accessQueue;
- (id)_alertsBySoundIDs;
- (void)_didReachTimeoutForSystemSound:(id)arg1;
- (BOOL)_hasVibratorCapability;
- (BOOL)_playAlert:(id)arg1 completionHandler:(id /* block */)arg2 targetQueue:(id)arg3;
- (void)_removeSoundID:(unsigned long)arg1 shouldStopSound:(BOOL)arg2 fireCompletionHandler:(BOOL)arg3;
- (id)_repeatedlyPlayingAlert;
- (void)_setAccessQueue:(id)arg1;
- (void)_setAlertsBySoundIDs:(id)arg1;
- (void)_setRepeatedlyPlayingAlert:(id)arg1;
- (unsigned long)_soundIDForAlert:(id)arg1;
- (void)_startPlayingAlertRepeatedly:(id)arg1;
- (void)_stopAlert:(id)arg1 withFadeOutDuration:(double)arg2 options:(unsigned int)arg3 completionHandler:(id /* block */)arg4 targetQueue:(id)arg5;
- (BOOL)_stopAllAlerts;
- (void)_stopRepeatedlyPlayingAlert:(id)arg1 withFadeOutDuration:(double)arg2 options:(unsigned int)arg3 completionHandler:(id /* block */)arg4 targetQueue:(id)arg5;
- (void)_systemSoundDidFinishPlaying:(unsigned long)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)stopAllAlerts;

@end
