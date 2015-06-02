/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileRequester : NSObject {
    NSData *_auditToken;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    GEOTileKeyMap *_cachedData;
    GEOTileKeyMap *_cachedEtags;
    id _context;
    <GEOTileRequesterDelegate> *_delegate;
    GEOTileKeyList *_keyList;
    NSLocale *_locale;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    BOOL _requireWiFi;
    NSThread *_thread;
}

@property (nonatomic, retain) NSData *auditToken;
@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, retain) NSString *bundleVersion;
@property (nonatomic, readonly) GEOTileKeyMap *cachedData;
@property (nonatomic, readonly) GEOTileKeyMap *cachedEtags;
@property (nonatomic, retain) id context;
@property (nonatomic, retain) <GEOTileRequesterDelegate> *delegate;
@property (nonatomic, readonly) GEOTileKeyList *keyList;
@property (nonatomic) BOOL requireWiFi;
@property (nonatomic, retain) NSThread *thread;

+ (unsigned int)expiringTilesetsCount;
+ (struct { unsigned int x1; double x2; }*)newExpiringTilesets;
+ (BOOL)skipNetworkForKeysWhenPreloading:(id)arg1;
+ (unsigned char)tileProviderIdentifier;

- (id)auditToken;
- (id)bundleIdentifier;
- (id)bundleVersion;
- (id)cachedData;
- (id)cachedEtags;
- (void)cancel;
- (id)context;
- (void)dealloc;
- (id)delegate;
- (id)initWithKeyList:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3 cachedEtags:(id)arg4 cachedData:(id)arg5;
- (id)keyList;
- (BOOL)requireWiFi;
- (void)setAuditToken:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBundleVersion:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRequireWiFi:(BOOL)arg1;
- (void)setThread:(id)arg1;
- (void)start;
- (id)thread;
- (unsigned int)tileSetForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;

@end
