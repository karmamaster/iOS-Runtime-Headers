/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBObserverGatewayHolder : NSObject {
    unsigned int _feed;
    BBObserverClientProxy *_gateway;
    unsigned int _gatewayPriority;
    NSString *_name;
    NSMutableSet *_observersByFeed;
    NSObject<OS_dispatch_queue> *_queue;
    PCPersistentTimer *_timeoutTimer;
    NSMutableArray *_timeouts;
}

@property (nonatomic) unsigned int feed;
@property (nonatomic, retain) BBObserverClientProxy *gateway;
@property (nonatomic) unsigned int gatewayPriority;
@property (nonatomic, copy) NSString *name;

- (id)_addTimeout:(double)arg1 forBulletinID:(id)arg2 inSectionID:(id)arg3 handler:(id /* block */)arg4;
- (void)_handleTimeout;
- (BOOL)_invalidateTimeout:(id)arg1;
- (void)_invalidateTimer;
- (void)_startNextTimer;
- (void)_startTimerWithFireDate:(id)arg1;
- (void)dealloc;
- (unsigned int)feed;
- (id)gateway;
- (unsigned int)gatewayPriority;
- (id)initWithQueue:(id)arg1 name:(id)arg2;
- (id)name;
- (void)sendAddBulletin:(id)arg1 playLightsAndSirens:(BOOL)arg2 forFeeds:(unsigned int)arg3 withTimeout:(double)arg4 handler:(id /* block */)arg5;
- (void)sendObserver:(id)arg1 addBulletin:(id)arg2 playLightsAndSirens:(BOOL)arg3 forFeeds:(unsigned int)arg4 withHandler:(id /* block */)arg5;
- (void)sendObserversAddBulletin:(id)arg1 playLightsAndSirens:(BOOL)arg2 forFeeds:(unsigned int)arg3;
- (void)setFeed:(unsigned int)arg1;
- (void)setGateway:(id)arg1;
- (void)setGatewayPriority:(unsigned int)arg1;
- (void)setName:(id)arg1;

@end
