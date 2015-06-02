/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIButtonContent : NSObject <NSCoding, NSCopying> {
    NSAttributedString *attributedTitle;
    UIImage *background;
    NSNumber *drawingStroke;
    UIImage *image;
    UIColor *imageColor;
    UIColor *shadowColor;
    NSString *title;
    UIColor *titleColor;
}

@property (nonatomic, retain) NSAttributedString *attributedTitle;
@property (nonatomic, retain) UIImage *background;
@property (nonatomic, retain) NSNumber *drawingStroke;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIColor *imageColor;
@property (nonatomic, readonly) BOOL isEmpty;
@property (nonatomic, retain) _UIGraphicsLetterpressStyle *letterpressStyle;
@property (nonatomic, retain) UIColor *shadowColor;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) UIColor *titleColor;

- (id)attributedTitle;
- (id)background;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)drawingStroke;
- (void)encodeWithCoder:(id)arg1;
- (id)image;
- (id)imageColor;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEmpty;
- (id)letterpressStyle;
- (void)setAttributedTitle:(id)arg1;
- (void)setBackground:(id)arg1;
- (void)setDrawingStroke:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageColor:(id)arg1;
- (void)setLetterpressStyle:(id)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (id)shadowColor;
- (id)title;
- (id)titleColor;

@end
