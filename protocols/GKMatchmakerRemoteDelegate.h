/* Generated by RuntimeBrowser.
 */

@protocol GKMatchmakerRemoteDelegate

@required

- (void)applicationWillEnterForeground;
- (void)inviterCancelled;
- (void)setAcceptedInviteInternal:(GKInviteInternal *)arg1;
- (void)setAutomatchFailedWithError:(NSError *)arg1;
- (void)setAutomatchPlayerCount:(int)arg1;
- (void)setDefaultInvitationMessage:(NSString *)arg1;
- (void)setExistingPlayers:(NSArray *)arg1;
- (void)setHosted:(BOOL)arg1;
- (void)setInvitesFailedWithError:(NSError *)arg1;
- (void)setMatchRequestInternal:(GKMatchRequestInternal *)arg1;
- (void)setNearbyPlayer:(NSString *)arg1 reachable:(BOOL)arg2;
- (void)setPlayer:(GKPlayerInternal *)arg1 connected:(BOOL)arg2;
- (void)setPlayer:(GKPlayerInternal *)arg1 responded:(int)arg2;
- (void)setPlayer:(GKPlayerInternal *)arg1 sentData:(NSData *)arg2;

@end
