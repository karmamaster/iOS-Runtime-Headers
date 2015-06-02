/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBObserverClientProxy : NSObject <BBObserverClientInterface, BBObserverServerInterface> {
    NSMutableDictionary *_bulletinIDsToTransaction;
    NSString *_clientBundleIdentifier;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    BBServer *_serverWeak;
}

@property (nonatomic, retain) NSMutableDictionary *bulletinIDsToTransaction;
@property (nonatomic, retain) NSString *clientBundleIdentifier;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BBServer *serverWeak;

+ (id)xpcInterface;

- (id)bulletinIDsToTransaction;
- (void)clearBulletinIDs:(id)arg1 inSection:(id)arg2;
- (void)clearSection:(id)arg1;
- (id)clientBundleIdentifier;
- (id)connection;
- (id)currentTransactionForBulletinID:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)finishedWithBulletinID:(id)arg1 transactionID:(unsigned int)arg2;
- (void)getActiveAlertBehaviorOverridesWithHandler:(id /* block */)arg1;
- (void)getAttachmentAspectRatioForBulletinID:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getAttachmentPNGDataForBulletinID:(id)arg1 sizeConstraints:(id)arg2 withHandler:(id /* block */)arg3;
- (void)getBulletinsForPublisherMatchIDs:(id)arg1 sectionID:(id)arg2 withHandler:(id /* block */)arg3;
- (void)getObserverDebugInfo:(id /* block */)arg1;
- (void)getPrimaryAttachmentDataForBulletinID:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getPrivilegedSenderAddressBookGroupRecordIDAndNameWithHandler:(id /* block */)arg1;
- (void)getPrivilegedSenderTypesWithHandler:(id /* block */)arg1;
- (void)getSectionInfoForCategory:(int)arg1 withHandler:(id /* block */)arg2;
- (void)getSectionOrderRuleWithHandler:(id /* block */)arg1;
- (void)getSectionParametersForSectionID:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getSortDescriptorsForSectionID:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getUniversalSectionIDForSectionID:(id)arg1 withHandler:(id /* block */)arg2;
- (void)handleResponse:(id)arg1;
- (unsigned int)incrementedTransactionIDForBulletinID:(id)arg1;
- (id)initWithServer:(id)arg1 connection:(id)arg2 queue:(id)arg3;
- (void)noteAlertBehaviorOverrideStateChanged:(id)arg1;
- (void)noteAlertBehaviorOverridesChanged:(id)arg1;
- (void)noteServerReceivedResponseForBulletin:(id)arg1;
- (id)queue;
- (void)removeBulletins:(id)arg1 inSection:(id)arg2 fromFeeds:(unsigned int)arg3;
- (void)removeTransaction:(id)arg1;
- (void)requestFutureBulletinsForSectionID:(id)arg1;
- (void)requestNoticesBulletinsForSectionID:(id)arg1;
- (void)requestTodayBulletinsForSectionID:(id)arg1;
- (id)server;
- (id)serverWeak;
- (void)setBulletinIDsToTransaction:(id)arg1;
- (void)setClientBundleIdentifier:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setObserverFeed:(unsigned int)arg1 asLightsAndSirensGateway:(id)arg2 priority:(unsigned int)arg3;
- (void)setObserverFeed:(unsigned int)arg1 attachToLightsAndSirensGateway:(id)arg2;
- (void)setQueue:(id)arg1;
- (void)setServerWeak:(id)arg1;
- (id)transactionBulletinIDs;
- (void)updateBulletin:(id)arg1 forFeeds:(unsigned int)arg2;
- (void)updateBulletin:(id)arg1 forFeeds:(unsigned int)arg2 withHandler:(id /* block */)arg3;
- (void)updateSectionInfo:(id)arg1 inCategory:(int)arg2;
- (void)updateSectionOrder:(id)arg1 forCategory:(int)arg2;
- (void)updateSectionOrderRule:(id)arg1;
- (void)updateSectionParameters:(id)arg1 forSectionID:(id)arg2;

@end
