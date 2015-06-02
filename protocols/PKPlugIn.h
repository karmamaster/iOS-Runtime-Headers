/* Generated by RuntimeBrowser.
 */

@protocol PKPlugIn <NSObject>

@required

- (bool)active;
- (NSDictionary *)attributes;
- (void)beginUsing:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSDictionary *)bundleInfoDictionary;
- (NSURL *)containingUrl;
- (NSUserDefaults *)defaults;
- (NSBundle *)embeddedBundle;
- (id)embeddedPrincipal;
- (void)endUsing:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSString *)identifier;
- (NSString *)localizedContainingName;
- (NSString *)localizedName;
- (NSString *)localizedShortName;
- (id /* block */)notificationBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, <PKPlugIn> *, unsigned int, void*, id, SEL
- (BOOL)onSystemVolume;
- (NSDictionary *)plugInDictionary;
- (id)plugInPrincipal;
- (void)setHostPrincipal:(id)arg1 withProtocol:(Protocol *)arg2;
- (void)setNotificationBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PKPlugIn> *, unsigned int, void*
- (void)setReplyQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)setUserElection:(int)arg1;
- (<PKPlugIn> *)supersededBy;
- (NSURL *)url;
- (BOOL)useBundle:(NSString *)arg1 error:(id*)arg2;
- (int)userElection;
- (NSString *)version;

@end
