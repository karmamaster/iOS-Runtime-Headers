/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKMovieMediaObject : CKAVMediaObject {
    AVURLAsset *_asset;
    BOOL _checkedVideoInfo;
    BOOL _hasVideoTrack;
    struct CGSize { 
        float width; 
        float height; 
    } _pxSize;
    UIImage *_thumbnail;
}

@property (nonatomic, retain) AVURLAsset *asset;
@property (nonatomic) BOOL checkedVideoInfo;
@property (nonatomic) BOOL hasVideoTrack;
@property (nonatomic) struct CGSize { float x1; float x2; } pxSize;
@property (nonatomic, retain) UIImage *thumbnail;

+ (id)UTITypes;
+ (Class)__ck_attachmentItemClass;
+ (id)attachmentSummary:(unsigned int)arg1;
+ (id)fallbackFilenamePrefix;
+ (BOOL)isPreviewable;

- (id)asset;
- (struct CGSize { float x1; float x2; })bbSize;
- (BOOL)canExport;
- (BOOL)checkedVideoInfo;
- (void)dealloc;
- (void)export:(id)arg1;
- (id)generateThumbnailFillToSize:(struct CGSize { float x1; float x2; })arg1 contentAlignmentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2;
- (id)generateThumbnailForWidth:(float)arg1 orientation:(BOOL)arg2;
- (BOOL)hasNoVideoTrack;
- (BOOL)hasVideoTrack;
- (int)mediaType;
- (Class)previewBalloonViewClass;
- (id)previewCacheKeyWithOrientation:(BOOL)arg1;
- (id)previewCachesFileURLWithOrientation:(BOOL)arg1 extension:(id)arg2;
- (id)previewForWidth:(float)arg1 orientation:(BOOL)arg2;
- (id)previewItemTitle;
- (struct CGSize { float x1; float x2; })pxSize;
- (void)setAsset:(id)arg1;
- (void)setCheckedVideoInfo:(BOOL)arg1;
- (void)setHasVideoTrack:(BOOL)arg1;
- (void)setPxSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setThumbnail:(id)arg1;
- (id)thumbnail;
- (void)updateVideoInfo;

@end
