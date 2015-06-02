/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUINamedImage : NSObject {
    struct _cuiniproperties { 
        unsigned int isVectorBased : 1; 
        unsigned int hasSliceInformation : 1; 
        unsigned int hasAlignmentInformation : 1; 
        unsigned int resizingMode : 2; 
        unsigned int templateRenderingMode : 3; 
        unsigned int exifOrientation : 4; 
        unsigned int _reserved : 20; 
    } _imageProperties;
    CUIRenditionKey *_key;
    NSString *_name;
    float _scale;
    NSString *_signature;
    unsigned int _storageRef;
}

@property (nonatomic, readonly) struct { float x1; float x2; float x3; float x4; } alignmentEdgeInsets;
@property (nonatomic, readonly) int blendMode;
@property (nonatomic, readonly) struct { float x1; float x2; float x3; float x4; } edgeInsets;
@property (nonatomic, readonly) int exifOrientation;
@property (nonatomic, readonly) BOOL hasAlignmentInformation;
@property (nonatomic, readonly) BOOL hasSliceInformation;
@property (nonatomic, readonly) struct CGImage { }*image;
@property (nonatomic, readonly) int imageType;
@property (nonatomic, readonly) BOOL isStructured;
@property (nonatomic, readonly) BOOL isTemplate;
@property (nonatomic, readonly) BOOL isVectorBased;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) float opacity;
@property (nonatomic, readonly) int resizingMode;
@property (nonatomic) float scale;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } size;
@property (nonatomic, readonly) int templateRenderingMode;

// Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI

- (void)_cacheRenditionProperties;
- (id)_rendition;
- (id)_renditionForSpecificKey:(id)arg1;
- (id)_themeStore;
- (struct { float x1; float x2; float x3; float x4; })alignmentEdgeInsets;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })alignmentRect;
- (id)baseKey;
- (int)blendMode;
- (void)dealloc;
- (id)description;
- (struct { float x1; float x2; float x3; float x4; })edgeInsets;
- (int)exifOrientation;
- (int)graphicsClass;
- (BOOL)hasAlignmentInformation;
- (BOOL)hasSliceInformation;
- (int)idiom;
- (struct CGImage { }*)image;
- (int)imageType;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned int)arg3;
- (BOOL)isStructured;
- (BOOL)isTemplate;
- (BOOL)isVectorBased;
- (int)memoryClass;
- (id)name;
- (float)opacity;
- (float)positionOfSliceBoundary:(unsigned int)arg1;
- (id)renditionKey;
- (int)resizingMode;
- (int)resizingModeWithSubtype:(int)arg1;
- (float)scale;
- (void)setName:(id)arg1;
- (void)setScale:(float)arg1;
- (struct CGSize { float x1; float x2; })size;
- (int)sizeClassHorizontal;
- (int)sizeClassVertical;
- (unsigned int)subtype;
- (int)templateRenderingMode;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (id)UIImage;
- (id)traitCollection;

@end
