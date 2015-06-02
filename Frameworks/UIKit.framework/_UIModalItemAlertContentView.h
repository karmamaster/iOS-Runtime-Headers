/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIModalItemAlertContentView : _UIModalItemContentView {
    UIView *_2ButtonsSeparators;
    BOOL _alertViewIsSetup;
    BOOL _itemNeedsTwoTableViews;
    BOOL _itemWantsVerticalButtons;
    UIScrollView *_labelsScrollView;
    UITableView *_otherTableView;
    UIView *_tableViewTopSeparator;
    _UIModalItemTextFiledBGView *_textFieldBGView;
}

- (void)_prepareViewIfNeeded;
- (void)_reloadButtons;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layout;
- (void)setEnableFirstOtherButton:(BOOL)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

@end
