/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIEditorialCardCell : SKUICollectionViewCell <SKUICellLayoutParentView> {
    SKUIEditorialCardCellLayout *_layout;
    BOOL _layoutNeedsLayout;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) SKUIEditorialCardCellLayout *layout;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)configureForSearchEditorial:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layout;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setCellLayoutNeedsLayout;

@end
