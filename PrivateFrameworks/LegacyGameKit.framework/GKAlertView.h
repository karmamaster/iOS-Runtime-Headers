/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LegacyGameKit.framework/LegacyGameKit
 */

@interface GKAlertView : UIAlertView {
    UIView *_clipView;
    UIView *_contentView;
}

+ (void)initialize;
+ (struct CGSize { float x1; float x2; })preferredContentViewSize;

- (BOOL)_canDrawContent;
- (void)_changePanelInAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_changePanelOutAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_replaceContentView:(id)arg1 animated:(BOOL)arg2;
- (id)contentView;
- (void)dealloc;
- (id)initAlertView;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (void)layoutAnimated:(BOOL)arg1;
- (void)layoutAnimated:(BOOL)arg1 withDuration:(double)arg2;
- (void)setContentView:(id)arg1 animated:(BOOL)arg2;

@end
