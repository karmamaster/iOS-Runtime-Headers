/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureFileOutputDelegateWrapper_FigRecorder : NSObject {
    NSArray *_connections;
    <AVCaptureFileOutputRecordingDelegate_FigRecorder><AVCaptureFileOutputPauseResumeDelegate_FigRecorder> *_delegate;
    long _didStopRecordingError;
    NSArray *_metadata;
    NSURL *_outputFileURL;
    BOOL _receivedDidStartRecording;
    BOOL _receivedDidStopRecording;
}

@property (readonly) NSArray *connections;
@property (readonly) <AVCaptureFileOutputRecordingDelegate_FigRecorder><AVCaptureFileOutputPauseResumeDelegate_FigRecorder> *delegate;
@property long didStopRecordingError;
@property (retain) NSArray *metadata;
@property (readonly) NSURL *outputFileURL;
@property BOOL receivedDidStartRecording;
@property BOOL receivedDidStopRecording;

+ (id)wrapperWithURL:(id)arg1 delegate:(id)arg2 connections:(id)arg3;

- (id)connections;
- (void)dealloc;
- (id)delegate;
- (long)didStopRecordingError;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 connections:(id)arg3;
- (id)metadata;
- (id)outputFileURL;
- (BOOL)receivedDidStartRecording;
- (BOOL)receivedDidStopRecording;
- (void)setDidStopRecordingError:(long)arg1;
- (void)setMetadata:(id)arg1;
- (void)setReceivedDidStartRecording:(BOOL)arg1;
- (void)setReceivedDidStopRecording:(BOOL)arg1;

@end
