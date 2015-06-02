/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLDeviceMotionProperties : NSObject {
    int fMode;
    bool fWantsPowerConservativeDeviceMotion;
}

@property (nonatomic) int mode;
@property (nonatomic, readonly) bool wantsPowerConservativeDeviceMotion;

- (id)description;
- (id)initWithMode:(int)arg1 andPowerConservation:(bool)arg2;
- (int)mode;
- (void)setMode:(int)arg1;
- (bool)wantsPowerConservativeDeviceMotion;

@end
