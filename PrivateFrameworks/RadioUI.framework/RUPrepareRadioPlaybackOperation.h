/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface RUPrepareRadioPlaybackOperation : NSOperation {
    id /* block */ _firstTrackBlock;
    RURadioGetTracksOperation *_getTracksOperation;
    NSLock *_lock;
    id /* block */ _preparedBlock;
    RadioRequestContext *_requestContext;
    RadioStation *_station;
}

@property (copy) id /* block */ preparedBlock;
@property (copy) RadioRequestContext *requestContext;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithStation:(id)arg1;
- (void)main;
- (id /* block */)preparedBlock;
- (id)requestContext;
- (void)setPreparedBlock:(id /* block */)arg1;
- (void)setRequestContext:(id)arg1;

@end
