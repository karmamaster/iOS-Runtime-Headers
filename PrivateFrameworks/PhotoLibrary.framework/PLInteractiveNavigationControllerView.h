/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLInteractiveNavigationControllerView : UIView <UINavigationBarDelegate> {
    UIView *_bottom;
    struct { 
        unsigned int transitioning : 1; 
        unsigned int headerViewIsVisible : 1; 
        unsigned int footerViewIsVisible : 1; 
    } _controllerViewFlags;
    UIView *_footer;
    UIView *_header;
    UIView *_interactive;
    UINavigationBar *_navBar;
    int _orientation;
    UIView *_overlay;
    UIView *_top;
}

@property (nonatomic, retain) UIView *bottomView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *footerView;
@property (getter=footerViewIsHidden, nonatomic) BOOL footerViewHidden;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIView *headerView;
@property (getter=headerViewIsHidden, nonatomic) BOOL headerViewHidden;
@property (nonatomic, readonly) UINavigationBar *navigationBar;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *topView;

- (void)_adjustViewFrame:(id)arg1;
- (id)bottomView;
- (void)dealloc;
- (id)footerView;
- (BOOL)footerViewIsHidden;
- (id)headerView;
- (BOOL)headerViewIsHidden;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)interactiveView;
- (void)layoutSubviews;
- (id)navigationBar;
- (void)setBottomView:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)setFooterViewHidden:(BOOL)arg1;
- (void)setFooterViewHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHeaderView:(id)arg1;
- (void)setHeaderViewHidden:(BOOL)arg1;
- (void)setHeaderViewHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setInteractiveView:(id)arg1;
- (void)setInteractiveView:(id)arg1 removePrevious:(BOOL)arg2;
- (void)setInterfaceOrientation:(int)arg1;
- (void)setOverlayView:(id)arg1;
- (void)setTopView:(id)arg1;
- (void)setTopViewAlpha:(float)arg1;
- (id)topView;
- (void)transitionDidEnd;
- (void)transitionWillBegin;

@end
