/* Generated by RuntimeBrowser.
 */

@protocol NSNetServiceBrowserDelegate <NSObject>

@optional

- (void)netServiceBrowser:(NSNetServiceBrowser *)arg1 didFindDomain:(NSString *)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(NSNetServiceBrowser *)arg1 didFindService:(NSNetService *)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(NSNetServiceBrowser *)arg1 didNotSearch:(NSDictionary *)arg2;
- (void)netServiceBrowser:(NSNetServiceBrowser *)arg1 didRemoveDomain:(NSString *)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(NSNetServiceBrowser *)arg1 didRemoveService:(NSNetService *)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowserDidStopSearch:(NSNetServiceBrowser *)arg1;
- (void)netServiceBrowserWillSearch:(NSNetServiceBrowser *)arg1;

@end
