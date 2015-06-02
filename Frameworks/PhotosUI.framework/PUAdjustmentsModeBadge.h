/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAdjustmentsModeBadge : UIView {
    BOOL _filled;
    BOOL _stroked;
}

@property (getter=isFilled, nonatomic) BOOL filled;
@property (getter=isStroked, nonatomic) BOOL stroked;

- (id)_drawColor;
- (void)_updateBadge;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isFilled;
- (BOOL)isStroked;
- (void)setFilled:(BOOL)arg1;
- (void)setStroked:(BOOL)arg1;

@end
