/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFPageContentDelegate : NSObject {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _bounds;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _box;
    UIPDFDocument *_document;
    struct CGColor { } *_highlightColor;
    BOOL _isCancelled;
    int _lock;
    CALayer *_owner;
    unsigned int _pageIndex;
    unsigned int _pageRotation;
    unsigned int _threadCount;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } _transform;
    UIPDFPageView *_view;
    struct CGColor { } *_white;
}

@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } box;
@property (retain) UIPDFDocument *document;
@property struct CGColor { }*highlightColor;
@property BOOL isCancelled;
@property CALayer *owner;
@property unsigned int pageIndex;
@property unsigned int pageRotation;
@property (readonly) struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } transform;
@property UIPDFPageView *view;

- (void)addRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toPath:(struct CGPath { }*)arg2 transform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg3 view:(id)arg4 owner:(id)arg5;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })box;
- (void)computeTransform;
- (void)dealloc;
- (id)document;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)drawSelectionLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)drawSelectionLayerBlockMode:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (struct CGColor { }*)highlightColor;
- (id)init;
- (BOOL)isCancelled;
- (id)owner;
- (BOOL)pageHasSelection;
- (unsigned int)pageIndex;
- (unsigned int)pageRotation;
- (void)setBox:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDocument:(id)arg1;
- (void)setHighlightColor:(struct CGColor { }*)arg1;
- (void)setIsCancelled:(BOOL)arg1;
- (void)setOwner:(id)arg1;
- (void)setPageIndex:(unsigned int)arg1;
- (void)setPageRotation:(unsigned int)arg1;
- (void)setView:(id)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transform;
- (id)view;

@end
