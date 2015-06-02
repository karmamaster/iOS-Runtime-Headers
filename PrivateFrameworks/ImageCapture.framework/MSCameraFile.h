/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface MSCameraFile : ICCameraFile {
    void *_msCameraFileProperties;
}

@property int bitsPerPixel;
@property (copy) NSString *exifCreationDateTime;
@property (copy) NSString *exifModificationDateTime;
@property (readonly) struct timespec { int x1; long x2; } fsCreationTime;
@property (readonly) struct timespec { int x1; long x2; } fsModificationTime;
@property (readonly) unsigned long long fsSN;
@property (readonly) long long fsSize;
@property int imgHeight;
@property int imgWidth;
@property int thmHeight;
@property int thmOffset;
@property int thmSize;
@property int thmWidth;
@property unsigned int type;
@property BOOL updatedBasicMetadata;

- (int)bitsPerPixel;
- (void)dealloc;
- (id)exifCreationDateTime;
- (id)exifModificationDateTime;
- (void)finalize;
- (struct timespec { int x1; long x2; })fsCreationTime;
- (struct timespec { int x1; long x2; })fsModificationTime;
- (unsigned long long)fsSN;
- (long long)fsSize;
- (int)imgHeight;
- (int)imgWidth;
- (id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 fsSN:(unsigned long long)arg4 fsCreationTime:(struct timespec { int x1; long x2; })arg5 fsModificationTime:(struct timespec { int x1; long x2; })arg6 fsSize:(long long)arg7 fsFlags:(unsigned int)arg8;
- (id)metadataDict;
- (void)setBitsPerPixel:(int)arg1;
- (void)setExifCreationDateTime:(id)arg1;
- (void)setExifModificationDateTime:(id)arg1;
- (void)setImgHeight:(int)arg1;
- (void)setImgWidth:(int)arg1;
- (void)setThmHeight:(int)arg1;
- (void)setThmOffset:(int)arg1;
- (void)setThmSize:(int)arg1;
- (void)setThmWidth:(int)arg1;
- (void)setType:(unsigned int)arg1;
- (void)setUpdatedBasicMetadata:(BOOL)arg1;
- (int)thmHeight;
- (int)thmOffset;
- (int)thmSize;
- (int)thmWidth;
- (id)thumbData;
- (unsigned int)type;
- (void)updateBasicMetadata;
- (BOOL)updateBasicMetadataIfNotRAW;
- (BOOL)updatedBasicMetadata;
- (long)writeDataToFile:(int)arg1 fromOffset:(long long)arg2 ofLength:(long long*)arg3;

@end
