/* Generated by RuntimeBrowser.
 */

@protocol WebAllowDenyPolicyListener <NSObject>

@required

- (void)allow;
- (void)deny;
- (void)denyOnlyThisRequest;
- (BOOL)shouldClearCache;

@end
