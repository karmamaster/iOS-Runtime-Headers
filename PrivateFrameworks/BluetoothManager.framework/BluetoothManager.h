/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BluetoothManager.framework/BluetoothManager
 */

@interface BluetoothManager : NSObject {
    struct BTAccessoryManagerImpl { } *_accessoryManager;
    BOOL _audioConnected;
    int _available;
    NSMutableDictionary *_btAddrDict;
    NSMutableDictionary *_btDeviceDict;
    struct BTDiscoveryAgentImpl { } *_discoveryAgent;
    struct BTLocalDeviceImpl { } *_localDevice;
    struct BTPairingAgentImpl { } *_pairingAgent;
    BOOL _scanningEnabled;
    BOOL _scanningInProgress;
    unsigned int _scanningServiceMask;
    struct BTSessionImpl { } *_session;
}

// Image: /System/Library/PrivateFrameworks/BluetoothManager.framework/BluetoothManager

+ (int)lastInitError;
+ (void)setSharedInstanceQueue:(id)arg1;
+ (id)sharedInstance;

- (struct BTAccessoryManagerImpl { }*)_accessoryManager;
- (void)_advertisingChanged;
- (BOOL)_attach:(id)arg1;
- (void)_cleanup;
- (void)_connectabilityChanged;
- (void)_connectedStatusChanged;
- (void)_discoveryStateChanged;
- (BOOL)_onlySensorsConnected;
- (void)_postNotification:(id)arg1;
- (void)_postNotificationWithArray:(id)arg1;
- (void)_powerChanged;
- (void)_removeDevice:(id)arg1;
- (void)_restartScan;
- (void)_scanForServices:(unsigned int)arg1 withMode:(int)arg2;
- (void)_setScanState:(int)arg1;
- (BOOL)_setup:(struct BTSessionImpl { }*)arg1;
- (void)acceptSSP:(int)arg1 forDevice:(id)arg2;
- (id)addDeviceIfNeeded:(struct BTDeviceImpl { }*)arg1;
- (BOOL)audioConnected;
- (BOOL)available;
- (void)cancelPairing;
- (void)connectDevice:(id)arg1;
- (void)connectDevice:(id)arg1 withServices:(unsigned int)arg2;
- (BOOL)connectable;
- (BOOL)connected;
- (id)connectedDevices;
- (id)connectingDevices;
- (void)dealloc;
- (BOOL)devicePairingEnabled;
- (BOOL)deviceScanningEnabled;
- (BOOL)deviceScanningInProgress;
- (void)enableTestMode;
- (BOOL)enabled;
- (void)endVoiceCommand:(id)arg1;
- (id)init;
- (BOOL)isAnyoneAdvertising;
- (BOOL)isAnyoneScanning;
- (BOOL)isDiscoverable;
- (BOOL)isServiceSupported:(unsigned int)arg1;
- (id)localAddress;
- (id)pairedDevices;
- (void)postNotification:(id)arg1;
- (void)postNotificationName:(id)arg1 object:(id)arg2;
- (void)postNotificationName:(id)arg1 object:(id)arg2 error:(id)arg3;
- (int)powerState;
- (BOOL)powered;
- (void)resetDeviceScanning;
- (void)scanForConnectableDevices:(unsigned int)arg1;
- (void)scanForServices:(unsigned int)arg1;
- (void)setAudioConnected:(BOOL)arg1;
- (void)setConnectable:(BOOL)arg1;
- (void)setDevicePairingEnabled:(BOOL)arg1;
- (void)setDeviceScanningEnabled:(BOOL)arg1;
- (void)setDiscoverable:(BOOL)arg1;
- (BOOL)setEnabled:(BOOL)arg1;
- (void)setPincode:(id)arg1 forDevice:(id)arg2;
- (BOOL)setPowered:(BOOL)arg1;
- (void)showPowerPrompt;
- (void)startVoiceCommand:(id)arg1;
- (void)unpairDevice:(id)arg1;
- (BOOL)wasDeviceDiscovered:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices

- (int)localDeviceSupportsService:(unsigned int)arg1;

@end
