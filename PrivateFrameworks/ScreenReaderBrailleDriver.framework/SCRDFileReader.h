/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderBrailleDriver.framework/ScreenReaderBrailleDriver
 */

@interface SCRDFileReader : NSObject {
    <SCRDFileReaderDelegate> *_delegate;
    NSFileHandle *_fileHandle;
    NSThread *_readerThread;
    int _threadStartCount;
}

- (void)_readHandler:(id)arg1;
- (void)dealloc;
- (BOOL)hasStarted;
- (id)initWithDelegate:(id)arg1 fileHandle:(id)arg2;
- (void)invalidate;
- (void)invalidateWithWait:(BOOL)arg1;
- (BOOL)isValid;
- (void)start;

@end
