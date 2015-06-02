/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLTouchGestureRecognizer : UIGestureRecognizer {
    struct CGPoint { 
        float x; 
        float y; 
    } _previousLocation;
    UITouch *_touch;
}

- (struct CGPoint { float x1; float x2; })locationInView:(id)arg1;
- (void)reset;
- (void)setTranslation:(struct CGPoint { float x1; float x2; })arg1 inView:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint { float x1; float x2; })translationInView:(id)arg1;

@end
