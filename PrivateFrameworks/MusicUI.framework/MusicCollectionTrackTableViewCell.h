/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@interface MusicCollectionTrackTableViewCell : MusicMediaTableViewCell

@property (nonatomic, copy) NSString *durationText;
@property (nonatomic) float maximumDurationWidth;
@property (nonatomic, copy) NSString *trackNumberText;

+ (Class)contentViewClass;
+ (struct CGSize { float x1; float x2; })sizeForDuration:(double)arg1;

- (id)_collectionTrackContentView;
- (id)durationText;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (float)maximumDurationWidth;
- (void)setDurationText:(id)arg1;
- (void)setMaximumDurationWidth:(float)arg1;
- (void)setTrackNumberText:(id)arg1;
- (id)trackNumberText;

@end
