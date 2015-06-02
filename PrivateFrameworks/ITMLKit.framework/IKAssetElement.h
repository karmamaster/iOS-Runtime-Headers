/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKAssetElement : IKViewElement {
    BOOL _infiniteDuration;
}

@property (nonatomic, readonly, retain) NSString *actionParams;
@property (nonatomic, readonly, retain) NSString *adamID;
@property (nonatomic, readonly, retain) NSString *bookmarkID;
@property (nonatomic, readonly, retain) NSString *contentID;
@property (getter=isInfiniteDuration, nonatomic, readonly) BOOL infiniteDuration;
@property (nonatomic, readonly) int keyDelivery;
@property (nonatomic, readonly, retain) NSString *serviceID;
@property (nonatomic, readonly) int type;
@property (nonatomic, readonly, retain) NSURL *url;

+ (BOOL)shouldParseChildDOMElements;

- (id)actionParams;
- (id)adamID;
- (id)bookmarkID;
- (id)contentID;
- (BOOL)infiniteDuration;
- (BOOL)isInfiniteDuration;
- (int)keyDelivery;
- (id)serviceID;
- (int)type;
- (id)url;

@end
