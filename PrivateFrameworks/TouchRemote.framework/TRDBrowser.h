/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRDBrowser : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {
    NSMapTable *_XPCConnectionToBrowsingCount;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSNetServiceBrowser *_browser;
    unsigned int _browsingCount;
    NSMapTable *_netServiceToResolvingCompletionHandlers;
    NSMapTable *_netServiceToService;
}

@property (getter=isBrowsing, nonatomic, readonly) BOOL browsing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, copy) NSArray *services;
@property (readonly) Class superclass;

+ (id)sharedBrowser;

- (void).cxx_destruct;
- (void)TRXPCD_getServicesWithCompletionHandler:(id /* block */)arg1;
- (void)TRXPCD_startBrowsing;
- (void)TRXPCD_stopBrowsing;
- (void)_callResolvingCompletionHandlersForNetService:(id)arg1 withError:(id)arg2;
- (id)_init;
- (BOOL)_isXPCConnectionBrowsing:(id)arg1;
- (id)_netServiceForService:(id)arg1;
- (void)_resolveNetService:(id)arg1 withTimeout:(double)arg2 completionHandler:(id /* block */)arg3;
- (id)_serviceForNetService:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)isBrowsing;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceDidResolveAddress:(id)arg1;
- (id)services;
- (void)startBrowsing;
- (void)stopBrowsing;

@end
