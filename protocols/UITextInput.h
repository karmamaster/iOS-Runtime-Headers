/* Generated by RuntimeBrowser.
 */

@protocol UITextInput <UIKeyInput>

@required

- (int)baseWritingDirectionForPosition:(UITextPosition *)arg1 inDirection:(int)arg2;
- (UITextPosition *)beginningOfDocument;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRectForPosition:(UITextPosition *)arg1;
- (UITextRange *)characterRangeAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (UITextRange *)characterRangeByExtendingPosition:(UITextPosition *)arg1 inDirection:(int)arg2;
- (UITextPosition *)closestPositionToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (UITextPosition *)closestPositionToPoint:(struct CGPoint { float x1; float x2; })arg1 withinRange:(UITextRange *)arg2;
- (int)comparePosition:(UITextPosition *)arg1 toPosition:(UITextPosition *)arg2;
- (UITextPosition *)endOfDocument;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })firstRectForRange:(UITextRange *)arg1;
- (<UITextInputDelegate> *)inputDelegate;
- (UITextRange *)markedTextRange;
- (NSDictionary *)markedTextStyle;
- (int)offsetFromPosition:(UITextPosition *)arg1 toPosition:(UITextPosition *)arg2;
- (UITextPosition *)positionFromPosition:(UITextPosition *)arg1 inDirection:(int)arg2 offset:(int)arg3;
- (UITextPosition *)positionFromPosition:(UITextPosition *)arg1 offset:(int)arg2;
- (UITextPosition *)positionWithinRange:(UITextRange *)arg1 farthestInDirection:(int)arg2;
- (void)replaceRange:(UITextRange *)arg1 withText:(NSString *)arg2;
- (UITextRange *)selectedTextRange;
- (NSArray *)selectionRectsForRange:(UITextRange *)arg1;
- (void)setBaseWritingDirection:(int)arg1 forRange:(UITextRange *)arg2;
- (void)setInputDelegate:(id <UITextInputDelegate>)arg1;
- (void)setMarkedText:(NSString *)arg1 selectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setMarkedTextStyle:(NSDictionary *)arg1;
- (void)setSelectedTextRange:(UITextRange *)arg1;
- (NSString *)textInRange:(UITextRange *)arg1;
- (UITextRange *)textRangeFromPosition:(UITextPosition *)arg1 toPosition:(UITextPosition *)arg2;
- (<UITextInputTokenizer> *)tokenizer;
- (void)unmarkText;

@optional

- (int)characterOffsetOfPosition:(UITextPosition *)arg1 withinRange:(UITextRange *)arg2;
- (void)dictationRecognitionFailed;
- (void)dictationRecordingDidEnd;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForDictationResultPlaceholder:(id)arg1;
- (void)insertDictationResult:(NSArray *)arg1;
- (id)insertDictationResultPlaceholder;
- (UITextPosition *)positionWithinRange:(UITextRange *)arg1 atCharacterOffset:(int)arg2;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2;
- (int)selectionAffinity;
- (void)setSelectionAffinity:(int)arg1;
- (BOOL)shouldChangeTextInRange:(UITextRange *)arg1 replacementText:(NSString *)arg2;
- (UIView *)textInputView;
- (NSDictionary *)textStylingAtPosition:(UITextPosition *)arg1 inDirection:(int)arg2;

@end
