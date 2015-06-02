/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPTextExporter : NSObject <TSKExporter> {
    TPDocumentRoot *mDocumentRoot;
    BOOL mIsCancelled;
    TSUProgressContext *mProgressContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (retain) TSUProgressContext *progressContext;
@property (readonly) Class superclass;

- (void)cancel;
- (void)dealloc;
- (BOOL)exportToURL:(id)arg1 delegate:(id)arg2 error:(id*)arg3;
- (id)initWithDocumentRoot:(id)arg1;
- (BOOL)isCancelled;
- (id)progressContext;
- (void)quit;
- (void)setProgressContext:(id)arg1;
- (void)setup;

@end
