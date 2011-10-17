/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSData;

@interface GMMIncomingThumbnail : PBCodable  {
    int _width;
    int _height;
    NSData *_thumbnailData;
}

@property int width;
@property int height;
@property(retain) NSData * thumbnailData;


- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setHeight:(int)arg1;
- (int)height;
- (id)dictionaryRepresentation;
- (void)setWidth:(int)arg1;
- (int)width;
- (void)setThumbnailData:(id)arg1;
- (id)thumbnailData;
- (id)description;
- (void)dealloc;

@end