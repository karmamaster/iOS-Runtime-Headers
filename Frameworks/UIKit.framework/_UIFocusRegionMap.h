/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFocusRegionMap : NSObject <NSSecureCoding> {
    BOOL _builtRegionMap;
    UIView *_containingView;
    NSMutableArray *_mapEntries;
    struct CGSize { 
        float width; 
        float height; 
    } _windowSize;
}

@property (nonatomic, retain) UIView *containingView;
@property (nonatomic, retain) NSMutableArray *mapEntries;
@property (nonatomic) struct CGSize { float x1; float x2; } windowSize;

+ (BOOL)supportsSecureCoding;

- (void)_buildRegionMap;
- (void)_punchHoleInMapAtFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)addFocusableView:(id)arg1 withFrameInWindow:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)addUnfocusableView:(id)arg1 withFrameInWindow:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)closestFocusableViewFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inDirection:(struct CGSize { float x1; float x2; })arg2;
- (id)closestFocusableViewFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inDirection:(struct CGSize { float x1; float x2; })arg2 includeCurrentlyFocused:(BOOL)arg3;
- (id)containingView;
- (void)dealloc;
- (id)debugQuickLookObject;
- (id)debuggingImage;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContainingView:(id)arg1;
- (id)linearlyOrderedFocusRegionMaps;
- (id)linearlyOrderedFocusViews;
- (id)mapEntries;
- (void)setContainingView:(id)arg1;
- (void)setMapEntries:(id)arg1;
- (void)setWindowSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })windowSize;

@end
