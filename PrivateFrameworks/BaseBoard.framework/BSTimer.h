/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSTimer : NSObject {
    double _fireInterval;
    id /* block */ _handler;
    double _leewayInterval;
    NSObject<OS_dispatch_queue> *_queue;
    double _repeatInterval;
    BSDispatchSource *_source;
}

+ (id)scheduledTimerWithFireInterval:(double)arg1 queue:(id)arg2 handler:(id /* block */)arg3;

- (void)cancel;
- (void)dealloc;
- (id)initWithFireInterval:(double)arg1 queue:(id)arg2 handler:(id /* block */)arg3;
- (id)initWithFireInterval:(double)arg1 repeatInterval:(double)arg2 leewayInterval:(double)arg3 queue:(id)arg4 handler:(id /* block */)arg5;
- (void)schedule;

@end
