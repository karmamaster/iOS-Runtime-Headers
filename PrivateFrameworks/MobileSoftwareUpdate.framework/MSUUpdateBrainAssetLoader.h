/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileSoftwareUpdate.framework/MobileSoftwareUpdate
 */

@interface MSUUpdateBrainAssetLoader : NSObject {
    ASAsset *_updateAsset;
}

@property (nonatomic, retain) ASAsset *updateAsset;

- (void)adjustOptions:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)cancel:(id*)arg1;
- (void)dealloc;
- (id)initWithUpdateAsset:(id)arg1;
- (void)loadUpdateBrainWithOptions:(id)arg1 progressHandler:(id /* block */)arg2;
- (bool)purgeUpdateBrains:(id*)arg1;
- (long long)requiredDiskSpace:(id*)arg1;
- (void)setUpdateAsset:(id)arg1;
- (id)updateAsset;

@end
