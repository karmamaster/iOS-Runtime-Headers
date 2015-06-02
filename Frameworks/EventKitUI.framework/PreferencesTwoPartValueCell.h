/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface PreferencesTwoPartValueCell : EKUIConstrainedFontsTableViewCell {
    unsigned int _notifiedShort;
    <EKCellShortener> *_shortener;
    TwoPartTextLabel *_twoPartLabel;
}

@property (nonatomic) <EKCellShortener> *shortener;
@property (nonatomic, readonly, retain) TwoPartTextLabel *twoPartTextLabel;
@property (nonatomic, readonly, retain) UIColor *valueColor;

- (void).cxx_destruct;
- (void)_layoutSubviewsCore;
- (void)checkValueWidths;
- (id)description;
- (void)layoutSubviews;
- (void)layoutText:(id)arg1 andValue:(id)arg2;
- (void)setShortener:(id)arg1;
- (void)shorten;
- (id)shortener;
- (id)twoPartTextLabel;
- (id)valueColor;

@end
