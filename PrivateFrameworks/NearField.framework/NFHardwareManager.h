/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFHardwareManager : NSObject {
    NFDaemonProxy *_nfcd;
}

+ (id)sharedHardwareManager;

- (void)dealloc;
- (id)getBoosterInfo;
- (id)getControllerInfo;
- (id)getSecureElementInfo;
- (id)init;

@end
