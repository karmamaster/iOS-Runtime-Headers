/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDTrigger : NSObject <HMMessageReceiver, NSSecureCoding> {
    BOOL _active;
    NSMutableArray *_currentActionSets;
    HMDHome *_home;
    NSDate *_mostRecentFireDate;
    HMMessageDispatcher *_msgDispatcher;
    NSString *_name;
    NSUUID *_uuid;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (nonatomic) BOOL active;
@property (nonatomic, retain) NSMutableArray *currentActionSets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) HMDHome *home;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, copy) NSDate *mostRecentFireDate;
@property (nonatomic, retain) HMMessageDispatcher *msgDispatcher;
@property (nonatomic, retain) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUUID *uuid;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_activate:(BOOL)arg1;
- (void)_handleActivateTriggerRequest:(id)arg1;
- (void)_handleRenameRequest:(id)arg1;
- (void)_handleUpdateActionSetRequest:(id)arg1;
- (void)_registerForMessages;
- (id)_updateActionSets:(id)arg1 add:(BOOL)arg2;
- (id)actionSets;
- (BOOL)active;
- (void)checkForNoActions;
- (void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3;
- (id)currentActionSets;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)home;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (void)invalidate;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)mostRecentFireDate;
- (id)msgDispatcher;
- (id)name;
- (void)reEvaluate;
- (void)removeActionSet:(id)arg1;
- (void)setActive:(BOOL)arg1;
- (void)setCurrentActionSets:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setMostRecentFireDate:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setName:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)triggerFired;
- (id)uuid;
- (id)workQueue;

@end
