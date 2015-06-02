/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUINavigationDocumentController : NSObject <IKAppNavigationController> {
    SKUIClientContext *_clientContext;
    <SKUINavigationDocumentDelegate> *_delegate;
    UINavigationController *_navigationController;
    UINavigationController *_overrideNavigationController;
    NSMutableArray *_stackItems;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUINavigationDocumentDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *documentStackItems;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) UINavigationController *navigationController;
@property (nonatomic, retain) UINavigationController *overrideNavigationController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activeNavigationController;
- (void)_handleStackDidChange;
- (void)_unloadAllStackItems;
- (void)clear;
- (id)clientContext;
- (id)delegate;
- (id)documentStackItems;
- (id)documents;
- (void)garbageCollectDocuments;
- (id)initWithNavigationController:(id)arg1;
- (void)insertDocument:(id)arg1 beforeDocument:(id)arg2 options:(id)arg3;
- (id)navigationController;
- (id)overrideNavigationController;
- (void)popAllDocuments;
- (void)popDocument;
- (void)popToDocument:(id)arg1;
- (void)popToRootDocument;
- (void)pushDocument:(id)arg1 options:(id)arg2;
- (void)removeDocument:(id)arg1;
- (void)replaceDocument:(id)arg1 withDocument:(id)arg2 options:(id)arg3;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOverrideNavigationController:(id)arg1;
- (void)setStackItems:(id)arg1 animated:(BOOL)arg2;

@end
