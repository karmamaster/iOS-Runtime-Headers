/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUStorePageView : UIView {
    UIView *_backdropView;
    UIView *_contentView;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _contentViewInsets;
    UIScrollView *_headerScrollView;
    UIView *_headerView;
    UIView *_previewOverlayView;
}

@property (nonatomic, retain) UIView *backdropView;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentViewInsets;
@property (nonatomic, retain) UIView *headerView;
@property (nonatomic, retain) UIView *previewOverlayView;

- (id)backdropView;
- (id)contentView;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentViewInsets;
- (void)dealloc;
- (id)headerView;
- (void)layoutSubviews;
- (id)previewOverlayView;
- (void)setBackdropView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setContentViewInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setHeaderView:(id)arg1;
- (void)setPreviewOverlayView:(id)arg1;

@end
