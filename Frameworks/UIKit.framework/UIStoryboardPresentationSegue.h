/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStoryboardPresentationSegue : UIStoryboardSegue <UIAdaptivePresentationControllerDelegate> {
    BOOL _animates;
    int _modalPresentationStyle;
    int _modalTransitionStyle;
    BOOL _useDefaultModalPresentationStyle;
    BOOL _useDefaultModalTransitionStyle;
}

@property (nonatomic) BOOL animates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) int modalPresentationStyle;
@property (nonatomic) int modalTransitionStyle;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useDefaultModalPresentationStyle;
@property (nonatomic) BOOL useDefaultModalTransitionStyle;

- (void)_prepare;
- (BOOL)animates;
- (int)modalPresentationStyle;
- (int)modalTransitionStyle;
- (void)perform;
- (void)setAnimates:(BOOL)arg1;
- (void)setModalPresentationStyle:(int)arg1;
- (void)setModalTransitionStyle:(int)arg1;
- (void)setUseDefaultModalPresentationStyle:(BOOL)arg1;
- (void)setUseDefaultModalTransitionStyle:(BOOL)arg1;
- (BOOL)useDefaultModalPresentationStyle;
- (BOOL)useDefaultModalTransitionStyle;

@end
