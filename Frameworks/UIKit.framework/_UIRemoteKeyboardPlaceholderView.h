/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIRemoteKeyboardPlaceholderView : UIView <_UIRemoteKeyboardInputViewPlaceholder> {
    UIView *_mirroredView;
}

@property (readonly, retain) UIView *placeheldView;

+ (id)placeholderForView:(id)arg1;
+ (id)placeholderWithWidth:(float)arg1 height:(float)arg2;

- (void)dealloc;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (id)placeheldView;
- (BOOL)refreshPlaceholder;

@end
