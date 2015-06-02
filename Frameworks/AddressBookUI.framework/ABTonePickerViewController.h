/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABTonePickerViewController : ABPickerViewController {
    TKTonePickerViewController *_tonePickerViewController;
}

@property (nonatomic, readonly, retain) TKTonePickerViewController *tonePickerViewController;

- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; float x6; int x7; }*)arg1;
- (float)ab_heightToFitForViewInPopoverView;
- (void)cancelButtonClicked:(id)arg1;
- (id)init;
- (id)initWithAlertType:(int)arg1;
- (void)loadView;
- (void)ringtoneSaveButtonClicked:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (id)tonePickerViewController;

@end
