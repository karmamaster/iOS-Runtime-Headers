/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDefaultKeyboardInput : UIView <UIKeyboardInput, UITextInputPrivate> {
    UITextInputTraits *m_traits;
}

@property (nonatomic) BOOL acceptsEmoji;
@property (nonatomic) BOOL acceptsFloatingKeyboard;
@property (nonatomic) BOOL acceptsSplitKeyboard;
@property (nonatomic) int autocapitalizationType;
@property (nonatomic, copy) NSString *autocorrectionContext;
@property (nonatomic) int autocorrectionType;
@property (nonatomic, readonly) UITextPosition *beginningOfDocument;
@property (nonatomic) BOOL contentsIsSingleValue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL deferBecomingResponder;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disablePrediction;
@property (nonatomic) BOOL displaySecureTextUsingPlainText;
@property (nonatomic) int emptyContentReturnKeyType;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent;
@property (nonatomic, readonly) UITextPosition *endOfDocument;
@property (nonatomic) BOOL forceEnableDictation;
@property (readonly) unsigned int hash;
@property (nonatomic) <UITextInputDelegate> *inputDelegate;
@property (nonatomic, retain) UIColor *insertionPointColor;
@property (nonatomic) unsigned int insertionPointWidth;
@property (nonatomic, readonly) UITextInteractionAssistant *interactionAssistant;
@property (nonatomic) BOOL isSingleLineDocument;
@property (nonatomic) int keyboardAppearance;
@property (nonatomic) int keyboardType;
@property (nonatomic) BOOL learnsCorrections;
@property (nonatomic, readonly) UITextRange *markedTextRange;
@property (nonatomic, copy) NSDictionary *markedTextStyle;
@property (nonatomic, copy) NSString *responseContext;
@property (nonatomic) BOOL returnKeyGoesToNextResponder;
@property (nonatomic) int returnKeyType;
@property (getter=isSecureTextEntry, nonatomic) BOOL secureTextEntry;
@property (copy) UITextRange *selectedTextRange;
@property (nonatomic) int selectionAffinity;
@property (nonatomic, retain) UIColor *selectionBarColor;
@property (nonatomic, retain) UIImage *selectionDragDotImage;
@property (nonatomic) int selectionGranularity;
@property (nonatomic, retain) UIColor *selectionHighlightColor;
@property (nonatomic) int shortcutConversionType;
@property (nonatomic) int spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressReturnKeyStyling;
@property (nonatomic, readonly) UIView *textInputView;
@property (nonatomic) int textLoupeVisibility;
@property (nonatomic) int textSelectionBehavior;
@property (nonatomic) id textSuggestionDelegate;
@property (nonatomic) struct __CFCharacterSet { }*textTrimmingSet;
@property (nonatomic, readonly) <UITextInputTokenizer> *tokenizer;
@property (nonatomic) BOOL useInterfaceLanguageForLocalization;

- (BOOL)acceptsEmoji;
- (int)baseWritingDirectionForPosition:(id)arg1 inDirection:(int)arg2;
- (BOOL)becomesEditableWithGestures;
- (id)beginningOfDocument;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (unsigned short)characterAfterCaretSelection;
- (unsigned short)characterBeforeCaretSelection;
- (unsigned short)characterInRelationToCaretSelection:(int)arg1;
- (id)characterRangeAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(int)arg2;
- (id)closestPositionToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)closestPositionToPoint:(struct CGPoint { float x1; float x2; })arg1 withinRange:(id)arg2;
- (int)comparePosition:(id)arg1 toPosition:(id)arg2;
- (void)confirmMarkedText:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertCaretRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)delegate;
- (void)deleteBackward;
- (id)endOfDocument;
- (void)extendCurrentSelection:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })firstRectForRange:(id)arg1;
- (id)fontForCaretSelection;
- (BOOL)forceEnableDictation;
- (void)forwardInvocation:(id)arg1;
- (BOOL)hasContent;
- (BOOL)hasSelection;
- (BOOL)hasText;
- (id)inputDelegate;
- (void)insertText:(id)arg1;
- (id)interactionAssistant;
- (BOOL)isEditable;
- (BOOL)isEditing;
- (BOOL)isPosition:(id)arg1 atBoundary:(int)arg2 inDirection:(int)arg3;
- (BOOL)isPosition:(id)arg1 withinTextUnit:(int)arg2 inDirection:(int)arg3;
- (BOOL)isSecure;
- (BOOL)isShowingPlaceholder;
- (id)markedTextRange;
- (id)markedTextStyle;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)nextUnperturbedDictationResultBoundaryFromPosition:(id)arg1;
- (int)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3;
- (id)positionFromPosition:(id)arg1 offset:(int)arg2;
- (id)positionFromPosition:(id)arg1 toBoundary:(int)arg2 inDirection:(int)arg3;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(int)arg2;
- (id)rangeByExtendingCurrentSelection:(int)arg1;
- (id)rangeByMovingCurrentSelection:(int)arg1;
- (id)rangeEnclosingPosition:(id)arg1 withGranularity:(int)arg2 inDirection:(int)arg3;
- (id)rectsForNSRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)replaceCurrentWordWithText:(id)arg1;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)selectAll;
- (id)selectedTextRange;
- (BOOL)selectionAtDocumentStart;
- (BOOL)selectionAtWordStart;
- (struct _NSRange { unsigned int x1; unsigned int x2; })selectionRange;
- (id)selectionRectsForRange:(id)arg1;
- (int)selectionState;
- (id)selectionView;
- (void)setAcceptsEmoji:(BOOL)arg1;
- (void)setBaseWritingDirection:(int)arg1 forRange:(id)arg2;
- (void)setBecomesEditableWithGestures:(BOOL)arg1;
- (void)setForceEnableDictation:(BOOL)arg1;
- (void)setInputDelegate:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setMarkedTextStyle:(id)arg1;
- (void)setSecure:(BOOL)arg1;
- (void)setSelectedTextRange:(id)arg1;
- (void)setSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setText:(id)arg1;
- (void)setupPlaceholderTextIfNeeded;
- (void)takeTraitsFrom:(id)arg1;
- (id)text;
- (id)textColorForCaretSelection;
- (id)textInRange:(id)arg1;
- (id)textInputTraits;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)tokenizer;
- (void)unmarkText;
- (void)updateSelection;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleBounds;
- (int)wordOffsetInRange:(id)arg1;

@end
