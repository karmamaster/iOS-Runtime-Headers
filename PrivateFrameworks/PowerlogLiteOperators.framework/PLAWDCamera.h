/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLAWDCamera : PLAWDAuxMetrics {
    double _backCameraTimestamp;
    PLEntryNotificationOperatorComposition *_cameraEventCallbackBack;
    PLEntryNotificationOperatorComposition *_cameraEventCallbackFront;
    PLEntryNotificationOperatorComposition *_cameraEventCallbackTorch;
    long _cameraSubmitCnt;
    double _frontCameraTimestamp;
    BOOL _prevBackCameraState;
    BOOL _prevFrontCameraState;
    BOOL _prevTorchCameraState;
    double _torchCameraTimestamp;
}

@property double backCameraTimestamp;
@property (retain) PLEntryNotificationOperatorComposition *cameraEventCallbackBack;
@property (retain) PLEntryNotificationOperatorComposition *cameraEventCallbackFront;
@property (retain) PLEntryNotificationOperatorComposition *cameraEventCallbackTorch;
@property long cameraSubmitCnt;
@property double frontCameraTimestamp;
@property PLOperator *operator;
@property BOOL prevBackCameraState;
@property BOOL prevFrontCameraState;
@property BOOL prevTorchCameraState;
@property (nonatomic, retain) NSMutableSet *runningMetrics;
@property double torchCameraTimestamp;

+ (id)entryAggregateDefinitionAwdCamera;
+ (id)entryAggregateDefinitions;
+ (id)getSharedObjWithOperator:(id)arg1;

- (void).cxx_destruct;
- (void)addEntryToCameraTable:(id)arg1 withValue:(double)arg2;
- (double)backCameraTimestamp;
- (id)cameraEventCallbackBack;
- (id)cameraEventCallbackFront;
- (id)cameraEventCallbackTorch;
- (long)cameraSubmitCnt;
- (double)frontCameraTimestamp;
- (void)handleBackCameraCallback:(id)arg1;
- (void)handleFrontCameraCallback:(id)arg1;
- (void)handleTorchCameraCallback:(id)arg1;
- (void)initCameraStats;
- (BOOL)prevBackCameraState;
- (BOOL)prevFrontCameraState;
- (BOOL)prevTorchCameraState;
- (void)reInitCameraStats;
- (void)resetCameraTable;
- (void)setBackCameraTimestamp:(double)arg1;
- (void)setCameraEventCallbackBack:(id)arg1;
- (void)setCameraEventCallbackFront:(id)arg1;
- (void)setCameraEventCallbackTorch:(id)arg1;
- (void)setCameraSubmitCnt:(long)arg1;
- (void)setFrontCameraTimestamp:(double)arg1;
- (void)setPrevBackCameraState:(BOOL)arg1;
- (void)setPrevFrontCameraState:(BOOL)arg1;
- (void)setPrevTorchCameraState:(BOOL)arg1;
- (void)setTorchCameraTimestamp:(double)arg1;
- (void)startMetricCollection:(id)arg1;
- (void)stopMetricCollection:(id)arg1;
- (BOOL)submitDataToAWDServer:(id)arg1 withAwdConn:(id)arg2;
- (double)torchCameraTimestamp;

@end
