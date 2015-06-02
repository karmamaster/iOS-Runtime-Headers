/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@interface MusicFlipsidePlaylistTrackTableViewCell : MusicSongListTableViewCell {
    MPURatingControl *_ratingControl;
    BOOL _showsRatingControl;
}

@property (nonatomic, copy) NSString *durationText;
@property (nonatomic) float maximumDurationWidth;
@property (nonatomic, readonly) MPURatingControl *ratingControl;
@property (nonatomic) BOOL showsRatingControl;
@property (nonatomic, copy) NSString *trackNumberText;

+ (Class)contentViewClass;
+ (struct CGSize { float x1; float x2; })sizeForDuration:(double)arg1;

- (void).cxx_destruct;
- (id)_flipsidePlaylistTrackCellContentView;
- (void)dealloc;
- (id)durationText;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (float)maximumDurationWidth;
- (id)ratingControl;
- (void)setContentBoundsEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setDurationText:(id)arg1;
- (void)setMaximumDurationWidth:(float)arg1;
- (void)setShowsRatingControl:(BOOL)arg1;
- (void)setShowsRatingControl:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setTrackNumberText:(id)arg1;
- (BOOL)showsRatingControl;
- (id)trackNumberText;

@end
