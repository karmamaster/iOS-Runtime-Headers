/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@interface SCROBrailleDisplayManager : NSObject <SCROBrailleDisplayDelegate> {
    int _alertPriority;
    double _alertTimeout;
    struct __CFRunLoopTimer { } *_alertTimer;
    BOOL _automaticBrailleTranslation;
    NSAttributedString *_blankUIString;
    SCRODBluetoothBrailleDisplay *_bluetoothBrailleDisplay;
    NSLock *_contentLock;
    int _contractionMode;
    SCROBrailleFormatter *_currentBrailleFormatter;
    <SCROSBrailleDisplayManagerDelegate> *_delegate;
    NSMutableDictionary *_detectedIOElementsDict;
    struct __CFDictionary { } *_displayConfigurationDict;
    NSMutableArray *_displayModeStack;
    SCROBrailleEventDispatcher *_eventDispatcher;
    SCROBrailleDisplayHistory *_history;
    int _inputAccessMode;
    int _inputContractionMode;
    BOOL _inputEightDot;
    BOOL _isValid;
    BOOL _lineDescriptorDisplayCallbackEnabled;
    NSAttributedString *_lineString;
    NSMutableSet *_loadedIOElements;
    NSAttributedString *_mainString;
    SCROBrailleDisplayManagedQueue *_managedDisplayQueue;
    struct __CFRunLoop { } *_runLoop;
    BOOL _shouldBatchUpdates;
    BOOL _showDotsSevenAndEight;
    BOOL _showEightDot;
    struct { 
        NSData *aggregatedData; 
        int virtualAlignment; 
        int masterStatusCellIndex; 
        BOOL currentAnnouncementUnread; 
        BOOL anyUnreadAnnouncements; 
    } _status;
    NSAttributedString *_statusString;
    SCROBrailleDisplay *_stealthBrailleDisplay;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) int inputContractionMode;
@property (nonatomic) BOOL inputEightDotBraille;
@property (readonly) Class superclass;

+ (void)initialize;

- (void)_addDetectedIOElement:(id)arg1 withDriverIdentifier:(id)arg2;
- (void)_alertTimeoutHandler;
- (void)_announcementHandler:(id)arg1;
- (void)_blankOutDisplaysInQueue:(id)arg1;
- (id)_cachedMainStringForDisplayMode:(int)arg1;
- (void)_contractionModeHandler:(id)arg1;
- (void)_deviceConnectedHandler:(id)arg1;
- (void)_disableAutoDetect;
- (void)_displayModeHandler:(id)arg1;
- (id)_displayWithIOElement:(id)arg1 driverIdentifier:(id)arg2 delegate:(id)arg3;
- (void)_enableAutoDetect;
- (void)_exitCurrentDisplayMode;
- (void)_inputEightDotHandler:(id)arg1;
- (void)_loadNextDriverForIOElement:(id)arg1;
- (void)_loadStealthDisplay;
- (void)_mainDisplayHandler:(id)arg1;
- (void)_panHandler:(id)arg1;
- (void)_popDisplayModeStack;
- (void)_prepareToMemorizeNextKeyHandler:(id)arg1;
- (void)_resetAlertTimer;
- (void)_resetBluetoothReconnectionTimer;
- (void)_saveBluetoothDisplayConfiguration:(id)arg1;
- (void)_setAggregatedStatusHandler:(id)arg1;
- (void)_setAlwaysUsesNemethCodeForTechnicalText:(id)arg1;
- (void)_setBatchUpdates:(id)arg1;
- (void)_setDisplayInputAccessMode:(id)arg1;
- (void)_setDisplayMode:(int)arg1;
- (void)_setLineDescriptorCallbackEnabledHandler:(id)arg1;
- (void)_setMasterStatusCellIndexHandler:(id)arg1;
- (void)_setPrimaryDisplayKeyHandler:(id)arg1;
- (void)_setTableHandler:(id)arg1;
- (void)_setVirtualStatusAlignmentHandler:(id)arg1;
- (void)_showDotsSevenAndEightHandler:(id)arg1;
- (void)_showEightDotHandler:(id)arg1;
- (void)_simulateKeypressHandler:(id)arg1;
- (void)_stopAlertTimer;
- (void)_unloadStealthDisplay;
- (id)aggregatedStatus;
- (BOOL)alwaysUsesNemethCodeForTechnicalText;
- (BOOL)automaticBrailleTranslation;
- (void)automaticBrailleTranslationHandler:(id)arg1;
- (void)beginUpdates;
- (void)brailleDisplay:(id)arg1 didDisplay:(id)arg2;
- (void)brailleDisplay:(id)arg1 didPanLeft:(id)arg2 elementToken:(id)arg3 appToken:(id)arg4;
- (void)brailleDisplay:(id)arg1 didPanRight:(id)arg2 elementToken:(id)arg3 appToken:(id)arg4;
- (void)brailleDisplay:(id)arg1 driverDidLoad:(BOOL)arg2;
- (void)brailleDisplay:(id)arg1 isSleeping:(BOOL)arg2;
- (void)brailleDisplay:(id)arg1 memorizedKey:(id)arg2;
- (void)brailleDisplay:(id)arg1 pressedKeys:(id)arg2;
- (void)brailleDisplay:(id)arg1 willMemorizeKey:(id)arg2;
- (void)brailleDriverDisconnected:(id)arg1;
- (id)brailleInputManager;
- (void)configurationChangedForBrailleDisplay:(id)arg1;
- (void)configureTableWithIdentifier:(id)arg1;
- (int)contractionMode;
- (void)dealloc;
- (id)delegate;
- (int)displayInputAccessMode;
- (int)displayMode;
- (id)driverConfiguration;
- (void)endUpdates;
- (void)exitCurrentDisplayMode;
- (void)handleEvent:(id)arg1;
- (BOOL)hasActiveDisplays;
- (id)init;
- (int)inputContractionMode;
- (void)inputContractionModeHandler:(id)arg1;
- (BOOL)inputEightDotBraille;
- (void)invalidate;
- (BOOL)isConfigured;
- (BOOL)isValid;
- (BOOL)lineDescriptorDisplayCallbackEnabled;
- (void)loadBluetoothDriverWithAddress:(id)arg1;
- (id)mainAttributedString;
- (long)masterStatusCellIndex;
- (id)newBrailleDisplayCommandDispatcher;
- (void)panDisplayLeft:(long)arg1;
- (void)panDisplayRight:(long)arg1;
- (void)playBorderHitSoundForBrailleDisplay:(id)arg1;
- (void)playCommandNotSupportedSoundForBrailleDisplay:(id)arg1;
- (void)removeBluetoothDriverWithAddress:(id)arg1;
- (void)setAggregatedStatus:(id)arg1;
- (void)setAlwaysUsesNemethCodeForTechnicalText:(BOOL)arg1;
- (void)setAnnouncementsDisplayMode;
- (void)setAutomaticBrailleTranslationEnabled:(BOOL)arg1;
- (void)setContractionMode:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayInputAccessMode:(int)arg1;
- (void)setInputContractionMode:(int)arg1;
- (void)setInputEightDotBraille:(BOOL)arg1;
- (void)setLineDescriptorDisplayCallbackEnabled:(BOOL)arg1;
- (void)setMainAttributedString:(id)arg1;
- (void)setMainAttributedString:(id)arg1 forceUpdate:(BOOL)arg2;
- (void)setMasterStatusCellIndex:(long)arg1;
- (void)setPrepareToMemorizeNextKey:(BOOL)arg1 immediate:(BOOL)arg2 forDisplayWithToken:(long)arg3;
- (void)setPrimaryBrailleDisplay:(long)arg1;
- (void)setShowDotsSevenAndEight:(BOOL)arg1;
- (void)setShowEightDotBraille:(BOOL)arg1;
- (void)setUIDisplayMode;
- (void)setVirtualStatusAlignment:(int)arg1;
- (BOOL)showDotsSevenAndEight;
- (BOOL)showEightDotBraille;
- (void)showNextAnnouncement;
- (void)showPreviousAnnouncement;
- (void)simulateKeypress:(id)arg1;
- (id)tableIdentifier;
- (int)tokenForRouterIndex:(int)arg1 location:(int*)arg2 appToken:(id*)arg3 forDisplayWithToken:(long)arg4;
- (int)virtualStatusAlignment;

@end
