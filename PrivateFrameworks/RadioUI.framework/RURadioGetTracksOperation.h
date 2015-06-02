/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface RURadioGetTracksOperation : NSOperation {
    ISDialogOperation *_dialogOperation;
    MPUserNotification *_explicitUserNotification;
    RadioGetTracksRequest *_getTracksRequest;
    NSLock *_lock;
    unsigned int _numberOfTracks;
    RadioPlaybackContext *_playbackContext;
    int _reasonType;
    RadioRequestContext *_requestContext;
    id /* block */ _responseBlock;
    RadioStation *_station;
}

@property unsigned int numberOfTracks;
@property (copy) RadioPlaybackContext *playbackContext;
@property (readonly) int reasonType;
@property (retain) RadioRequestContext *requestContext;
@property (copy) id /* block */ responseBlock;
@property (readonly) RadioStation *station;

- (void).cxx_destruct;
- (id)_heartbeatTokenDataAllowingDelay:(BOOL)arg1 error:(id*)arg2;
- (id)_newGetTracksRequestAllowingHeartbeatDelay:(BOOL)arg1 additionalRequestParameters:(id)arg2 returningError:(id*)arg3;
- (id)_runFullGetTracksProcessAllowingNoAvailableVersionDialog:(BOOL)arg1 additionalRequestParameters:(id)arg2 returningError:(id*)arg3;
- (id)_runRequestAllowingHeartbeatDelay:(BOOL)arg1 additionalRequestParameters:(id)arg2 returningError:(id*)arg3;
- (void)cancel;
- (void)dealloc;
- (id)initWithStation:(id)arg1 reasonType:(int)arg2;
- (void)main;
- (unsigned int)numberOfTracks;
- (id)playbackContext;
- (int)reasonType;
- (id)requestContext;
- (id /* block */)responseBlock;
- (void)setNumberOfTracks:(unsigned int)arg1;
- (void)setPlaybackContext:(id)arg1;
- (void)setRequestContext:(id)arg1;
- (void)setResponseBlock:(id /* block */)arg1;
- (id)station;

@end
