/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPassGroupViewVerticalPanAnimator : NSObject {
    UIPanGestureRecognizer *_gestureRecognizer;
    _UIDynamicValueAnimation *_panningAnimation;
    PKPassGroupView *_panningGroupView;
    struct CGPoint { 
        float x; 
        float y; 
    } _panningViewStartPosition;
    struct CGPoint { 
        float x; 
        float y; 
    } _panningViewTargetPosition;
    float _panningViewTargetScale;
}

@property (nonatomic, retain) UIPanGestureRecognizer *gestureRecognizer;
@property (nonatomic, retain) PKPassGroupView *panningGroupView;
@property (nonatomic) struct CGPoint { float x1; float x2; } panningViewStartPosition;
@property (nonatomic) struct CGPoint { float x1; float x2; } panningViewTargetPosition;
@property (nonatomic) float panningViewTargetScale;

- (id)_dynamicAnimationWithStart:(float)arg1 target:(float)arg2 initialVelocity:(float)arg3;
- (void)dealloc;
- (void)dismissWithStartVelocity:(float)arg1 alongSideApplier:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)gestureRecognizer;
- (id)initWithGroupView:(id)arg1;
- (void)layoutViewsWithY:(float)arg1;
- (id)panningGroupView;
- (struct CGPoint { float x1; float x2; })panningViewStartPosition;
- (struct CGPoint { float x1; float x2; })panningViewTargetPosition;
- (float)panningViewTargetScale;
- (void)setGestureRecognizer:(id)arg1;
- (void)setPanningGroupView:(id)arg1;
- (void)setPanningViewStartPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)setPanningViewTargetPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)setPanningViewTargetScale:(float)arg1;
- (void)stop;

@end
