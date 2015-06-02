/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface RUWelcomeCollectionViewCell : UICollectionViewCell <MPUStackViewDataSource> {
    UIImage *_artworkImage;
    struct CGSize { 
        float width; 
        float height; 
    } _artworkSize;
    MPUBorderConfiguration *_stackItemBorderConfiguration;
    MPUBorderDrawingCache *_stackItemBorderDrawingCache;
    MPUStackView *_stackView;
}

@property (nonatomic, retain) UIImage *artworkImage;
@property (nonatomic) struct CGSize { float x1; float x2; } artworkSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIView *perspectiveTargetView;
@property (nonatomic, retain) MPUBorderDrawingCache *stackItemBorderDrawingCache;
@property (readonly) Class superclass;
@property (nonatomic) struct CGPoint { float x1; float x2; } vanishingPoint;

+ (struct CGSize { float x1; float x2; })artworkSizeForOrientation:(int)arg1;

- (void).cxx_destruct;
- (id)artworkImage;
- (struct CGSize { float x1; float x2; })artworkSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (int)numberOfItemsInStackView:(id)arg1;
- (id)perspectiveTargetView;
- (void)setArtworkImage:(id)arg1;
- (void)setArtworkSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setPerspectiveTargetView:(id)arg1;
- (void)setStackItemBorderDrawingCache:(id)arg1;
- (void)setVanishingPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)stackItemBorderDrawingCache;
- (void)stackView:(id)arg1 applyAttributesToItem:(id)arg2 atIndex:(int)arg3;
- (void)stackView:(id)arg1 didCreateItem:(id)arg2;
- (void)updateForChangedDistanceFromVanishingPoint;
- (struct CGPoint { float x1; float x2; })vanishingPoint;

@end
