/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLStencilDescriptor : NSObject <NSCopying> {
    struct MTLStencilDescriptorPrivate { 
        unsigned int stencilCompareFunction; 
        unsigned int stencilFailureOperation; 
        unsigned int depthFailureOperation; 
        unsigned int depthStencilPassOperation; 
        unsigned int readMask; 
        unsigned int writeMask; 
    } _private;
}

@property (nonatomic) unsigned int depthFailureOperation;
@property (nonatomic) unsigned int depthStencilPassOperation;
@property (nonatomic) unsigned int readMask;
@property (nonatomic) unsigned int stencilCompareFunction;
@property (nonatomic) unsigned int stencilFailureOperation;
@property (nonatomic) unsigned int writeMask;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)depthFailureOperation;
- (unsigned int)depthStencilPassOperation;
- (id)description;
- (unsigned int)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)readMask;
- (void)setDepthFailureOperation:(unsigned int)arg1;
- (void)setDepthStencilPassOperation:(unsigned int)arg1;
- (void)setReadMask:(unsigned int)arg1;
- (void)setStencilCompareFunction:(unsigned int)arg1;
- (void)setStencilFailureOperation:(unsigned int)arg1;
- (void)setWriteMask:(unsigned int)arg1;
- (unsigned int)stencilCompareFunction;
- (unsigned int)stencilFailureOperation;
- (struct MTLStencilDescriptorPrivate { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)stencilPrivate;
- (unsigned int)writeMask;

@end
