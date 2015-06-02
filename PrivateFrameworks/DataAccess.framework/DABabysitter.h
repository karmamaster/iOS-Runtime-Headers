/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DABabysitter : NSObject {
    NSString *_buildVersion;
    NSMutableDictionary *_failedWaiters;
    NSMutableDictionary *_refreshingWaiters;
    NSMutableDictionary *_restrictedWaiters;
}

@property (nonatomic, retain) NSString *buildVersion;
@property (nonatomic, retain) NSMutableDictionary *failedWaiters;
@property (nonatomic, retain) NSMutableDictionary *refreshingWaiters;
@property (nonatomic, retain) NSMutableDictionary *restrictedWaiters;

+ (id)sharedBabysitter;

- (void).cxx_destruct;
- (void)_decrementRefreshCountForWaiter:(id)arg1 forOperationWithName:(id)arg2;
- (void)_decrementRefreshCountForWaiterID:(id)arg1 operationName:(id)arg2;
- (void)_incrementRefreshCountForWaiterID:(id)arg1 operationName:(id)arg2;
- (id)_init;
- (void)_reloadBabysitterProperties;
- (BOOL)accountShouldContinue:(id)arg1;
- (BOOL)accountWithIDShouldContinue:(id)arg1;
- (id)buildVersion;
- (void)dealloc;
- (id)failedWaiters;
- (void)giveAccountWithIDAnotherChance:(id)arg1;
- (id)init;
- (id)refreshingWaiters;
- (BOOL)registerAccount:(id)arg1 forOperationWithName:(id)arg2;
- (id)restrictedWaiters;
- (void)setBuildVersion:(id)arg1;
- (void)setFailedWaiters:(id)arg1;
- (void)setRefreshingWaiters:(id)arg1;
- (void)setRestrictedWaiters:(id)arg1;
- (void)unregisterAccount:(id)arg1 forOperationWithName:(id)arg2;

@end
