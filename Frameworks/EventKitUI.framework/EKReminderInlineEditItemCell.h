/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKReminderInlineEditItemCell : UITableViewCell {
    float _lastSeenContentWidth;
    EKExpandingTextView *_textView;
    float _verticalPadding;
}

@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic, readonly) EKExpandingTextView *textView;
@property (nonatomic) float verticalPadding;

- (void).cxx_destruct;
- (float)_textViewWidthForContentWidth:(float)arg1;
- (float)heightNeededForContentWidth:(float)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)placeholder;
- (void)setPlaceholder:(id)arg1;
- (void)setVerticalPadding:(float)arg1;
- (id)textView;
- (float)verticalPadding;

@end
