/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
 */

@interface WFUserSettings : NSObject {
    WFWhitelistSiteBuffer *_contentFilterOverriddenBlackListedSitesBuffer;
    WFWhitelistSiteBuffer *_contentFilterOverriddenWhiteListedSitesBuffer;
    NSString *_userName;
    NSDictionary *_userSettings;
    WFWhitelistSiteBuffer *_whiteListedSitesBuffer;
}

@property (nonatomic, readonly) BOOL canEditContentFilterOverriddenBlackListedSites;
@property (nonatomic, readonly) BOOL canEditContentFilterOverriddenWhiteListedSites;
@property (nonatomic, readonly) BOOL canEditOverridesAllowed;
@property (nonatomic, readonly) BOOL canEditRestrictionType;
@property (nonatomic, readonly) BOOL canEditWhiteListAllowedSites;
@property (nonatomic, retain) NSArray *contentFilterOverriddenBlackListedSites;
@property (nonatomic, retain) NSArray *contentFilterOverriddenWhiteListedSites;
@property (nonatomic) BOOL overridesAllowed;
@property (nonatomic) int restrictionType;
@property (nonatomic, copy) NSString *userName;
@property (nonatomic, retain) NSArray *whiteListAllowedSites;

+ (id)_arrayByConvertingLinesInStringsAtPath:(id)arg1;
+ (BOOL)_isURLMetasite:(id)arg1;
+ (id)_metasiteDomainNamesArray;
+ (id)_sharedMetasiteDomainNamesDictionary;
+ (id)_sharedMetasiteExceptionsDomainNamesArray;
+ (id)metasitesExceptionPath;
+ (id)metasitesPath;

- (BOOL)_addManagedDefaults:(id)arg1;
- (id)_managedDefaultsPath;
- (BOOL)_setManagedDefaults:(id)arg1;
- (id)_userSettingsForUser:(id)arg1;
- (BOOL)alwaysAllowHTTPS;
- (BOOL)autoWhitelistContainsURL:(id)arg1;
- (BOOL)canEditAlwaysAllowHTTPS;
- (BOOL)canEditContentFilterOverriddenBlackListedSites;
- (BOOL)canEditContentFilterOverriddenWhiteListedSites;
- (BOOL)canEditOverridesAllowed;
- (BOOL)canEditRestrictionType;
- (BOOL)canEditWhiteListAllowedSites;
- (BOOL)contentFilterEnabled;
- (BOOL)contentFilterListsAllowURL:(id)arg1;
- (BOOL)contentFilterOverriddenBlackListContainsURL:(id)arg1;
- (id)contentFilterOverriddenBlackListedSites;
- (id)contentFilterOverriddenBlackListedSitesBuffer;
- (BOOL)contentFilterOverriddenList:(id)arg1 containsURL:(id)arg2;
- (id)contentFilterOverriddenSites;
- (BOOL)contentFilterOverriddenWhiteListContainsURL:(id)arg1;
- (id)contentFilterOverriddenWhiteListedSites;
- (id)contentFilterOverriddenWhiteListedSitesBuffer;
- (BOOL)contentFilterOverridesEnabled;
- (void)dealloc;
- (id)initWithUserName:(id)arg1;
- (BOOL)overridesAllowed;
- (BOOL)restrictWebEnabled;
- (int)restrictionType;
- (void)setAlwaysAllowHTTPS:(BOOL)arg1;
- (void)setContentFilterEnabled:(BOOL)arg1;
- (void)setContentFilterOverriddenBlackListedSites:(id)arg1;
- (void)setContentFilterOverriddenWhiteListedSites:(id)arg1;
- (void)setContentFilterOverridesEnabled:(BOOL)arg1;
- (void)setOverridesAllowed:(BOOL)arg1;
- (void)setRestrictWebEnabled:(BOOL)arg1;
- (void)setRestrictionType:(int)arg1;
- (void)setUserName:(id)arg1;
- (void)setWhiteListAllowedSites:(id)arg1;
- (void)setWhiteListEnabled:(BOOL)arg1;
- (id)userName;
- (id)whiteListAllowedSites;
- (BOOL)whiteListContainsURL:(id)arg1;
- (BOOL)whiteListEnabled;
- (id)whiteListedSitesBuffer;

@end
