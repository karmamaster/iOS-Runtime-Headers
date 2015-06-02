/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLBBEurekaEventMsg : PLBasebandMessage {
    NSMutableDictionary *_commonInfo;
    unsigned char _inited;
    NSMutableDictionary *_kvPairs;
    NSMutableString *_sdAct;
    NSMutableString *_sdEvent;
    NSMutableString *_sdState;
}

@property (nonatomic, retain) NSMutableDictionary *commonInfo;
@property (nonatomic) unsigned char inited;
@property (nonatomic, retain) NSMutableDictionary *kvPairs;
@property (nonatomic, retain) NSMutableString *sdAct;
@property (nonatomic, retain) NSMutableString *sdEvent;
@property (nonatomic, retain) NSMutableString *sdState;

+ (id)bbEuEvMsgEventNotProcessed;
+ (id)bbEuEvMsgNameBBEurekaMsgLite;
+ (id)bbEuEvMsgNameCMCDMAExit;
+ (id)bbEuEvMsgNameCMCallEventConn;
+ (id)bbEuEvMsgNameCMCallEventConnV2;
+ (id)bbEuEvMsgNameCMCallEventEnd;
+ (id)bbEuEvMsgNameCMCallEventEndV2;
+ (id)bbEuEvMsgNameCMCallEventIncom;
+ (id)bbEuEvMsgNameCMCallEventOrig;
+ (id)bbEuEvMsgNameCMCallEventOrigV2;
+ (id)bbEuEvMsgNameGSML1State;
+ (id)bbEuEvMsgNameLTERRCState;
+ (id)bbEuEvMsgNameSDEventActionCode;
+ (id)bbEuEvMsgNameWCDMARRCState;
+ (id)bbEuEvMsgUTRANRRCState;

- (void).cxx_destruct;
- (void)addPairWithKey:(id)arg1 andWithVal:(id)arg2;
- (void)appendToError:(id)arg1;
- (id)commonInfo;
- (id)init;
- (unsigned char)inited;
- (id)kvPairs;
- (void)logEventCMCallEventConnWithId:(id)arg1 andCallType:(id)arg2 andSysMode:(id)arg3;
- (void)logEventCMCallEventConnWithId:(id)arg1 andCallType:(id)arg2 andSysMode:(id)arg3 andClientId:(id)arg4;
- (void)logEventCMCallEventEndWithId:(id)arg1 andNumCalls:(id)arg2;
- (void)logEventCMCallEventEndWithId:(id)arg1 andNumCalls:(id)arg2 andClientId:(id)arg3;
- (void)logEventCMCallEventOrigWithId:(id)arg1 andCallType:(id)arg2 andSrvType:(id)arg3;
- (void)logEventCMCallEventOrigWithId:(id)arg1 andCallType:(id)arg2 andSrvType:(id)arg3 andClientId:(id)arg4;
- (void)logEventForwardBBEurekaEventMsgLite;
- (void)logEventForwardGSML1StateWith:(id)arg1;
- (void)logEventForwardLTERRCStateAs:(id)arg1;
- (void)logEventForwardSDEventActionCode;
- (void)logEventForwardUTRANRRCNextStateAs:(id)arg1 andCurrStateAs:(id)arg2 andRateAs:(id)arg3;
- (void)logEventForwardWCDMARRCPrevStateAs:(id)arg1 andCurrState:(id)arg2 andRate:(id)arg3;
- (void)logEventNoneEventNotProcessed;
- (void)logEventPointCMExitCodeWithState:(id)arg1;
- (void)refreshBBEurekaEventMsgLite;
- (void)refreshEventNotProcessed;
- (void)refreshLTERRCState;
- (void)refreshSDEventActionCode;
- (void)refreshUTRANRRCState;
- (void)refreshWCDMARRCState;
- (id)sdAct;
- (id)sdEvent;
- (id)sdState;
- (void)sendAndLogPLEntry:(id)arg1;
- (void)setCommonInfo:(id)arg1;
- (void)setError:(id)arg1;
- (void)setEventCode:(id)arg1;
- (void)setHeaderWithSeqNum:(id)arg1 andDate:(id)arg2 andTimeCal:(double)arg3;
- (void)setInited:(unsigned char)arg1;
- (void)setKvPairs:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setSDEventActionCodeWith:(id)arg1 andSDAction:(id)arg2 andSDState:(id)arg3;
- (void)setSdAct:(id)arg1;
- (void)setSdEvent:(id)arg1;
- (void)setSdState:(id)arg1;

@end
