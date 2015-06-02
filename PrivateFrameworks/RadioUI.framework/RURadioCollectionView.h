/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface RURadioCollectionView : UICollectionView {
    RURadioStationsCollectionViewTemplate *_radioStationsCollectionViewTemplate;
}

@property (nonatomic) <RURadioCollectionViewDelegate> *delegate;
@property (nonatomic, readonly) RURadioStationsCollectionViewTemplate *radioStationsCollectionViewTemplate;

- (void).cxx_destruct;
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 collectionViewLayout:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 collectionViewLayout:(id)arg2 radioStationsCollectionViewTemplate:(id)arg3;
- (id)radioStationsCollectionViewTemplate;
- (void)setContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)tintColorDidChange;

@end
