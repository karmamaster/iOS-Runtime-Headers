/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosGridViewControllerSpec : NSObject {
    PUAlbumPickerViewControllerSpec *_albumPickerViewControllerSpec;
    struct CGSize { 
        float width; 
        float height; 
    } _baseInterItemSpacing;
    BOOL _canDisplayEditActionsInNavigationBar;
    BOOL _canDisplayOptionsInPopover;
    BOOL _canDisplaySlideshowButton;
    int _layoutVariant;
    float _maxSearchBarWidth;
    PUPhotosPickerViewControllerSpec *_photosPickerViewControllerSpec;
    BOOL _usesStackPopTransition;
}

@property (nonatomic, readonly) PUAlbumPickerViewControllerSpec *albumPickerViewControllerSpec;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } baseInterItemSpacing;
@property (nonatomic, readonly) BOOL canDisplayEditActionsInNavigationBar;
@property (nonatomic, readonly) BOOL canDisplayOptionsInPopover;
@property (nonatomic, readonly) BOOL canDisplaySearchActionInNavigationBar;
@property (nonatomic, readonly) BOOL canDisplaySlideshowButton;
@property (nonatomic, readonly) int cellBannerTextAlignment;
@property (nonatomic, readonly) int cellFillMode;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } contentSizeForViewInPopover;
@property (nonatomic, readonly) BOOL displaysAvalancheStacks;
@property (nonatomic, readonly) int forceLoadInitialSectionCount;
@property (nonatomic, readonly) float globalFooterHeight;
@property (nonatomic, readonly) int layoutVariant;
@property (nonatomic, readonly) float maxSearchBarWidth;
@property (nonatomic, readonly) PUPhotosPickerViewControllerSpec *photosPickerViewControllerSpec;
@property (nonatomic, readonly) BOOL shouldPlaceDeleteInCenterToolbarPosition;
@property (nonatomic, readonly) int thumbnailImageFormat;
@property (nonatomic, readonly) BOOL usesStackPopTransition;
@property (nonatomic, readonly) BOOL wantsBackButtonTitleForPhotoBrowser;
@property (nonatomic, readonly) BOOL wantsCustomNavigationTransition;

- (void).cxx_destruct;
- (id)albumPickerViewControllerSpec;
- (struct CGSize { float x1; float x2; })baseInterItemSpacing;
- (BOOL)canDisplayEditActionsInNavigationBar;
- (BOOL)canDisplayOptionsInPopover;
- (BOOL)canDisplaySearchActionInNavigationBar;
- (BOOL)canDisplaySlideshowButton;
- (int)cellBannerTextAlignment;
- (int)cellFillMode;
- (void)configureCollectionViewGridLayout:(id)arg1 forWidth:(float)arg2;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopover;
- (BOOL)displaysAvalancheStacks;
- (int)forceLoadInitialSectionCount;
- (float)globalFooterHeight;
- (id)init;
- (int)layoutVariant;
- (float)maxSearchBarWidth;
- (id)photoBrowserSpec;
- (id)photosPickerViewControllerSpec;
- (BOOL)shouldPlaceDeleteInCenterToolbarPosition;
- (unsigned int)supportedInterfaceOrientations;
- (int)thumbnailImageFormat;
- (BOOL)usesStackPopTransition;
- (BOOL)wantsBackButtonTitleForPhotoBrowser;
- (BOOL)wantsCustomNavigationTransition;

@end
