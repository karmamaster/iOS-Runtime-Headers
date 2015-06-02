/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFlowControlManager : NSObject {
    unsigned int _defaultBudget;
    double _defaultRegeneration;
    double _maximumThrottleTime;
    NSMutableDictionary *_operationFlowControls;
}

@property (nonatomic) unsigned int defaultBudget;
@property (nonatomic) double defaultRegeneration;
@property double maximumThrottleTime;
@property (nonatomic, retain) NSMutableDictionary *operationFlowControls;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)_flowControlForOperation:(id)arg1;
- (id)_flowControlForOperation:(id)arg1 createIfNecessary:(BOOL)arg2;
- (BOOL)checkFlowControlIsLimited:(id)arg1;
- (double)currentBudget:(id)arg1;
- (unsigned int)currentBudgetCap:(id)arg1;
- (double)currentRegeneration:(id)arg1;
- (unsigned int)defaultBudget;
- (double)defaultRegeneration;
- (id)description;
- (id)initWithDefaultBudget:(unsigned int)arg1 maximumThrottleTime:(double)arg2 andDefaultRegeneration:(double)arg3;
- (double)maximumThrottleTime;
- (id)operationFlowControls;
- (double)secondsUntilFlowControlNotLimited:(id)arg1;
- (void)setDefaultBudget:(unsigned int)arg1;
- (void)setDefaultRegeneration:(double)arg1;
- (void)setMaximumThrottleTime:(double)arg1;
- (void)setOperationFlowControls:(id)arg1;
- (id)statusReport;
- (void)updateFlowControl:(id)arg1 withCost:(unsigned int)arg2;
- (void)updateFlowControl:(id)arg1 withRetryAfter:(unsigned int)arg2;
- (void)updateFlowControlWithLocalErrorForOperation:(id)arg1;

@end
