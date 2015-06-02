/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUILockupViewElement : SKUIViewElement {
    BOOL _enabled;
    int _lockupViewType;
}

@property (nonatomic, readonly) BOOL containsElementGroups;
@property (nonatomic, readonly) SKUIFullscreenImageViewElement *fullscreenImage;
@property (nonatomic, readonly) int lockupViewType;

- (id)applyUpdatesWithElement:(id)arg1;
- (BOOL)containsElementGroups;
- (id)fullscreenImage;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (BOOL)isEnabled;
- (int)lockupViewType;
- (int)pageComponentType;

@end
