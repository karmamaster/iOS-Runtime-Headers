/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUITableHeaderView : UIView {
    UILabel *_titleLabel;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _titleLabelPadding;
}

@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } titleLabelPadding;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setTitleLabelPadding:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)titleLabel;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })titleLabelPadding;

@end
