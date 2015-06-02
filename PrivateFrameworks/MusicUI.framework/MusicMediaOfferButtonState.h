/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@interface MusicMediaOfferButtonState : NSObject {
    NSString *_confirmationTitle;
    MPUMediaDownloadObserver *_downloadObserver;
    BOOL _enabled;
    BOOL _hidden;
    int _progressType;
    BOOL _showsCloudButton;
    BOOL _showsConfirmationState;
    NSString *_title;
}

@property (nonatomic, copy) NSString *confirmationTitle;
@property (nonatomic, retain) MPUMediaDownloadObserver *downloadObserver;
@property (getter=isEnabled, nonatomic) BOOL enabled;
@property (getter=isHidden, nonatomic) BOOL hidden;
@property (nonatomic) int progressType;
@property (nonatomic) BOOL showsCloudButton;
@property (nonatomic) BOOL showsConfirmationState;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)confirmationTitle;
- (id)downloadObserver;
- (BOOL)isEnabled;
- (BOOL)isHidden;
- (int)progressType;
- (void)setConfirmationTitle:(id)arg1;
- (void)setDownloadObserver:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setProgressType:(int)arg1;
- (void)setShowsCloudButton:(BOOL)arg1;
- (void)setShowsConfirmationState:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (BOOL)showsCloudButton;
- (BOOL)showsConfirmationState;
- (id)title;

@end
