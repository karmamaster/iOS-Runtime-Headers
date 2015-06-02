/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPTunneledAccessoryBLTE : HAPAccessory <HAPAccessoryServerInternalDelegate> {
    <HAPKeyStore> *_keyStore;
    NSOperationQueue *_operationQueue;
    HAPCharacteristic *_pairVerifyCharacteristic;
    BOOL _pairVerifyComplete;
    HAPService *_pairingService;
    struct PairingSessionPrivate { } *_pairingSession;
    HAPCharacteristic *_pairingsCharacteristic;
    BOOL _performingPairVerify;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableData *_readNonce;
    NSNumber *_sessionLifetimeTimeout;
    NSObject<OS_dispatch_source> *_sessionLifetimeTimer;
    NSData *_sessionReadKey;
    NSData *_sessionWriteKey;
    NSNumber *_stateNumber;
    HAPService *_tunneledBTLEAccessoryService;
    NSMutableData *_writeNonce;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) <HAPKeyStore> *keyStore;
@property (nonatomic, readonly) NSOperationQueue *operationQueue;
@property (nonatomic) HAPCharacteristic *pairVerifyCharacteristic;
@property (getter=isPairVerifyComplete, nonatomic) BOOL pairVerifyComplete;
@property (nonatomic) HAPService *pairingService;
@property (nonatomic) HAPCharacteristic *pairingsCharacteristic;
@property (getter=isPerformingPairVerify, nonatomic) BOOL performingPairVerify;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSMutableData *readNonce;
@property (nonatomic, retain) NSNumber *sessionLifetimeTimeout;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *sessionLifetimeTimer;
@property (nonatomic, retain) NSData *sessionReadKey;
@property (nonatomic, retain) NSData *sessionWriteKey;
@property (nonatomic, copy) NSNumber *stateNumber;
@property (readonly) Class superclass;
@property (nonatomic) HAPService *tunneledBTLEAccessoryService;
@property (nonatomic, retain) NSMutableData *writeNonce;

- (void).cxx_destruct;
- (void)_cancelAllQueuedOperationsWithError:(id)arg1;
- (void)_cancelSessionLifetimeTimer;
- (id)_decryptData:(id)arg1 error:(id*)arg2;
- (id)_encryptDataAndGenerateAuthTag:(id)arg1 error:(id*)arg2;
- (void)_enqueueOperation:(id)arg1;
- (BOOL)_establishSecureSessionWithError:(id*)arg1;
- (BOOL)_handleCharacteristicReadResponse:(id)arg1 error:(id*)arg2;
- (void)_handlePairVerifyReadCompletionWithError:(id)arg1;
- (void)_handlePairVerifyWriteCompletionWithError:(id)arg1;
- (void)_handleSessionLifetimeTimeout;
- (void)_handleSuccessfulPairVerifyCompletion;
- (long)_initializePairingSession;
- (long)_pairVerifyStart;
- (BOOL)_parsePairingService:(id)arg1;
- (BOOL)_parseServices;
- (BOOL)_parseTunneledBTLEAccessoryService:(id)arg1;
- (void)_readCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_readValueForCharacteristic:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_registerForTunnelCharacteristicNotifications;
- (void)_resumeAllOperations;
- (void)_sanitizeAllTunneledCharacteristics;
- (void)_suspendAllOperations;
- (void)_tearDownSessionWithError:(id)arg1;
- (void)_updateSessionLifetimeTimer;
- (void)_writeCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_writeValue:(id)arg1 forCharacteristic:(id)arg2 authorizationData:(id)arg3 queue:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)accessoryServer:(id)arg1 didUpdateValueForCharacteristic:(id)arg2;
- (id)initWithServer:(id)arg1 instanceID:(id)arg2 parsedServices:(id)arg3 keyStore:(id)arg4;
- (void)invalidate;
- (BOOL)isPairVerifyComplete;
- (BOOL)isPaired;
- (BOOL)isPerformingPairVerify;
- (id)keyStore;
- (id)operationQueue;
- (id)pairVerifyCharacteristic;
- (id)pairingService;
- (id)pairingsCharacteristic;
- (id)queue;
- (void)readCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)readNonce;
- (void)readValueForCharacteristic:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)sessionLifetimeTimeout;
- (id)sessionLifetimeTimer;
- (id)sessionReadKey;
- (id)sessionWriteKey;
- (void)setKeyStore:(id)arg1;
- (void)setPairVerifyCharacteristic:(id)arg1;
- (void)setPairVerifyComplete:(BOOL)arg1;
- (void)setPairingService:(id)arg1;
- (void)setPairingsCharacteristic:(id)arg1;
- (void)setPerformingPairVerify:(BOOL)arg1;
- (void)setQueue:(id)arg1;
- (void)setReadNonce:(id)arg1;
- (void)setSessionLifetimeTimeout:(id)arg1;
- (void)setSessionLifetimeTimer:(id)arg1;
- (void)setSessionReadKey:(id)arg1;
- (void)setSessionWriteKey:(id)arg1;
- (void)setStateNumber:(id)arg1;
- (void)setTunneledBTLEAccessoryService:(id)arg1;
- (void)setWriteNonce:(id)arg1;
- (id)stateNumber;
- (BOOL)supportsGroupedRequests;
- (id)tunneledBTLEAccessoryService;
- (id)uniqueIdentifier;
- (void)writeCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)writeNonce;
- (void)writeValue:(id)arg1 forCharacteristic:(id)arg2 authorizationData:(id)arg3 queue:(id)arg4 completionHandler:(id /* block */)arg5;

@end
