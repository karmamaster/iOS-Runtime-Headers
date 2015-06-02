/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface RURadioAdTrack : NSObject <ADBannerViewDelegate, NSCopying> {
    NSURL *_URL;
    int _adType;
    ADBannerView *_adView;
    NSDictionary *_loudnessInfo;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) int actionType;
@property (nonatomic, readonly) int adType;
@property (nonatomic, readonly) ADBannerView *adView;
@property (nonatomic, readonly) NSURL *artworkURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL hasAction;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, copy) NSDictionary *loudnessInfo;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;

- (void).cxx_destruct;
- (id)URL;
- (id)_loudnessInfoForVideoAssetDictionary:(id)arg1;
- (int)actionType;
- (int)adType;
- (id)adView;
- (id)artworkCatalog;
- (id)artworkURL;
- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)bannerViewActionDidFinish:(id)arg1;
- (BOOL)bannerViewActionShouldBegin:(id)arg1 willLeaveApplication:(BOOL)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (BOOL)hasAction;
- (unsigned int)hash;
- (id)initWithAdView:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)loudnessInfo;
- (void)triggerAdAction;
- (id)uniqueIdentifier;

@end
