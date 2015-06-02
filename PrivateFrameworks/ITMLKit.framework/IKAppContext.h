/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKAppContext : NSObject <ISURLOperationDelegate> {
    <IKApplication> *_app;
    BOOL _canAccessPendingQueue;
    <IKAppContextDelegate> *_delegate;
    BOOL _isValid;
    JSContext *_jsContext;
    IKJSFoundation *_jsFoundation;
    struct __CFRunLoop { } *_jsThreadRunLoop;
    struct __CFRunLoopSource { } *_jsThreadRunLoopSource;
    unsigned int _mode;
    NSMutableArray *_pendingQueue;
    NSMutableArray *_postEvaluationBlocks;
    id _reloadData;
    BOOL _remoteInspectionEnabled;
    NSError *_responseError;
    NSString *_responseScript;
}

@property (nonatomic, readonly) <IKApplication> *app;
@property (nonatomic) BOOL canAccessPendingQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <IKAppContextDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property BOOL isValid;
@property (nonatomic, retain) JSContext *jsContext;
@property (nonatomic, retain) IKJSFoundation *jsFoundation;
@property (nonatomic, readonly) unsigned int mode;
@property (nonatomic, retain) NSMutableArray *pendingQueue;
@property (nonatomic, retain) NSMutableArray *postEvaluationBlocks;
@property (nonatomic, retain) id reloadData;
@property (nonatomic) BOOL remoteInspectionEnabled;
@property (nonatomic, retain) NSError *responseError;
@property (nonatomic, copy) NSString *responseScript;
@property (readonly) Class superclass;

+ (id)currentAppContext;

- (void).cxx_destruct;
- (void)_addStopRecordToPendingQueueWithReload:(BOOL)arg1;
- (void)_dispatchError:(id)arg1;
- (id)_errorWithMessage:(id)arg1;
- (void)_evaluate:(id /* block */)arg1;
- (void)_evaluateFoundationWithDeviceConfig:(id)arg1;
- (void)_jsThreadMain;
- (void)_sourceCanceledOnRunLoop:(struct __CFRunLoop { }*)arg1;
- (void)_sourcePerform;
- (void)_sourceScheduledOnRunLoop:(struct __CFRunLoop { }*)arg1;
- (void)_startWithScript:(id)arg1;
- (void)_startWithURL:(id)arg1 urlTrusted:(BOOL)arg2;
- (void)_stopAndReload:(BOOL)arg1;
- (void)addPostEvaluateBlock:(id /* block */)arg1;
- (id)app;
- (BOOL)canAccessPendingQueue;
- (id)delegate;
- (void)evaluate:(id /* block */)arg1 completionBlock:(id /* block */)arg2;
- (void)evaluateDelegateBlockSync:(id /* block */)arg1;
- (void)evaluateFoundationJS;
- (void)exitAppWithOptions:(id)arg1;
- (void)handleReloadWithUrgencyType:(unsigned int)arg1 data:(id)arg2;
- (id)initWithApplication:(id)arg1 mode:(unsigned int)arg2 delegate:(id)arg3;
- (BOOL)isValid;
- (id)jsContext;
- (id)jsFoundation;
- (void)launchAppWithOptions:(id)arg1;
- (unsigned int)mode;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (id)pendingQueue;
- (id)postEvaluationBlocks;
- (void)reload;
- (id)reloadData;
- (BOOL)remoteInspectionEnabled;
- (id)responseError;
- (id)responseScript;
- (void)resumeWithOptions:(id)arg1;
- (void)setCanAccessPendingQueue:(BOOL)arg1;
- (void)setException:(id)arg1 withErrorMessage:(id)arg2;
- (void)setIsValid:(BOOL)arg1;
- (void)setJsContext:(id)arg1;
- (void)setJsFoundation:(id)arg1;
- (void)setPendingQueue:(id)arg1;
- (void)setPostEvaluationBlocks:(id)arg1;
- (void)setReloadData:(id)arg1;
- (void)setRemoteInspectionEnabled:(BOOL)arg1;
- (void)setResponseError:(id)arg1;
- (void)setResponseScript:(id)arg1;
- (void)start;
- (void)stop;
- (void)suspendWithOptions:(id)arg1;
- (BOOL)validateDOMDocument:(id)arg1 error:(id*)arg2;

@end
