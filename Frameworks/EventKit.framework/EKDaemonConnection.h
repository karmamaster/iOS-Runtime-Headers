/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKDaemonConnection : NSObject <CADClientInterface> {
    NSMutableDictionary *_cancellableOperations;
    NSObject<OS_dispatch_queue> *_connectionLock;
    NSString *_dbPath;
    id _delegate;
    unsigned int _nextCancellationToken;
    unsigned long _options;
    BOOL _registeredForStartNote;
    <CADInterface> *_remoteOperationProxy;
    NSObject<OS_dispatch_queue> *_replyHandlerLock;
    NSXPCConnection *_xpcConnection;
}

@property (readonly, retain) <CADInterface> *CADOperationProxy;
@property id delegate;
@property (readonly, retain) NSXPCConnection *xpcConnection;

+ (void)waitOnSemaphoreWithBlock:(id /* block */)arg1;

- (void)CADClientReceiveOccurrenceCacheSearchResults:(id)arg1 forSearchToken:(unsigned int)arg2 finished:(BOOL)arg3;
- (id)CADOperationProxy;
- (BOOL)_connectToServer;
- (void)_daemonRestarted;
- (void)_finishAllRepliesOnServerDeath;
- (unsigned int)addCancellableRemoteOperation:(id)arg1;
- (void)cancelRemoteOperation:(unsigned int)arg1;
- (void)dealloc;
- (id)delegate;
- (void)disconnect;
- (id)initWithOptions:(unsigned long)arg1 path:(id)arg2;
- (void)removeCancellableRemoteOperation:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (id)xpcConnection;

@end
