/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSRestrictions : IKJSObject <IKJSRestrictions>

@property (nonatomic, readonly) BOOL allowsErotica;
@property (nonatomic, readonly) BOOL allowsExplicit;
@property (nonatomic, readonly) BOOL appInstallationAllowed;
@property (nonatomic, readonly) int maxAppRank;
@property (nonatomic, readonly) NSString *maxAppRating;
@property (nonatomic, readonly) int maxMovieRank;
@property (nonatomic, readonly) int maxTVShowRank;

+ (id)restrictionsDidChangeNotificationName;

- (id)_contentRestrictionsCountryCode;
- (id)_ratingForSetting:(id)arg1 domain:(id)arg2 countryCode:(id)arg3;
- (BOOL)allowsErotica;
- (BOOL)allowsExplicit;
- (BOOL)appInstallationAllowed;
- (int)maxAppRank;
- (id)maxAppRating;
- (int)maxMovieRank;
- (id)maxMovieRatingForCountry:(id)arg1;
- (int)maxTVShowRank;
- (id)maxTVShowRatingForCountry:(id)arg1;

@end
