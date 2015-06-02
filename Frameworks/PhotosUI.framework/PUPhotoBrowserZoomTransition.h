/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoBrowserZoomTransition : PUNavigationTransition <PUTransitionViewAnimatorDelegate> {
    PUPhotoPinchGestureRecognizer *__photoPinchGestureRecognizer;
    PUTransitionViewAnimator *__transitionViewAnimator;
    <PUPhotoBrowserZoomTransitionDelegate> *_delegate;
    BOOL _didFinish;
    UIImageView *_impostorImageView;
    id /* block */ _individualAnimationCompletion;
    BOOL _shouldEnd;
    BOOL _useFallbackAnimation;
    id _userInteractionDisabledToken;
}

@property (setter=_setPhotoPinchGestureRecognizer:, nonatomic, retain) PUPhotoPinchGestureRecognizer *_photoPinchGestureRecognizer;
@property (setter=_setTransitionViewAnimator:, nonatomic, retain) PUTransitionViewAnimator *_transitionViewAnimator;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUPhotoBrowserZoomTransitionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_animationTransitionForOperation:(int)arg1 betweenViewController:(id)arg2 andPhotoBrowserController:(id)arg3;
- (void)_endTransitionViewAnimatorForceCancel:(BOOL)arg1;
- (BOOL)_getFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 contentMode:(int*)arg2 forPhotoToken:(id)arg3 operation:(int)arg4;
- (void)_getFullsizedImageForPhoto:(id)arg1 cachingImageManager:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_photoPinchGestureRecognizer;
- (void)_setImageForImpostor:(id)arg1 photo:(id)arg2 photoToken:(id)arg3 fromCachingImageManager:(id)arg4;
- (void)_setPhotoPinchGestureRecognizer:(id)arg1;
- (void)_setSourceViewVisible:(BOOL)arg1 forPhotoToken:(id)arg2;
- (void)_setTransitionViewAnimator:(id)arg1;
- (id)_tokenForPhoto:(id)arg1 inContainer:(id)arg2;
- (void)_transitionDidFinishAnimationForOperation:(int)arg1;
- (id)_transitionViewAnimator;
- (void)_transitionWillBeginAnimationForOperation:(int)arg1;
- (void)animatePopTransition;
- (void)animatePushTransition;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)startInteractiveTransitionWithPhotoPinchGestureRecognizer:(id)arg1;
- (void)transitionDidStartOperation:(int)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3;
- (void)transitionViewAnimatorDidEnd:(id)arg1 finished:(BOOL)arg2;
- (void)transitionViewAnimatorDidUpdate:(id)arg1;
- (void)transitionViewAnimatorWillEnd:(id)arg1 withTargetTranslation:(inout struct CGPoint { float x1; float x2; }*)arg2;
- (void)transitionWillStartOperation:(int)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3;
- (void)updateInteractiveTransitionWithPhotoPinchGestureRecognizer:(id)arg1;

@end
