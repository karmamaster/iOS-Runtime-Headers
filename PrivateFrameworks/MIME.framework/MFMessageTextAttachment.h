/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFMessageTextAttachment : NSObject {
    NSMutableDictionary *_cache;
}

@property (nonatomic, retain) MFMessageFileWrapper *fileWrapper;

// Image: /System/Library/PrivateFrameworks/MIME.framework/MIME

+ (unsigned int)precedenceLevel;

- (unsigned int)approximateSize;
- (id)cachedValueForKey:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)download;
- (id)fileWrapper;
- (id)fileWrapperForcingDownload:(BOOL)arg1;
- (BOOL)hasBeenDownloaded;
- (id)init;
- (id)initWithWrapper:(id)arg1;
- (void)inlineDisplayData:(id*)arg1 mimeType:(id*)arg2;
- (BOOL)isPlaceholder;
- (id)mimePart;
- (BOOL)needsRedownload;
- (id)persistentUniqueIdentifier;
- (void)setCachedValue:(id)arg1 forKey:(id)arg2;
- (void)setFileWrapper:(id)arg1;
- (void)setMimePart:(id)arg1;
- (BOOL)shouldDownloadAttachmentOnDisplay;
- (id)textEncodingGuess;
- (id)textEncodingNameForData:(id)arg1 mimeType:(id)arg2;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

- (id)_contentTypeByStrippingZipIfNeeded:(BOOL)arg1;
- (BOOL)_isSinglePagePDFThatIsAllowedToBeInline;
- (id)contentType;
- (unsigned int)imageScalingFlags;
- (BOOL)isCalendarFile;
- (BOOL)isContentDownloadable;
- (BOOL)isContentOpenable;
- (BOOL)isDisplayableInline;
- (BOOL)isDisplayableInsidePlugin;
- (BOOL)isPass;
- (struct CGSize { float x1; float x2; })mf_markupSizeForImageScale:(unsigned int)arg1;
- (id)mf_markupStringForComposition:(BOOL)arg1 prependBlankLine:(BOOL)arg2 imageScale:(unsigned int)arg3;
- (id)mf_markupURL;
- (id)mimeType;
- (id)pass;
- (void)setImageScalingFlags:(unsigned int)arg1;
- (id)unzippedContentType;

@end
