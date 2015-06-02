/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMetadataFaceObject : AVMetadataObject <NSCopying> {
    AVMetadataFaceObjectInternal *_internal;
}

@property (readonly) int faceID;
@property (readonly) BOOL hasRollAngle;
@property (readonly) BOOL hasYawAngle;
@property (readonly) float rollAngle;
@property (readonly) float yawAngle;

+ (id)faceObjectWithFigEmbeddedCaptureDeviceFaceDictionary:(id)arg1 input:(id)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (int)faceID;
- (BOOL)hasLeftEyeBounds;
- (BOOL)hasLeftEyeClosedConfidence;
- (BOOL)hasRightEyeBounds;
- (BOOL)hasRightEyeClosedConfidence;
- (BOOL)hasRollAngle;
- (BOOL)hasSmileConfidence;
- (BOOL)hasYawAngle;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2 isVideoMirrored:(BOOL)arg3 rollAdjustment:(float)arg4;
- (id)initWithFaceID:(int)arg1 hasRollAngle:(BOOL)arg2 rollAngle:(float)arg3 hasYawAngle:(BOOL)arg4 yawAngle:(float)arg5 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg6 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg7 bounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg8;
- (id)initWithFaceID:(int)arg1 hasRollAngle:(BOOL)arg2 rollAngle:(float)arg3 hasYawAngle:(BOOL)arg4 yawAngle:(float)arg5 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg6 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg7 bounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg8 optionalInfoDict:(id)arg9 originalMetadataObject:(id)arg10 sourceCaptureInput:(id)arg11;
- (id)initWithFigEmbeddedCaptureDeviceFaceDictionary:(id)arg1 input:(id)arg2;
- (id)initWithType:(id)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 bounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 originalMetadataObject:(id)arg5 sourceCaptureInput:(id)arg6;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })leftEyeBounds;
- (int)leftEyeClosedConfidence;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rightEyeBounds;
- (int)rightEyeClosedConfidence;
- (float)rollAngle;
- (int)smileConfidence;
- (float)yawAngle;

@end
