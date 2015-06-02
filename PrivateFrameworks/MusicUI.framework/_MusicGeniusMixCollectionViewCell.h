/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@interface _MusicGeniusMixCollectionViewCell : UICollectionViewCell {
    UILabel *_artistsLabel;
    NSLayoutConstraint *_artistsLabelBaselineConstraint;
    UILabel *_basedOnLabel;
    NSLayoutConstraint *_basedOnLabelBaselineConstraint;
    NSMutableArray *_coverViews;
    BOOL _offline;
    UIButton *_playButton;
    BOOL _playing;
    UILabel *_titleLabel;
    NSLayoutConstraint *_titleLabelBaselineConstraint;
}

@property (nonatomic, copy) NSString *artistsText;
@property (getter=isOffline, nonatomic) BOOL offline;
@property (nonatomic, readonly) UIButton *playButton;
@property (getter=isPlaying, nonatomic) BOOL playing;
@property (nonatomic, copy) NSString *title;

+ (int)numberOfArtworkImages;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)_pressedPlayButtonImage;
- (void)_updateCoverViewsAlpha;
- (void)_updatePlayButtonAlpha;
- (id)artistsText;
- (id)artworkImageDestinationAtIndex:(int)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isOffline;
- (BOOL)isPlaying;
- (id)playButton;
- (void)setArtistsText:(id)arg1;
- (void)setArtworkImage:(id)arg1 atIndex:(int)arg2;
- (void)setOffline:(BOOL)arg1;
- (void)setPlaying:(BOOL)arg1;
- (void)setPlaying:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)updateConstraints;

@end
