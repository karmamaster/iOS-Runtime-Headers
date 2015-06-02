/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKNanoEventManager : NSObject {
    BOOL _accessToEventsGranted;
    EKEventStore *_eventStore;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic) BOOL accessToEventsGranted;
@property (nonatomic, retain) EKEventStore *eventStore;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (id)accessError;
- (BOOL)accessToEventsGranted;
- (void)dealloc;
- (id)eventStore;
- (id)eventsBetweenStartDate:(id)arg1 andEndDate:(id)arg2;
- (id)eventsSortedByStartDateBetweenStartDate:(id)arg1 andEndDate:(id)arg2;
- (void)fetchCurrentNextFreeAndLastEventWithHandler:(id /* block */)arg1;
- (id)init;
- (id)queue;
- (void)requestAccessToEventStore:(id /* block */)arg1;
- (void)setAccessToEventsGranted:(BOOL)arg1;
- (void)setEventStore:(id)arg1;
- (void)setQueue:(id)arg1;

@end
