/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKNotificationBannerView : UIView {
    id /* block */ _completionHandler;
    double _duration;
    UIImageView *_imageView;
    GKLabel *_messageLabel;
    float _preferredWidthPad;
    GKLabel *_titleLabel;
    id /* block */ _touchHandler;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic) double duration;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, readonly) GKLabel *messageLabel;
@property (nonatomic, readonly) float preferredWidthPad;
@property (nonatomic, readonly) GKLabel *titleLabel;
@property (nonatomic, copy) id /* block */ touchHandler;

+ (BOOL)_preventsAppearanceProxyCustomization;

- (void)_wasTouched:(id)arg1;
- (void)callCompletionHandler;
- (id /* block */)completionHandler;
- (void)dealloc;
- (double)duration;
- (id)imageView;
- (id)initWithTitle:(id)arg1 image:(id)arg2 message:(id)arg3;
- (id)initWithTitle:(id)arg1 imageView:(id)arg2 message:(id)arg3;
- (id)initWithTitle:(id)arg1 message:(id)arg2;
- (id)initWithTitle:(id)arg1 player:(id)arg2 message:(id)arg3;
- (void)layoutSubviews;
- (id)messageLabel;
- (float)preferredWidthPad;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDuration:(double)arg1;
- (void)setTouchHandler:(id /* block */)arg1;
- (void)showWithCompletionHandler:(id /* block */)arg1;
- (void)showWithTouchHandler:(id /* block */)arg1;
- (id)titleLabel;
- (id /* block */)touchHandler;

@end
