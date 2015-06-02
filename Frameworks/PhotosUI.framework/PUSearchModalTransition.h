/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSearchModalTransition : PUModalTransition {
    PUPhotosGridViewController *_searchResultsViewController;
    PUSearchViewController *_searchViewController;
}

@property (nonatomic, retain) PUPhotosGridViewController *searchResultsViewController;
@property (nonatomic, retain) PUSearchViewController *searchViewController;

- (void).cxx_destruct;
- (void)animateDismissTransition;
- (void)animatePresentTransition;
- (id)init;
- (id)searchResultsViewController;
- (id)searchViewController;
- (void)setSearchResultsViewController:(id)arg1;
- (void)setSearchViewController:(id)arg1;

@end
