/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAppInfo : SADomainObject

@property (nonatomic, copy) NSString *appId;
@property (nonatomic, copy) NSString *appName;
@property (nonatomic, copy) NSDictionary *appNameMap;
@property (nonatomic, copy) NSString *appVersion;
@property (nonatomic, copy) NSString *displayAppName;
@property (nonatomic, copy) NSDictionary *displayAppNameMap;
@property (nonatomic, copy) NSNumber *isNanoApp;
@property (nonatomic, copy) NSNumber *nowPlayingAppWithBrowsableContent;
@property (nonatomic, copy) NSString *providerName;
@property (nonatomic, retain) SASiriSupport *siriSupport;
@property (nonatomic, copy) NSString *spotlightName;
@property (nonatomic, copy) NSDictionary *spotlightNameMap;
@property (nonatomic, retain) SAStarkSupport *starkSupport;
@property (nonatomic, copy) NSArray *supportedCommands;
@property (nonatomic, copy) NSArray *supportedSchemes;

+ (id)appInfo;
+ (id)appInfoWithDictionary:(id)arg1 context:(id)arg2;

- (id)appId;
- (id)appName;
- (id)appNameMap;
- (id)appVersion;
- (id)displayAppName;
- (id)displayAppNameMap;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)isNanoApp;
- (id)nowPlayingAppWithBrowsableContent;
- (id)providerName;
- (void)setAppId:(id)arg1;
- (void)setAppName:(id)arg1;
- (void)setAppNameMap:(id)arg1;
- (void)setAppVersion:(id)arg1;
- (void)setDisplayAppName:(id)arg1;
- (void)setDisplayAppNameMap:(id)arg1;
- (void)setIsNanoApp:(id)arg1;
- (void)setNowPlayingAppWithBrowsableContent:(id)arg1;
- (void)setProviderName:(id)arg1;
- (void)setSiriSupport:(id)arg1;
- (void)setSpotlightName:(id)arg1;
- (void)setSpotlightNameMap:(id)arg1;
- (void)setStarkSupport:(id)arg1;
- (void)setSupportedCommands:(id)arg1;
- (void)setSupportedSchemes:(id)arg1;
- (id)siriSupport;
- (id)spotlightName;
- (id)spotlightNameMap;
- (id)starkSupport;
- (id)supportedCommands;
- (id)supportedSchemes;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;

@end
