/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPDrawableAttachmentPositioner : NSObject <TSDAttachmentPositioner>

- (void)p_constrainToPageLayout:(id)arg1 context:(struct _TPConstrainToPageLayoutContext { id x1; id x2; struct CGPoint {} x3; unsigned int *x4; }*)arg2;
- (struct _TSWPCharIndexAndPosition { unsigned int x1; int x2; float x3; int x4; float x5; })p_positionForDrawable:(id)arg1 atUnscaledCanvasPoint:(struct CGPoint { float x1; float x2; })arg2 inBodyLayout:(id)arg3 pointIsAlignmentFrameOrigin:(BOOL)arg4;
- (id)p_validatedLayoutForDrawable:(id)arg1 inLayoutTarget:(id)arg2;
- (struct _TSWPCharIndexAndPosition { unsigned int x1; int x2; float x3; int x4; float x5; })positionForDrawable:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2 inTextLayoutTarget:(id)arg3 documentRoot:(id)arg4;
- (struct _TSWPCharIndexAndPosition { unsigned int x1; int x2; float x3; int x4; float x5; })positionForDrawable:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2 inTextLayoutTarget:(id)arg3 makeInline:(BOOL)arg4 pointIsAlignmentFrameOrigin:(BOOL)arg5;

@end
