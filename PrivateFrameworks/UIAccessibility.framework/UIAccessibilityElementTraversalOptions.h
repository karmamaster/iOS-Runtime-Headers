/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

@interface UIAccessibilityElementTraversalOptions : NSObject {
    int _direction;
    BOOL _forSpeakScreen;
    BOOL _includeHiddenViews;
    id /* block */ _leafNodePredicate;
    BOOL _shouldOnlyIncludeElementsWithVisibleFrame;
    BOOL _shouldReturnScannerGroups;
    BOOL _shouldUseAllSubviews;
}

@property (nonatomic) int direction;
@property (nonatomic) BOOL forSpeakScreen;
@property (nonatomic) BOOL includeHiddenViews;
@property (nonatomic, copy) id /* block */ leafNodePredicate;
@property (nonatomic) BOOL shouldOnlyIncludeElementsWithVisibleFrame;
@property (nonatomic) BOOL shouldReturnScannerGroups;
@property (nonatomic) BOOL shouldUseAllSubviews;

+ (id)defaultSpeakScreenOptions;
+ (id)defaultSwitchControlOptions;
+ (id)defaultVoiceOverOptions;
+ (id)options;

- (void)dealloc;
- (id)description;
- (int)direction;
- (BOOL)forSpeakScreen;
- (BOOL)includeHiddenViews;
- (id)init;
- (id /* block */)leafNodePredicate;
- (void)setDirection:(int)arg1;
- (void)setForSpeakScreen:(BOOL)arg1;
- (void)setIncludeHiddenViews:(BOOL)arg1;
- (void)setLeafNodePredicate:(id /* block */)arg1;
- (void)setShouldOnlyIncludeElementsWithVisibleFrame:(BOOL)arg1;
- (void)setShouldReturnScannerGroups:(BOOL)arg1;
- (void)setShouldUseAllSubviews:(BOOL)arg1;
- (BOOL)shouldOnlyIncludeElementsWithVisibleFrame;
- (BOOL)shouldReturnScannerGroups;
- (BOOL)shouldUseAllSubviews;

@end
