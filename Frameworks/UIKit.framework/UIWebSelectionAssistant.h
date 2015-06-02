/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebSelectionAssistant : NSObject <UIGestureRecognizerDelegate> {
    BOOL _enabled;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UIWebSelectionView *_selectionView;
    UITapAndAHalfRecognizer *_tapAndAHalfGestureRecognizer;
    UIView *_view;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enabled;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) UIWebSelection *selection;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } selectionFrame;
@property (nonatomic, readonly) UIWebSelectionView *selectionView;
@property (readonly) Class superclass;

- (void)clearSelection;
- (void)dealloc;
- (void)didEndScrollingOrZoomingPage;
- (void)didEndScrollingOverflow;
- (void)didRotate:(id)arg1;
- (BOOL)enabled;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)hideCallout;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2 fromView:(id)arg3;
- (id)initWithView:(id)arg1;
- (BOOL)isSelectionGestureRecognizer:(id)arg1;
- (void)layoutChangedByScrolling:(BOOL)arg1;
- (void)makeWebSelection:(id)arg1;
- (void)resignedFirstResponder;
- (void)scaleChanged;
- (id)selection;
- (void)selectionChanged;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionFrame;
- (id)selectionView;
- (void)setEnabled:(BOOL)arg1;
- (void)setGestureRecognizers;
- (void)tap:(id)arg1;
- (void)willRotate:(id)arg1;
- (void)willStartScrollingOrZoomingPage;
- (void)willStartScrollingOverflow;

@end
