/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@interface MusicFlipsideAlbumDetailViewController : MusicAlbumsDetailViewController <MPURatingControlDelegate, MusicFlipsideRating> {
    <MPURatingControlDelegate> *_ratingDelegate;
    NSIndexPath *_ratingItemIndexPath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) <MPURatingControlDelegate> *ratingDelegate;
@property (nonatomic) BOOL showingRating;
@property (readonly) Class superclass;

+ (BOOL)_supportsSearch;
+ (BOOL)shouldPushNowPlayingOnSelection;
+ (BOOL)shouldShowCMC;

- (void).cxx_destruct;
- (id)_createTableView;
- (id)_createTableViewBackgroundView;
- (void)_updateDownloadabilityStateWithCanReloadActionRowsSynchronously:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithDataSource:(id)arg1;
- (float)maximumDurationWidth;
- (id)newHeaderView;
- (id)ratingDelegate;
- (void)ratingDidChangeForRatingControl:(id)arg1;
- (void)setRatingDelegate:(id)arg1;
- (void)setShowingRating:(BOOL)arg1;
- (void)setShowingRating:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)shouldShowActionCellConfiguration:(Class)arg1;
- (BOOL)showingRating;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(int)arg3;
- (void)viewDidLoad;

@end
