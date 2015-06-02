/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPRemoteCommand : NSObject {
    <MPRemoteCommandDelegate> *_delegate;
    BOOL _enabled;
    unsigned int _mediaRemoteCommandType;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableArray *_targetInvocations;
}

@property (getter=isEnabled, nonatomic) BOOL enabled;

- (void).cxx_destruct;
- (void)_addTarget:(id)arg1 action:(SEL)arg2 retainTarget:(BOOL)arg3;
- (id)_mediaRemoteCommandInfoOptions;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (id)addTargetWithHandler:(id /* block */)arg1;
- (struct _MRMediaRemoteCommandInfo { }*)createCommandInfoRepresentation;
- (id)delegate;
- (BOOL)hasTargets;
- (id)init;
- (id)initWithMediaRemoteCommandType:(unsigned int)arg1;
- (void)invokeCommandWithEvent:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)isEnabled;
- (BOOL)isSupported;
- (unsigned int)mediaRemoteCommandType;
- (void)notifyPropagatablePropertyChanged;
- (void)removeTarget:(id)arg1;
- (void)removeTarget:(id)arg1 action:(SEL)arg2;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(BOOL)arg1;

@end
