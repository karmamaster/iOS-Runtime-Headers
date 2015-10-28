/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFBrowserView : UIView {
    float _bottomBarOffset;
    UIView *_contentContainerView;
    _SFCrashBanner *_crashBanner;
    float _crashBannerOffset;
    WKWebView *_currentWebView;
    _SFNavigationBar *_navigationBar;
    unsigned int _navigationBarBehavior;
    _SFLinkPreviewHeader *_previewHeader;
    UIView *_scrollToTopView;
    BOOL _shouldUseScrollToTopView;
    _SFBrowserToolbar *_toolbar;
    float _topBarHeight;
}

@property (nonatomic) float bottomBarOffset;
@property (nonatomic, readonly) UIView *contentContainerView;
@property (nonatomic, retain) _SFCrashBanner *crashBanner;
@property (nonatomic) float crashBannerOffset;
@property (nonatomic, readonly) WKWebView *currentWebView;
@property (nonatomic, retain) _SFNavigationBar *navigationBar;
@property (nonatomic) unsigned int navigationBarBehavior;
@property (nonatomic, retain) _SFLinkPreviewHeader *previewHeader;
@property (nonatomic, readonly) UIView *scrollToTopView;
@property (nonatomic) BOOL shouldUseScrollToTopView;
@property (nonatomic, retain) _SFBrowserToolbar *toolbar;
@property (nonatomic) float topBarHeight;

- (void).cxx_destruct;
- (void)addWebView:(id)arg1;
- (float)bottomBarOffset;
- (id)contentContainerView;
- (id)crashBanner;
- (float)crashBannerOffset;
- (id)currentWebView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)navigationBar;
- (unsigned int)navigationBarBehavior;
- (id)previewHeader;
- (id)scrollToTopView;
- (void)setBottomBarOffset:(float)arg1;
- (void)setCrashBanner:(id)arg1;
- (void)setCrashBannerOffset:(float)arg1;
- (void)setNavigationBar:(id)arg1;
- (void)setNavigationBarBehavior:(unsigned int)arg1;
- (void)setPreviewHeader:(id)arg1;
- (void)setShouldUseScrollToTopView:(BOOL)arg1;
- (void)setToolbar:(id)arg1;
- (void)setTopBarHeight:(float)arg1;
- (BOOL)shouldUseScrollToTopView;
- (id)toolbar;
- (float)topBarHeight;
- (void)updatePreviewHeader;

@end