/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventTitleDetailItem : EKEventDetailItem <EKEventDetailTitleCellDelegate> {
    UITableViewCell *_cell;
    BOOL _cellNeedsUpdate;
    UIColor *_color;
    NSObject<EKEventTitleDetailItemDelegate> *_editDelegate;
    BOOL _showDot;
}

@property (nonatomic) NSObject<EKEventTitleDetailItemDelegate> *editDelegate;

- (void).cxx_destruct;
- (void)_updateCellIfNeededForWidth:(float)arg1;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;
- (BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 forWidth:(float)arg2;
- (void)editButtonPressed;
- (id)editDelegate;
- (void)reset;
- (void)setCellPosition:(int)arg1;
- (void)setEditDelegate:(id)arg1;
- (BOOL)shouldShowEditButtonInline;

@end
