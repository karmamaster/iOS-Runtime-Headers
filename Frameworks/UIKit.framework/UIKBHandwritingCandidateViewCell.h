/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBHandwritingCandidateViewCell : UICollectionViewCell {
    TIKeyboardCandidate *_candidate;
    UILabel *_label;
    UILabel *_secondaryLabel;
    UIKBThemedView *_themedView;
    struct { 
        unsigned int idiom : 6; 
        unsigned int landscape : 1; 
        unsigned int split : 1; 
        unsigned int appearance : 8; 
        unsigned int rendering : 16; 
    } _visualStyling;
}

@property (nonatomic, copy) TIKeyboardCandidate *candidate;
@property (nonatomic, readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } edgeInsets;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic, retain) UILabel *secondaryLabel;
@property (nonatomic, retain) UIKBThemedView *themedView;
@property (nonatomic) struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; } visualStyling;

+ (id)labelFontForText:(id)arg1;
+ (id)secondaryLabelFont;
+ (float)widthForCandidate:(id)arg1 visualStyling:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })arg2;

- (void)_setRenderConfig:(id)arg1;
- (id)candidate;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)label;
- (void)reloadData;
- (id)secondaryLabel;
- (void)setCandidate:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setLabel:(id)arg1;
- (void)setSecondaryLabel:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setThemedView:(id)arg1;
- (void)setVisualStyling:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })arg1;
- (id)themedView;
- (void)updateLabels;
- (void)updateThemedView;
- (struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })visualStyling;

@end
