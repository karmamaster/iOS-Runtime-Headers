/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface _VTSpringBoardStartedPolicy : _VTStatePolicy {
    int _notifyToken;
    BOOL _springboardStarted;
}

- (void)_stopListening;
- (void)dealloc;
- (id)initWithCallback:(id /* block */)arg1 queue:(id)arg2;
- (BOOL)isEnabled;
- (void)waitForSpringBoard;

@end
