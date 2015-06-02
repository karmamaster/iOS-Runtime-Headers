/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPCloudAVAssetDownloadSession : AVAssetDownloadSession {
    MPStoreItemContext *_context;
    MPCloudAssetDownloadSessionIdentifier *_downloadSessionIdentifier;
    BOOL _isStreamingQuality;
}

@property (nonatomic, retain) MPStoreItemContext *context;
@property (nonatomic, retain) MPCloudAssetDownloadSessionIdentifier *downloadSessionIdentifier;
@property (nonatomic) BOOL isStreamingQuality;

+ (id)assetDownloadSessionWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 context:(id)arg4;

- (void).cxx_destruct;
- (id)context;
- (id)downloadSessionIdentifier;
- (BOOL)isStreamingQuality;
- (void)setContext:(id)arg1;
- (void)setDownloadSessionIdentifier:(id)arg1;
- (void)setIsStreamingQuality:(BOOL)arg1;

@end
