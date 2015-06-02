/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLVertexAttributeDescriptor : NSObject <NSCopying> {
    unsigned int _bufferIndex;
    unsigned int _offset;
    unsigned int _vertexFormat;
}

@property (nonatomic) unsigned int bufferIndex;
@property (nonatomic) unsigned int format;
@property (nonatomic) unsigned int offset;

- (unsigned int)bufferIndex;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)format;
- (unsigned int)offset;
- (void)setBufferIndex:(unsigned int)arg1;
- (void)setFormat:(unsigned int)arg1;
- (void)setOffset:(unsigned int)arg1;

@end
