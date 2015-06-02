/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUExtrasLockupCollectionViewCell : UICollectionViewCell <MPUExtrasCarouselCollectionViewCell> {
    BOOL _allowsPinchingThumbnailImageForInteractiveZoomingImageTransition;
    NSLayoutConstraint *_artworkContainerHeightConstraint;
    MPUExtrasConstrainedArtworkContainerView *_artworkContainerView;
    NSLayoutConstraint *_artworkContainerWidthConstraint;
    struct CGSize { 
        float width; 
        float height; 
    } _artworkSize;
    NSLayoutConstraint *_descriptionBaselineConstraint;
    UILabel *_descriptionLabel;
    MPUExtrasZoomingImageInteractiveTransitionSourceContext *_interactiveTransitionSourceContext;
    unsigned int _itemIndex;
    IKLockupElement *_lockup;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    NSLayoutConstraint *_subtitleBaselineConstraint;
    UILabel *_subtitleLabel;
    UIView *_textContainerView;
    UILabel *_titleLabel;
    NSString *_zoomingImageTransitionIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) IKLockupElement *lockup;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handlePinchGesture:(id)arg1;
- (id)descriptionTextStyle;
- (void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (unsigned int)itemIndex;
- (id)lockup;
- (void)performZoomingImageTransitionWithContext:(id)arg1;
- (void)prepareForReuse;
- (void)prepareZoomingImageTransitionWithContext:(id)arg1;
- (void)setAllowsPinchingThumbnailImageForInteractiveZoomingImageTransition:(BOOL)arg1;
- (void)setDescriptionText:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setItemIndex:(unsigned int)arg1;
- (void)setLockup:(id)arg1;
- (void)setSubtitleText:(id)arg1;
- (void)setThumbnailBorderColor:(id)arg1;
- (void)setThumbnailImage:(id)arg1;
- (void)setThumbnailImageAccessibilityText:(id)arg1;
- (void)setThumbnailImagePlaceholder:(id)arg1;
- (void)setThumbnailMaxSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setThumbnailOverlayImage:(id)arg1 position:(unsigned int)arg2;
- (void)setTitleText:(id)arg1;
- (void)setZoomingImageTransitionIdentifier:(id)arg1;
- (id)subtitleTextStyle;
- (id)thumbnailImage;
- (id)titleTextStyle;
- (void)updateConstraints;

@end
