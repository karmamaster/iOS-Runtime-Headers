/* Generated by RuntimeBrowser.
 */

@protocol RUPreviewSessionObserver <NSObject>

@optional

- (void)previewSession:(RUPreviewSession *)arg1 didChangeFromItem:(MPAVItem *)arg2 toItem:(MPAVItem *)arg3;
- (void)previewSession:(RUPreviewSession *)arg1 didStopWithOptions:(int)arg2 withFinalItem:(MPAVItem *)arg3 didFinalItemPlayToCompletion:(BOOL)arg4;

@end
