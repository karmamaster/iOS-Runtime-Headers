/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CoreRCBus : NSObject <NSCopying, NSSecureCoding> {
    <CoreRCBusDelegate> *_delegate;
    NSMutableSet *_devicesInternal;
    CoreRCManager *_manager;
    NSUUID *_uniqueID;
}

@property (nonatomic, readonly) NSSet *devices;
@property (nonatomic, readonly) NSMutableSet *devicesInternal;
@property (nonatomic, readonly) NSUUID *uniqueID;

+ (BOOL)supportsSecureCoding;

- (void)addDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)deviceOnBusEquivalentTo:(id)arg1;
- (id)devices;
- (id)devicesInternal;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)init;
- (id)initWithBus:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)manager;
- (id)mergeDevice:(id)arg1;
- (void)mergePropertiesFromBus:(id)arg1;
- (void)notifyDelegateAllDevicesRemoved:(id)arg1;
- (void)notifyDelegateDeviceAdded:(id)arg1;
- (void)notifyDelegateDeviceRemoved:(id)arg1;
- (void)notifyDelegateDeviceUpdated:(id)arg1;
- (id)propertyForKey:(id)arg1 error:(id*)arg2;
- (void)removeAllDevices;
- (void)removeDevice:(id)arg1;
- (void)replaceDevice:(id)arg1 withDevice:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setManager:(id)arg1;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (id)uniqueID;

@end
