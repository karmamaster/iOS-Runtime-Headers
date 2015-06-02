/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBApplicationProcessExitContext : NSObject {
    unsigned int _exitReason;
    unsigned long long _launchdExitReason;
    FBProcessState *_stateBeforeExiting;
    int _terminationReason;
}

@property (nonatomic, readonly) int exitCode;
@property (nonatomic, readonly) unsigned int exitReason;
@property (nonatomic, readonly) long long exitStatus;
@property (nonatomic, readonly) BOOL exitedNormally;
@property (nonatomic, readonly, copy) FBProcessState *stateBeforeExiting;
@property (nonatomic, readonly) int terminationReason;
@property (nonatomic, readonly) int terminationSignal;

+ (id)descriptionForExitReason:(unsigned int)arg1;
+ (unsigned int)exitReasonForLaunchdExitReason:(unsigned long long)arg1;

- (BOOL)consideredJetsam;
- (void)dealloc;
- (id)description;
- (int)exitCode;
- (unsigned int)exitReason;
- (long long)exitStatus;
- (BOOL)exitedNormally;
- (BOOL)fairPlayFailure;
- (id)initWithExitReason:(unsigned long long)arg1 terminationReason:(int)arg2 state:(id)arg3;
- (id)stateBeforeExiting;
- (int)terminationReason;
- (int)terminationSignal;

@end
