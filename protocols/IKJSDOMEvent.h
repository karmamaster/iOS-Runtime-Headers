/* Generated by RuntimeBrowser.
 */

@protocol IKJSDOMEvent <JSExport>

@required

- (BOOL)bubbles;
- (BOOL)cancelable;
- (IKDOMNode *)currentTarget;
- (BOOL)defaultPrevented;
- (int)eventPhase;
- (void)preventDefault;
- (void)stopImmediatePropagation;
- (void)stopPropagation;
- (IKDOMNode *)target;
- (NSDate *)timeStamp;
- (NSString *)type;

@end
