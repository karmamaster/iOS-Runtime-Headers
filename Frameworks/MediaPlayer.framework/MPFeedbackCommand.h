/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPFeedbackCommand : MPRemoteCommand {
    BOOL _active;
    NSString *_localizedShortTitle;
    NSString *_localizedTitle;
}

@property (getter=isActive, nonatomic) BOOL active;
@property (nonatomic, copy) NSString *localizedShortTitle;
@property (nonatomic, copy) NSString *localizedTitle;

- (void).cxx_destruct;
- (id)_mediaRemoteCommandInfoOptions;
- (BOOL)isActive;
- (id)localizedShortTitle;
- (id)localizedTitle;
- (void)setActive:(BOOL)arg1;
- (void)setLocalizedShortTitle:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;

@end
