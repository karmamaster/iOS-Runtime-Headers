/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLXPCAgent : PLAgent {
    PLXPCListenerOperatorComposition *_AccessoriesXPCListener;
    PLXPCListenerOperatorComposition *_AirDropXPCListener;
    PLXPCListenerOperatorComposition *_AppAccessoriesXPCListener;
    PLXPCListenerOperatorComposition *_ApsdXPCListener;
    PLXPCListenerOperatorComposition *_BackgroundTransfer;
    PLXPCListenerOperatorComposition *_DACalendarItemsDownloadedXPCListener;
    PLXPCListenerOperatorComposition *_DACalendarItemsUploadedXPCListener;
    PLXPCListenerOperatorComposition *_DASyncStartXPCListener;
    PLXPCListenerOperatorComposition *_InCallServiceXPCListener;
    PLXPCListenerOperatorComposition *_MailFetchXPCListener;
    PLXPCListenerOperatorComposition *_MediaServerdRTCXPCListener;
    PLNSNotificationOperatorComposition *_MemoryWarningListener;
    PLXPCListenerOperatorComposition *_Push;
    PLXPCListenerOperatorComposition *_SafariFetcherXPCListener;
    PLXPCListenerOperatorComposition *_SiriXPCListener;
    PLXPCListenerOperatorComposition *_SymptomsNetworkAdvisory;
    PLXPCListenerOperatorComposition *_UIKitActivityXPCListener;
    PLXPCListenerOperatorComposition *_UIKitAlertXPCListener;
    PLXPCListenerOperatorComposition *_UIKitKeyboardXPCListener;
    PLXPCListenerOperatorComposition *_WebAppXPCListener;
    PLXPCResponderOperatorComposition *_entryRequestResponder;
    PLXPCListenerOperatorComposition *_telNotificationXPCListener;
    PLXPCListenerOperatorComposition *_testMarkerXPCListener;
}

@property (retain) PLXPCListenerOperatorComposition *AccessoriesXPCListener;
@property (retain) PLXPCListenerOperatorComposition *AirDropXPCListener;
@property (retain) PLXPCListenerOperatorComposition *AppAccessoriesXPCListener;
@property (retain) PLXPCListenerOperatorComposition *ApsdXPCListener;
@property (retain) PLXPCListenerOperatorComposition *BackgroundTransfer;
@property (retain) PLXPCListenerOperatorComposition *DACalendarItemsDownloadedXPCListener;
@property (retain) PLXPCListenerOperatorComposition *DACalendarItemsUploadedXPCListener;
@property (retain) PLXPCListenerOperatorComposition *DASyncStartXPCListener;
@property (retain) PLXPCListenerOperatorComposition *InCallServiceXPCListener;
@property (retain) PLXPCListenerOperatorComposition *MailFetchXPCListener;
@property (retain) PLXPCListenerOperatorComposition *MediaServerdRTCXPCListener;
@property (retain) PLNSNotificationOperatorComposition *MemoryWarningListener;
@property (retain) PLXPCListenerOperatorComposition *Push;
@property (retain) PLXPCListenerOperatorComposition *SafariFetcherXPCListener;
@property (retain) PLXPCListenerOperatorComposition *SiriXPCListener;
@property (retain) PLXPCListenerOperatorComposition *SymptomsNetworkAdvisory;
@property (retain) PLXPCListenerOperatorComposition *UIKitActivityXPCListener;
@property (retain) PLXPCListenerOperatorComposition *UIKitAlertXPCListener;
@property (retain) PLXPCListenerOperatorComposition *UIKitKeyboardXPCListener;
@property (retain) PLXPCListenerOperatorComposition *WebAppXPCListener;
@property (retain) PLXPCResponderOperatorComposition *entryRequestResponder;
@property (retain) PLXPCListenerOperatorComposition *telNotificationXPCListener;
@property (retain) PLXPCListenerOperatorComposition *testMarkerXPCListener;

+ (id)accountingGroupDefinitions;
+ (id)bundleIdFromTopic:(id)arg1;
+ (id)defaults;
+ (id)entryAggregateDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitionAccessory;
+ (id)entryEventForwardDefinitionAirDrop;
+ (id)entryEventForwardDefinitionAppAccessory;
+ (id)entryEventForwardDefinitionInCallService;
+ (id)entryEventForwardDefinitionSafariFetcher;
+ (id)entryEventForwardDefinitionSiri;
+ (id)entryEventForwardDefinitionUIKitActivity;
+ (id)entryEventForwardDefinitionUIKitAlert;
+ (id)entryEventForwardDefinitionUIKitKeyboard;
+ (id)entryEventForwardDefinitionWebApp;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitionApsd;
+ (id)entryEventPointDefinitionDACalendarItemsDownloaded;
+ (id)entryEventPointDefinitionDACalendarItemsUploaded;
+ (id)entryEventPointDefinitionDASyncStart;
+ (id)entryEventPointDefinitionJetsam;
+ (id)entryEventPointDefinitionMailFetch;
+ (id)entryEventPointDefinitionTestMarkers;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionsBackgroundTransfer;
+ (id)entryEventPointDefinitionsPush;
+ (id)entryEventPointDefinitionsSymptomsNetworkAdvisory;
+ (void)load;
+ (id)railDefinitions;

- (void).cxx_destruct;
- (id)AccessoriesXPCListener;
- (id)AirDropXPCListener;
- (id)AppAccessoriesXPCListener;
- (id)ApsdXPCListener;
- (id)BackgroundTransfer;
- (id)DACalendarItemsDownloadedXPCListener;
- (id)DACalendarItemsUploadedXPCListener;
- (id)DASyncStartXPCListener;
- (id)InCallServiceXPCListener;
- (id)MailFetchXPCListener;
- (id)MediaServerdRTCXPCListener;
- (id)MemoryWarningListener;
- (id)Push;
- (id)SafariFetcherXPCListener;
- (id)SiriXPCListener;
- (id)SymptomsNetworkAdvisory;
- (id)UIKitActivityXPCListener;
- (id)UIKitAlertXPCListener;
- (id)UIKitKeyboardXPCListener;
- (id)WebAppXPCListener;
- (void)createAccessoryAccountingEventWithName:(id)arg1 isStartEvent:(BOOL)arg2;
- (void)createAirDropAccountingEvent:(id)arg1;
- (void)createApsdAccountingEvent:(id)arg1;
- (void)createInCallServiceAccountingEvent:(id)arg1;
- (id)entryRequestResponder;
- (id)entryRequestResponseForPayload:(id)arg1;
- (id)init;
- (void)initOperatorDependancies;
- (void)log;
- (void)logEventAggregateTelNotification:(id)arg1;
- (void)logEventBackwardNameMediaServerdRTC:(id)arg1;
- (void)logEventForwardAccessory:(id)arg1;
- (void)logEventForwardAirDrop:(id)arg1;
- (void)logEventForwardAppAccessory:(id)arg1;
- (void)logEventForwardInCallService:(id)arg1;
- (void)logEventForwardSafariFetcherStatus:(id)arg1;
- (void)logEventForwardSiri:(id)arg1;
- (void)logEventForwardUIKitActivity:(id)arg1;
- (void)logEventForwardUIKitAlert:(id)arg1;
- (void)logEventForwardUIKitKeyboard:(id)arg1;
- (void)logEventForwardWebApp:(id)arg1;
- (void)logEventPointApsd:(id)arg1;
- (void)logEventPointBackgroundTransfer:(id)arg1;
- (void)logEventPointDACalendarItemsDownloaded:(id)arg1;
- (void)logEventPointDACalendarItemsUploaded:(id)arg1;
- (void)logEventPointDASyncStart:(id)arg1;
- (void)logEventPointJetsam:(unsigned long)arg1;
- (void)logEventPointMailFetch:(id)arg1;
- (void)logEventPointNetworkSymptomsAdviosry:(id)arg1;
- (void)logEventPointPush:(id)arg1;
- (void)logEventPointTestMarker:(id)arg1;
- (void)setAccessoriesXPCListener:(id)arg1;
- (void)setAirDropXPCListener:(id)arg1;
- (void)setAppAccessoriesXPCListener:(id)arg1;
- (void)setApsdXPCListener:(id)arg1;
- (void)setBackgroundTransfer:(id)arg1;
- (void)setDACalendarItemsDownloadedXPCListener:(id)arg1;
- (void)setDACalendarItemsUploadedXPCListener:(id)arg1;
- (void)setDASyncStartXPCListener:(id)arg1;
- (void)setEntryRequestResponder:(id)arg1;
- (void)setInCallServiceXPCListener:(id)arg1;
- (void)setMailFetchXPCListener:(id)arg1;
- (void)setMediaServerdRTCXPCListener:(id)arg1;
- (void)setMemoryWarningListener:(id)arg1;
- (void)setPush:(id)arg1;
- (void)setSafariFetcherXPCListener:(id)arg1;
- (void)setSiriXPCListener:(id)arg1;
- (void)setSymptomsNetworkAdvisory:(id)arg1;
- (void)setTelNotificationXPCListener:(id)arg1;
- (void)setTestMarkerXPCListener:(id)arg1;
- (void)setUIKitActivityXPCListener:(id)arg1;
- (void)setUIKitAlertXPCListener:(id)arg1;
- (void)setUIKitKeyboardXPCListener:(id)arg1;
- (void)setWebAppXPCListener:(id)arg1;
- (id)telNotificationXPCListener;
- (id)testMarkerXPCListener;

@end
