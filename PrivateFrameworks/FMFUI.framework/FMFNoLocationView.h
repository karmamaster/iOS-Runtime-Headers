/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
 */

@interface FMFNoLocationView : UIView {
    BOOL _blockLabelUpdates;
    UIView *_blur;
    NSLayoutConstraint *_bottomInsetConstraint;
    <FMFNoLocationViewDelegate> *_delegate;
    UILabel *_detailsLabel;
    UIView *_insetView;
    UIImage *_offlineProfileImage;
    UIImageView *_offlineProfileImageView;
    UIImageView *_personImageView;
    NSLayoutConstraint *_topInsetConstraint;
}

@property (nonatomic) BOOL blockLabelUpdates;
@property (nonatomic, retain) UIView *blur;
@property (nonatomic, retain) NSLayoutConstraint *bottomInsetConstraint;
@property (nonatomic) <FMFNoLocationViewDelegate> *delegate;
@property (nonatomic, retain) UILabel *detailsLabel;
@property (nonatomic, retain) UIView *insetView;
@property (nonatomic, retain) UIImage *offlineProfileImage;
@property (nonatomic, retain) UIImageView *offlineProfileImageView;
@property (nonatomic, retain) UIImageView *personImageView;
@property (nonatomic, retain) NSLayoutConstraint *topInsetConstraint;

- (void).cxx_destruct;
- (void)addLayoutConstraints;
- (BOOL)blockLabelUpdates;
- (id)blur;
- (id)bottomInsetConstraint;
- (void)dealloc;
- (id)delegate;
- (id)detailsLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)insetView;
- (id)offlineProfileImage;
- (id)offlineProfileImageView;
- (id)personImageView;
- (void)setAlpha:(float)arg1;
- (void)setBlockLabelUpdates:(BOOL)arg1;
- (void)setBlur:(id)arg1;
- (void)setBottomInsetConstraint:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetailsLabel:(id)arg1;
- (void)setInsetView:(id)arg1;
- (void)setOfflineProfileImage:(id)arg1;
- (void)setOfflineProfileImageView:(id)arg1;
- (void)setPersonImageView:(id)arg1;
- (void)setTopInsetConstraint:(id)arg1;
- (id)topInsetConstraint;
- (void)updateConstriantsForInsets;
- (void)updateLabel;
- (void)updateLabelNotification:(id)arg1;
- (void)updatePersonImageViewImage;

@end
