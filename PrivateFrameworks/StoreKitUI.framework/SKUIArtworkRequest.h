/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIArtworkRequest : SKUIResourceRequest <NSCopying> {
    SSVURLDataConsumer *_dataConsumer;
    <SKUIArtworkRequestDelegate> *_delegate;
    NSURL *_url;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, retain) SSVURLDataConsumer *dataConsumer;
@property (nonatomic) <SKUIArtworkRequestDelegate> *delegate;

- (void).cxx_destruct;
- (id)URL;
- (BOOL)cachesInMemory;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataConsumer;
- (id)delegate;
- (void)finishWithResource:(id)arg1;
- (id)newLoadOperation;
- (void)setDataConsumer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setURL:(id)arg1;

@end
